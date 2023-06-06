/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:59:37 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/06 14:52:38 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	ptr = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
			start ++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end --;
	ptr = malloc(sizeof(char) * (end - start + 1));
	if (ptr)
	{
		ft_strlcpy(ptr, (s1 + start), (end - start));
		ft_strlcpy(ptr + start + end, "\0", 1);
	}
	return (ptr);
}

int	main(void)
{
	char *ptr;

	write(1, "Hello\n", 6);
	ptr = ft_strtrim(" Hello ", "Hel ");
	write(1, ptr, ft_strlen(ptr));
	free (ptr);
	return (0);
}

