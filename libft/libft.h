#include<strings.h>
#ifndef LIBFT_H
# define LIBFT_H
void	*ft_memset(void *s, int c, size_t n);
//rellena zona de memoria con bytes repetidos
void	ft_bzero(void *s, size_t n);
//establece primeros n bytes de una cadena a 0
void	*ft_memcpy(void *dest, const void *src, size_t n);
//copia n bytes de src a dest
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
//copia como maximo n bytes de orig a dest hasta que encuentra el int c
void	*ft_memmove(void *dest, const void *src, size_t n);
//copia n bytes de src a dest(revisar un swap) (superposición)
void	*ft_memchr(const void *s, int c, size_t n);
// n bytes iniciales de *s y se interpretan como caraccteres sin signo
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//compara los primeros n bytes de *s1 y s*2
size_t	ft_strlen(const char *s);
//calcula tamaño de *s
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
//a diferencia de los n, chupan todo el espacio del buff
char	*ft_strchr(const char *s, int c);
//devuelve la primera aparicion de c en *a
void	*ft_calloc(size_t nmemb, size_t size);
//si uno de estos args es 0, devuelve null. asigna espacio no usado a
//nmemb cada uno del tamaño size
char	*ft_strdup(const char *s);
//duplica *s
char	*ft_strrchr(const char *s, int c);
//devuelve un puntero a la ultima coincidencia de la
//c cadena s. el int es el numero
char	*ft_strnstr(const char	*big, const char *little, size_t len);
//https://www.unix.com/man-page/suse/9/strnstr
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif
