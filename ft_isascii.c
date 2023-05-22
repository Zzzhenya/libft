/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:38:23 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/16 12:28:28 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include<unistd.h>
#include<ctype.h>
#include<stdio.h>
*/
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf ("isascii: %d", isascii(161));
	printf ("\nft_isascii: %d \n", ft_isascii(161));
	return (0);
}
*/
