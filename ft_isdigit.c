/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:38:23 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/05 12:07:55 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<unistd.h>
#include<ctype.h>
#include<stdio.h>
*/
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}
/*
int	main(void)
{
	printf ("isdigit: %d", isdigit('A'));
	printf ("\nft_isdigit: %d \n", ft_isdigit('A'));
	return (0);
}
*/
