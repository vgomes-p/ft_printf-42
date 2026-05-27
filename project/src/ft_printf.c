/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:02:36 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/26 16:08:45 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *fstr, ...)
{
	unsigned int	i;
	va_list			args;

	i = 0;
	va_start(args, fstr);
	if (validate_string(fstr))
		return (-1);
	while (fstr[i] != '\0')
	{
		if (fstr[i] != '%')
			ft_putchar(fstr[i]);
		else
		{
			i++;
			if (handle_specifiers(fstr[i], &args))
				return (1);
		}
		i++;
	}
	va_end(args);
	return (0);
}

int	handle_specifiers(char arg, va_list *args)
{
	if (arg == '%')
		ft_putchar('%');
	else if (arg == 'i' || arg == 'd')
		handle_int(args);
	else if (arg == 'u')
		handle_unsigned_int(args);
	else if (arg == 'c')
		handle_char(args);
	else if (arg == 's')
		handle_string(args);
	else if (arg == 'p')
		handle_ptr(args);
	else if (arg == 'x')
		handle_lhex(args);
	else if (arg == 'X')
		handle_uhex(args);
	else
	{
		error_message("invalid argument type!");
		return (1);
	}
	return (0);
}
