/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:58:56 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/22 14:11:01 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <string.h>
#include <unistd.h>


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_src;
	char	*char_dest;
	char	temp[n];
	size_t	i;

	i = 0;
	char_src = (char *)src;
	char_dest = (char *)dest;
	while (i < n)
	{
		temp[i] = char_src[i];
		i ++;
	}
	i = 0;
	while (i < n)
	{
		char_dest[i] = temp[i];
		i ++;
	}
	return (dest);
}

int	main(void)
{
	char    *src = "Hello World!";
	char    dest[12];
	char    *rtn;
	int     n;

	n = 5;

	write (1,src, 12);
	write (1, "\n", 1);
	write (1, dest, 12);
	write(1, "\n", 1);
	rtn = ft_memmove(dest, src, n);
	write(1,rtn, n);
	write (1, "\n", 1);
	return (0);
}
