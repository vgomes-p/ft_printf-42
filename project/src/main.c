/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:03:31 by vigomes-          #+#    #+#             */
/*   Updated: 2026/05/26 16:36:12 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	int		n;
	char	*str;

	n = 42;
	str = "hello";

	ft_printf("---- BASIC TESTS ----\n");

	ft_printf("char      : %c\n", 'A');
	ft_printf("string    : %s\n", str);
	ft_printf("signed d  : %d\n", 42);
	ft_printf("signed i  : %i\n", -42);
	ft_printf("unsigned  : %u\n", 42);
	ft_printf("lower hex : %x\n", 255);
	ft_printf("upper hex : %X\n", 255);
	ft_printf("pointer   : %p\n", &n);
	ft_printf("percent   : %%\n");

	ft_printf("\n---- EDGE TESTS ----\n");

	ft_printf("zero d    : %d\n", 0);
	ft_printf("zero x    : %x\n", 0);
	ft_printf("big hex   : %x\n", 2147483647);
	ft_printf("unsigned  : %u\n", 4294967295U);
	ft_printf("NULL str  : %s\n", NULL);
	ft_printf("NULL ptr  : %p\n", NULL);

	ft_printf("\n---- INVALID FORMAT TESTS ----\n");

	ft_printf("invalid   : %g\n");
	ft_printf("eol       : %\n");
	ft_printf("eos       : %");

	return (0);
}
