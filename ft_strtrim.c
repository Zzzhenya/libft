/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:59:37 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/06 15:17:50 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	*ft_strchr(const char *s, int c)
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	start = 0;
	ptr = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end --;
	ptr = malloc (sizeof(char) * (end - start + 1));
	if (ptr)
		ft_strlcpy(ptr, s1 + start, (end - start));
	return (ptr);
}
/*
int	main(void)
{
	char *ptr;

	ptr = ft_strtrim("  ", " ");
	write(1, ptr, ft_strlen(ptr));
	free (ptr);
	return (0);
}
*/
