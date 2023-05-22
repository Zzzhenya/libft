/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:40:04 by sde-silv          #+#    #+#             */
/*   Updated: 2023/05/16 14:30:31 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	ft_putendl_fd("Hello World!", 1);
	return (0);
}
*/
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i ++;
	}
	write (fd, "\n", 1);
}
