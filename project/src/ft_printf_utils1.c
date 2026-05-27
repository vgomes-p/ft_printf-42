/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:37:21 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/26 16:23:42 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_char(va_list *args)
{
	char	arg;

	arg = (char)va_arg(*args, int);
	ft_putchar(arg);
}

void	handle_string(va_list *args)
{
	char	*arg;

	arg = va_arg(*args, char *);
	if (!arg)
		arg = "(null)";
	ft_putstr(arg);
}

void	handle_int(va_list *args)
{
	int	arg;

	arg = va_arg(*args, int);
	ft_putnbr(arg);
}

void	handle_unsigned_int(va_list *args)
{
	unsigned int	arg;

	arg = va_arg(*args, unsigned int);
	ft_putunbr(arg);
}

void	handle_ptr(va_list *args)
{
	void			*arg;
	unsigned long	narg;

	arg = va_arg(*args, void *);
	if (arg)
	{
		narg = (unsigned long)arg;
		ft_putstr("0x");
		ft_puthexdec("0123456789abcdef", narg);
		return ;
	}
	ft_putstr("(nil)");
}
