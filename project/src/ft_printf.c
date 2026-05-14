/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:02:36 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/14 18:09:59 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	process_args(char arg/*, va_list args*/);

int	ft_printf(const char *fstr/*, ...*/)
{
	unsigned int	i;
	va_list			args;

	i = 0;
	while (fstr != '/0')
	{
		if (fstr[i] != '%')
			ft_putchar(fstr[i]);
		if (fstr[i] == '%')
		{
			i++;
			if (fstr[i] == '\0')
				return (-1);
			else
				if (process_args(fstr[i]/*, args*/) == 3)
					return (1);
		}
	}
	return (0);
}

int	process_args(char arg/*, va_list args*/)
{
	if (arg == '%')
		ft_putchar('%');
	else if (arg == 'i' | arg == 'd')
		insert_signed(42);
	else if (arg == 'c')
		insert_char('c');
	else if (arg == 's')
		insert_string("string");
	else if (arg == 'u')
		insert_unsigned(420000000000000);
	else if (arg == 'p')
		insert_ptr(42);
	else if (arg == 'x')
		insert_lhex(42);
	else if (arg == 'X')
		insert_uhex(42);
	else
	{
		error_message("error_message");
		return (3);
	}
	return (0);
}
