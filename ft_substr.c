/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:52:02 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/02 18:04:18 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (start <= ft_strlen(s))
		while (*s && start > 0)
			start --;
		if (len - 1 < ft_strlen(s + (char)start))
		{
			ptr = malloc(len)
			while (s[start + i] && i < len)
			{
				ptr[i] = s[start + i];
				i ++;
			}
			ptr[i] = '\0';
		}
		else
		{
			ptr = malloc(ft_strlen(s + (char)start) + 1)
			while (s[start + i] && i < ft_strlen(s + (char)start))
			{
				ptr[i] = s[start + i];
				i ++;
			}
			ptr[i] = '\0';
		}
	return (ptr);
}
