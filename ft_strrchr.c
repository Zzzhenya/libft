/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:45:49 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/22 13:58:35 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s ++;
	}
	return (ptr);
}

int	main(void)
{
	write (1, strrchr("HelloWorld!", 'o'), 2);
	write (1, ft_strrchr("HelloWorld!", 'o'), 2);
	return (0);
}
