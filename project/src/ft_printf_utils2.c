/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:57:50 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/26 16:10:26 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_lhex(va_list *args)
{
	unsigned int	arg;

	arg = va_arg(*args, unsigned int);
	ft_puthexdec("0123456789abcdef", arg);
}

void	handle_uhex(va_list *args)
{
	unsigned int	arg;

	arg = va_arg(*args, unsigned int);
	ft_puthexdec("0123456789ABCDEF", arg);
}
