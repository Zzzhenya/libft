/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:08:14 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/05 16:44:41 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<ctype.h>
#include<stdio.h>
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int	main(void)
{
	printf("toupper: %c\n", toupper('a'));
	printf("ft_toupper: %c\n", ft_toupper('a'));
	return (0);
}
*/
