/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:52:02 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/02 17:29:22 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
#include <unistd.h>
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (start <= ft_strlen(s) - 1)
		ptr = malloc(len);
		ft_strlcpy(ptr, s + start, len);
		return (ptr);
	return (NULL);	
}
/*
int	main(void)
{
	char	*str;
	char	*ptr;
	size_t	len;

	len = 1;
	str = "";
	ptr = ft_substr(str, 0, len);
	ft_putstr_fd(ptr, 1);
	write (1, "\n", 1);
	free(ptr);
	return (0);
}
*/
