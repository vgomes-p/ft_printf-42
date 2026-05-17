/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:00:11 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/17 13:48:56 by vigomes-         ###   ########.fr       */
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

int		handle_args(char arg, va_list args);

void	handle_char(int arg);
void	handle_string(char *arg);
void	error_message(char *error_text);
void	handle_ptr(unsigned long int arg);
void	handle_lhex(unsigned long int arg);
void	handle_uhex(unsigned long int arg);
void	handle_signed(unsigned long int arg);
void	handle_unsigned(unsigned long int arg);

#endif