/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:52:02 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/02 17:43:25 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
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
}
