/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:00:11 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/26 16:34:16 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DEFAULT	"\033[0m"
# define RED		"\033[1;31m"
# define CYAN		"\033[1;36m"
# define PINK		"\033[1;35m"
# define GREEN		"\033[1;32m"
# define YELLOW		"\033[1;33m"
# define REWHITE	"\033[1;7;97m"
# define RECYAN		"\033[1;7;36m"
# define REPINK		"\033[1;7;35m"
# define RERED		"\033[1;7;31m"
# define REGREEN	"\033[1;7;32m"
# define REYELLOW	"\033[1;7;33m"

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *fstr, ...);

int		handle_specifiers(char arg, va_list *args);
void	handle_char(va_list *args);
void	handle_string(va_list *args);
void	handle_ptr(va_list *args);
void	handle_lhex(va_list *args);
void	handle_uhex(va_list *args);
void	handle_int(va_list *args);
void	handle_unsigned_int(va_list *args);

void	error_message(char *error_text);
void	invalid_argument(char iarg, const char *fstr, unsigned long int i);
int		validate_eol(const char c);
int		validate_string(const char *fstr);

#endif