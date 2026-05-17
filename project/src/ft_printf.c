/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:02:36 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/17 16:02:46 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	unsigned int	i;
	unsigned int	j;
	va_list			args;

	i = 0;
	j = 0;
	while (fstr[i] != '\0')
	{
		if (fstr[i] != '%')
		ft_putchar(fstr[i]);
		if (fstr[i] == '%')
		{
			i++;
			va_start(args, j++);
			if (fstr[i] == '\0')
				return (-1);
			else
				if (handle_args(fstr[i], args) == 3)
					return (1);
		}
		i++;
	}
	return (0);
}

int	handle_args(char arg, va_list args)
{
	if (arg == '%')
		ft_putchar('%');
	else if (arg == 'i' | arg == 'd')
		handle_signed(42);
	else if (arg == 'c')
		handle_char('c');
	else if (arg == 's')
		handle_string("string");
	else if (arg == 'u')
		handle_unsigned(420000000000000);
	else if (arg == 'p')
		handle_ptr(42);
	else if (arg == 'x')
		handle_lhex(42);
	else if (arg == 'X')
		handle_uhex(42);
	else
	{
		error_message("error_message");
		return (3);
	}
	return (0);
}
