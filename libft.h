/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:27:42 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/20 14:45:54 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** Header files dependencies.
**
** string.h for NULL and size_t.
** stdlib.h for malloc and free.
** unistd.h for write.
*/
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/*
** MAX_SIZE is a MACRO SIZE_MAX of stdint.h, which is forbidden to include
** at the project. It's size is size_t or 18446744073709551615LUU == 2 ^ 64 - 1
** It is too big, to count. Malloc returns error for this value, zsh kills
** proces, when it is bigger then MAX_INT * 2048. But it do well with
** MAX_INT * 2, which is 4294967295. So let MAX_SIZE be it. Or, if necessary,
** you can use a value equal to the massed address. This is the number that can
** be obtained using 8 bytes. size_t(-1)
** macro STDOUT is for fd of ft_putchar etc.
** macro MIN_INT is for mininimal integer value
*/
# define MAX_SIZE SIZE_MAX
# define STDOUT 1

# ifndef SIZE_MAX
#  define SIZE_MAX 0xffffffffffffffff
# endif

# define MIN_INT (-2147483648)

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** Standart library functions.
*/
void			*malloc(size_t size);
void			free(void *ptr);
ssize_t			write(int fildes, const void *buf, size_t nbytes);

/*
** Part 1.
*/
void			*ft_memset(void *dst, int c, size_t size);
void			ft_bzero(void *str, size_t size);
void			*ft_memcpy(void *dst, const void *src, size_t len);
void			*ft_memccpy(void *dst, const void *src, int c, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t size);
void			*ft_memchr(const void *str, int c, size_t size);
int				ft_memcmp(const void *min, const void *sub, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t maxlen);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strncat(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *src, int c);
char			*ft_strrchr(const char *src, int c);
char			*ft_strstr(const char *dst, const char *src);
char			*ft_strnstr(const char *dst, const char *src, size_t size);
int				ft_strcmp(const char *min, const char *sub);
int				ft_strncmp(const char *min, const char *sub, size_t len);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*
** Part 2.
*/
void			*ft_memalloc(size_t size);
void			ft_memdel(void **address_ptr);
char			*ft_strnew(size_t len);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *str, void (*fptr)(char *));
void			ft_striteri(char *str, void (*fptr)(unsigned int, char *));
char			*ft_strmap(const char *str, char (*fptr)(char));
char			*ft_strmapi(const char *str, char (*fptr)(unsigned int, char));
int				ft_strequ(const char *min, const char *sub);
int				ft_strnequ(const char *min, const char *sub, size_t len);
char			*ft_strsub(const char *str, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *src);
char			**ft_strsplit(const char *str, char c);
char			*ft_itoa(int nbr);
void			ft_putchar(char c);
void			ft_putstr(const char *str);
void			ft_putendl(const char *str);
void			ft_putnbr(int nbr);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(const char *str, int fd);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putnbr_fd(int nbr, int fd);

/*
** Bonus.
*/
t_list			*ft_lstnew(const void *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*delptr)(void*, size_t));
void			ft_lstdel(t_list **alst, void (*delptr)(void*, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *node));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *node));

/*
** Expansion.
*/
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_islower(int c);
size_t			ft_strnlen(const char *str, size_t maxlen);
int				ft_power(int base, int pow);
char			*ft_itostr(int nbr, char *str);
char			*ft_strchr_no(const char *str, int c);
char			*ft_strnchr(const char *str, int c, size_t size);
#endif
