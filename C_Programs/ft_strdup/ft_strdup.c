/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 21:12:39 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 21:52:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
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

char	*ft_strdup(char *src)
{
	char *str2;
	int index;
	int length;
	
	index = 0;
	length = str_len(src);
	str2 = (malloc(sizeof(char) * length));
	while(*src != '\0')
	{
		str2[index] = *src;
		index++;
		src++;
	}
	index = 0;
	return(str2);
}

int		main()
{
	return(0);
}
