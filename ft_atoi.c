/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <sde-silv@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:50 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/01 15:36:53 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
/*
#include <unistd.h>
#include <stdlib.h>
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 0;
	n = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign ++;
		i ++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{	
		n = (n * 10) + (str[i] - 48);
		i ++;
	}
	if (sign % 2 > 0)
		return (-1 * n);
	return (n);
}
/*
int	main(void)
{
	char	*str;

	str = "4000000000";
	ft_putnbr_fd(atoi((const char *)str), 1);
	write (1, "\n", 1);
    ft_putnbr_fd(ft_atoi((const char *)str), 1);
    write (1, "\n", 1);
	return (0);
}
*/
