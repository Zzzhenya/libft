/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:34:09 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/09 11:38:36 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('a', 1);
	return (0);
}
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
