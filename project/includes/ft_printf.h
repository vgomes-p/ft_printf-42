/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:00:11 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/14 18:10:18 by vigomes-         ###   ########.fr       */
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

int		ft_printf(const char *fstr/*, ...*/);

int		process_args(char arg/*, va_list args*/);

void	insert_char(int arg);
void	insert_string(char *arg);
void	error_message(char *error_text);
void	insert_ptr(unsigned long int arg);
void	insert_lhex(unsigned long int arg);
void	insert_uhex(unsigned long int arg);
void	insert_signed(unsigned long int arg);
void	insert_unsigned(unsigned long int arg);

#endif