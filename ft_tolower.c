/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:08:14 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/05 16:49:19 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<ctype.h>
#include<stdio.h>
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int	main(void)
{
	printf("tolower: %c\n", tolower('Z'));
	printf("ft_tolower: %c\n", ft_tolower('Z'));
	return (0);
}
*/
