/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:38:23 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/12 12:19:51 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<unistd.h>
#include<ctype.h>
#include<stdio.h>
*/

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1024);
	return (0);
}
/*
int	main(void)
{
	printf ("isalpha: %d", isalpha('a'));
	printf ("\nft_isalpha: %d \n", ft_isalpha('a'));
	return (0);
}
*/
