#include "libft.h"
/*
#include <string.h>
#include <unistd.h>
*/

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	char	*char_src;
	char	*char_dest;
	size_t	i;

	char_src = (char *)src;
	char_dest = (char *)dest;
	i = 0;
	while ( i < n)
	{
		char_dest[i] = char_src[i];
		i ++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[12] = "Hello World!";
	char	dest[12];
	char	*rtn;
	int	n;

	n = 5;

	write (1,src, 12);
	write (1, "\n", 1);
	rtn = ft_memcpy(dest, src, n);
	write(1,rtn, n);
	write (1, "\n", 1);	
	return (0);
}
*/
