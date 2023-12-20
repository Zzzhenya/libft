#include "libft.h"

static int  word_count (char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i ++;
		if (str[i])
			count ++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	return (count);
}

static char	*ft_copy_string(char *dest, char *src, int len)
{
 	int i = 0;

 	while (i < len)
 	{
 		dest[i] = src[i];
 		i ++;
 	}
 	dest[i] = '\0';
 	return(dest);
}

static void	*ft_free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i ++;
	}
	free(arr);
	arr = NULL;
	return (NULL);
}

char	**ft_splitbyspace(char *str)
{
	char **arr;
	int i;
	int k;
	int start;

	i = 0;
	k = 0;
	start = 0;
	arr = NULL;
	arr = malloc(sizeof(char *) * (word_count(str) + 1));
	if (!arr)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > start)
		{
			arr[k] = NULL;
			arr[k] = (char *)malloc(sizeof(char) * ((i - start) + 1));
			if (!arr[k])
				return(ft_free_arr(arr));
			ft_copy_string(arr[k], &str[start], i - start);
			k ++;
		}
	}
	arr[k] = NULL;
	return (arr);
}