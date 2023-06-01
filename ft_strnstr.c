/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:38:24 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/01 14:02:34 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <unistd.h>
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	i = 0;
	j = 0;
	llen = ft_strlen(little);
	if (llen < 1)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			if (j == llen - 1)
				return ((char *)big + i - j);
			j ++;
		}
		else
			j = 0;
		i ++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Foo";
	char *ptr;

	write(1, ft_strnstr(largestring, smallstring, 12), 12);

	return (0);
}
*/
