/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:38:23 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/05 12:09:12 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<unistd.h>
#include<ctype.h>
#include<stdio.h>
*/
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (16384);
	return (0);
}
/*
int	main(void)
{
	printf ("isprint: %d", isprint(33));
	printf ("\nft_isprint: %d \n", ft_isprint(33));
	return (0);
}
*/
