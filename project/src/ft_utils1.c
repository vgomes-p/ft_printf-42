/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:37:21 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/21 16:45:15 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_signed(va_list args)
{
	signed long int	arg;

	arg = va_arg(args, signed long int);
	ft_putstr(ft_itoaf(arg));
}

void	handle_char(va_list args)
{
	char	arg;

	arg = va_arg(args, char);
	ft_putchar(arg);
}

void	handle_string(va_list args)
{
	char	*arg;

	arg = va_arg(args, char *);
	ft_putstr(arg);
}

void	handle_unsigned(va_list args)
{
	unsigned long int	arg;

	arg = va_arg(args, unsigned long int);
	ft_putnbr(arg);
}

void	handle_ptr(va_list args)
{
	(void)args;
	ft_putstr("'pointer inserted'");
}
