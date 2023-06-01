/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:50 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/01 17:44:29 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
#include <unistd.h>
#include <stdlib.h>
*/

static int	ft_isspace(int c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		sign;

	i = 0;
	sign = 0;
	n = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) != 0)
		i ++;
	while (str[i] != '\0' && sign == 0)
	{
		if (str[i] == '+')
			sign = 1;
		else if (str[i] == '-')
			sign = -1;
		i ++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{	
		n = (n * 10) + (str[i] - 48);
		i ++;
	}
	if (sign == -1 || sign == 1)
		return (sign * n);
	return (0);
}
/*
int	main(void)
{
	char	*str;

	str = "+47";
	ft_putnbr_fd(atoi((const char *)str), 1);
	write (1, "\n", 1);
	ft_putnbr_fd(ft_atoi((const char *)str), 1);
	write (1, "\n", 1);
	return (0);
}
*/
