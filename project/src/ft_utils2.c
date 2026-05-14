/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:57:50 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/14 18:06:31 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	insert_lhex(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'lower hex inserted'");
}

void	insert_uhex(unsigned long int arg)
{
	(void)arg;
	ft_putstr("'upper hex inserted'");
}

void	error_message(char *error_text)
{
	ft_putstr(RED "Error: " DEFAULT);
	ft_putstr(error_text);
}
