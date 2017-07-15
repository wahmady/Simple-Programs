/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:14:26 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 21:05:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_count_char(char *str)
{
	int	i;

	i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

void	reverse(char *str, int index)
{
	int i;
	
	index = index - 1;
	i = 0;
	while(i <= index)
	{
		ft_putchar(str[index]);
		index--;
	}
}

int		main(int argc, char **argv)
{
	int count;
	
	if(argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	count = ft_count_char(argv[1]);
	if(argc == 2)
	{
		reverse(argv[1], count);
		ft_putchar('\n');
	}
}
