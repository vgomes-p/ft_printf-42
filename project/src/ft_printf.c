/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:02:36 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/21 16:25:30 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	unsigned int	i;
	va_list			args;

	i = 0;
	va_start(args, fstr);
	while (fstr[i] != '\0')
	{
		if (fstr[i] != '%')
			ft_putchar(fstr[i]);
		else
		{
			i++;
			if (fstr[i] == '\0')
				return (-1);
			else
				if (handle_args(fstr[i], args) == 3)
					return (1);
		}
		i++;
	}
	va_end(args);
	return (0);
}

int	handle_args(char arg, va_list args)
{
	if (arg == '%')
		ft_putchar('%');
	else if (arg == 'i' | arg == 'd')
		handle_signed(args);
	else if (arg == 'c')
		handle_char(args);
	else if (arg == 's')
		handle_string(args);
	else if (arg == 'u')
		handle_unsigned(args);
	else if (arg == 'p')
		handle_ptr(args);
	else if (arg == 'x')
		handle_lhex(args);
	else if (arg == 'X')
		handle_uhex(args);
	else
	{
		error_message("error_message");
		return (3);
	}
	return (0);
}
