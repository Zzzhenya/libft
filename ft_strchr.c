/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:49 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/10 17:33:42 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s != '\0')
		s ++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

int	main(void)
{
	write (1, strchr("HelloWor\nld!", 'd'), 5);
	write (1, ft_strchr("HelloWor\nld!", 'd'), 5);
	return (0);
}
