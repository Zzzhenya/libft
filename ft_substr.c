/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:52:02 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/06 17:57:11 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
#include <unistd.h>
initiate pointer to NULL
	if index/start is in s
	go to index/start
	check the size of the substring
	compare it with len
		if len - 1 < string after start
			create memory area for size len
			copy until len - 1
			add null terminator
		else
			create memory area for size + 1
			copy until size
			add null terminator
	return pointer to allocated substring memory area
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	sublen;

	ptr = NULL;
	i = 0;
	if (s[i] && start <= ft_strlen(s))
	{
		while (s[i] && i < start)
			i ++;
	}
	sublen = ft_strlen(s + start);
	if (sublen < len)
	{
		ptr = malloc((sublen + 1) * sizeof(char));
		if (ptr)
			ft_strlcpy(ptr, (s + start), sublen + 1);
	}
	else if (sublen >= len)
	{
		ptr = malloc((len + 1) * sizeof(char));
		if (ptr)
			ft_strlcpy(ptr, (s + start), len + 1);
	}

	return (ptr);
}
/*
int	main()
{
	ft_putstr_fd(ft_substr("aaa", 1, 5), 1);
	write (1, "\n", 1);
	return (0);
}
*/
