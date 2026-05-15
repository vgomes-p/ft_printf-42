/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:37:21 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/15 10:05:36 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_signed(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'signed inserted'");
}

void	handle_char(int arg)
{
	(void)arg;
	ft_putstr("'char inserted'");
}

void	handle_string(char *arg)
{
	(void)arg;
	ft_putstr("'string inserted'");
}

void	handle_unsigned(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'unsigned inserted'");
}

void	handle_ptr(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'pointer inserted'");
}
