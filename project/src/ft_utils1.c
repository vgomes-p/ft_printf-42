/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:37:21 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/14 18:06:27 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	insert_signed(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'signed inserted'");
}

void	insert_char(int arg)
{
	(void)arg;
	ft_putstr("'char inserted'");
}

void	insert_string(char *arg)
{
	(void)arg;
	ft_putstr("'string inserted'");
}

void	insert_unsigned(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'unsigned inserted'");
}

void	insert_ptr(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'pointer inserted'");
}
