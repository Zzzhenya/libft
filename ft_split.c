/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:47:28 by sde-silv          #+#    #+#             */
/*   Updated: 2023/06/08 18:34:38 by sde-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	**ft_split (char const *s, char c)
{
	char	*word;
	char	**arr;

	while not delimiter consider as a word
	for each word
		find len
	when delimiter go to next and start new word/reset word

	
	

}

int	main(void)
{
	char	**ptr;
	int		i;

	ptr = ft_split("Hello World!", " ");
	while (ptr[i])
	{
		write(1, ptr[i], strlen(ptr[i]) + 1);
		i ++;
	}
	return (0);
}
