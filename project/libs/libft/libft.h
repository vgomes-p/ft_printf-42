/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 10:54:50 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/13 10:54:50 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int nb);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *st);
size_t	ft_strlen(const char *st);
char	*ft_strdup(const char *st);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *st, size_t nb);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *st, int fd);
char	*ft_strchr(const char *st, int c);
char	*ft_strrchr(const char *st, int c);
char	**ft_split(char const *str, char ch);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *buff, int c, size_t n);
void	*ft_memchr(const void *st, int c, size_t n);
char	*ft_strtrim(char const *st, char const *set);
char	*ft_strjoin(char const *st1, char const *st2);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_memcmp(const void *st1, const void *st2, size_t n);
int		ft_strncmp(const char *st1, const char *st2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t destsz);
char	*ft_strnstr(const char *st1, const char *st2, size_t n);
void	ft_striteri(char *st, void (*ftn)(unsigned int, char*));
char	*ft_substr(char const *st, unsigned int start, size_t len);
char	*ft_strmapi(char const *st, char (*ftn)(unsigned int, char));

#endif