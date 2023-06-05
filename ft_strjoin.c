//#include <string.h>
//#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	else
		ft_strlcpy(ptr, s1,ft_strlen(s1) + 1);
		ft_strlcpy(ptr + ft_strlen(s1) , s2, ft_strlen(s2) + 1);
		return (ptr);
}
/*
int	main(void)
{
	write(1, ft_strjoin("Hello", " World"), 12);
	return (0);
}
*/