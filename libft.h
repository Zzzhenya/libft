#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_isalpha(int c);
int	ft_toupper(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

#endif
