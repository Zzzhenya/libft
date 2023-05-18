#include <string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	
	return (size);
}

int	main(void)
{
	char	src[10] = "Hello";
	char	dest[10] = "AAAAAAAAA";
	int	size;

	write (1, src, 10);
	write (1, "\n", 1);
	write (1, dest, 10);
	write (1, "\n", 1);
	size = strlcpy(dest, src, 5);
	write (1, src, 10);
	write (1, "\n", 1);
	write (1, dest, size);
	write (1, "\n", 1);
	return (0);
}
