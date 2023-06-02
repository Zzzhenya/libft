/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:52:02 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/02 15:53:00 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
#include <unistd.h>
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (s[i] && i < start)
		i ++;
	if (s[i] && i == start)
	{
		if (len <= ft_strlen(s + i) - 1)
			ptr = malloc(len);
		else
			ptr = malloc(ft_strlen(s + i));
		i = 0;
		while (s[start + i] && i + 1 < len)
		{
			ptr[i] = s[start + i];
			i ++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	char	*ptr;
	size_t	len;

	len = 4;
	str = "Abcdefghij";
	ptr = ft_substr(str, 3, len);
	ft_putstr_fd(ptr, 1);
	write (1, "\n", 1);
	return (0);
}
*/
