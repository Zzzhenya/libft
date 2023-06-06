/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:08:35 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/06 19:37:33 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
/*
#include <unistd.h>

char ft_toupper_fd(unsigned int i, char c)
{
    if ('a' <= (int)c && (int)c <= 'z')
        return ((char)((int)c - 32));
    else
        return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*c;

	c = malloc(ft_strlen(s) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = (*f)(i, s[i]);
		i ++;
	}
	c[i] = '\0';
	return(c);
}
/*
int	main(void)
{
	char	*ptr;
	ptr = "Hello\n";
	write(1,ft_strmapi(ptr, ft_toupper_fd),6);
	return (0);
}
*/