/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:23:49 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:55:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	s_n_r(char *str, char *str2, char *str3, int count)
{
	int i;
	
	i = 0;
	while(*str != '\0' & i < count)
	{
		if(str[i] == *str2)
		{
			str[i] = str3[0];
			i++;
		}
		else
			i++;
	}
	ft_putstr(str);
}

int		count_char(char *str)
{
	int i;

	i = 0;
	while(*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int		main(int argc, char **argv)
{	
	int i;

	i = count_char(argv[1]);
	if(argc != 4)
	{
		ft_putchar('\n');
	}
	if(argc == 4)
	{
		s_n_r(argv[1], argv[2], argv[3], i);
	}
}
