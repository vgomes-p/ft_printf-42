/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:50:46 by thfernan          #+#    #+#             */
/*   Updated: 2026/05/27 21:55:17 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <limits.h>
#include <stdio.h>

typedef unsigned int	t_ui;

void	normal_flags(char c, char *str, char *ptr, int num, t_ui unbr)
{
	int	i, j;

	printf("\n---character---\n");
	i = ft_printf("[%c]\t", c);
	printf("my: %d\n", i);
	j = printf("[%c]\t", c);
	printf("or: %d\n", j);

	printf("\n---string---\n");
	i = ft_printf("[%s]\t", str);
	printf("my: %d\n", i);
	j = printf("[%s]\t", str);
	printf("or: %d\n", j);

	printf("\n---pointer---\n");
	i = ft_printf("[%p]\t", ptr);
	printf("my: %d\n", i);
	j = printf("[%p]\t", ptr);
	printf("or: %d\n", j);

	i = ft_printf("[%p]\t", NULL);
	printf("my: %d\n", i);
	j = printf("[%p]\t", NULL);
	printf("or: %d\n", j);

	printf("\n---decimal---\n");
	i = ft_printf("[%d]\t", num);
	printf("my: %d\n", i);
	j = printf("[%d]\t", num);
	printf("or: %d\n", j);

	printf("\n---unsigned---\n");
	i = ft_printf("[%u]\t", unbr);
	printf("my: %d\n", i);
	j = printf("[%u]\t", unbr);
	printf("or: %d\n", j);

	printf("\n---hexadecimals---\n");
	i = ft_printf("[%X][%x]\t", num, num);
	printf("my: %d\n", i);
	j = printf("[%X][%x]\t", num, num);
	printf("or: %d\n", j);

	printf("\n---hexadecimal lower---\n");
	i = ft_printf("[%x]\t", num);
	printf("my: %d\n", i);
	j = printf("[%x]\t", num);
	printf("or: %d\n", j);

	printf("\n---hexadecimal upper---\n");
	i = ft_printf("[%X]\t", num);
	printf("my: %d\n", i);
	j = printf("[%X]\t", num);
	printf("or: %d\n", j);

	printf("\n---percent---\n");
	i = ft_printf("[%%]\t");
	printf("my: %d\n", i);
	j = printf("[%%]\t");
	printf("or: %d\n", j);
}

/*
int	main(void)
{
	ft_printf(NULL);
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
*/


int	main(void)
{
	int				c = 'l';
	char			*str = "Teste";
	char			*str2 = NULL;
	void			*pointer = str;
	int				d = -42;
	int				i = 123;
	int				hex = 255;
	int				hexz = 0;
	unsigned int	u = -42;
	unsigned int	un = 0;
	unsigned int	tes = 43;
	int				size_o; // Retorno printf original
	int				size_m; // Retorno minha printf

	printf("=== Original printf ===\n");
    size_o = printf("char: %c, string: %s, ponteiro: %p, decimal: %d, inteiro: %i, unsigned: %u, hex: %x, HEX: %X, porcento: %%\n", c, str, pointer, d, i, u, hex, hex);
    printf("Retorno printf: %d\n\n", size_o);

    printf("=== Minha ft_printf ===\n");
    size_m = ft_printf("char: %c, string: %s, ponteiro: %p, decimal: %d, inteiro: %i, unsigned: %u, hex: %x, HEX: %X, porcento: %%\n", c, str, pointer, d, i, u, hex, hex);
    printf("Retorno ft_printf: %d\n\n", size_m);

	printf("\n==== TESTES ft_printf vs printf ====\n\n");

    // 1. Unsigned
    printf("1. UNSIGNED\n");
    size_o = printf("O: |%u|\n", u);
    size_m = ft_printf("M: |%u|\n", u);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

    // 2. Ponteiros
    printf("2. PONTEIROS\n");
    size_o = printf("O: |%p|\n", pointer);
    size_m = ft_printf("M: |%p|\n", pointer);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

    // 3. Caracteres e strings
    printf("3. CHARS e STRINGS\n");
    size_o = printf("O: |%c| |%s|\n", c, str);
    size_m = ft_printf("M: |%c| |%s|\n", c, str);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);
	size_o = printf("O: |%s|\n", str2);
    size_m = ft_printf("M: |%s|\n", str2);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

    // 4. Porcento
    printf("4. PORCENTO\n");
    size_o = printf("O: |%%|\n");
    size_m = ft_printf("M: |%%|\n");
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

	 // 5. Valores extremos
    printf("5. VALORES EXTREMOS\n");
    size_o = printf("O: |%d| |%d|\n", INT_MIN, INT_MAX);
    size_m = ft_printf("M: |%d| |%d|\n", INT_MIN, INT_MAX);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

	printf("x = 0\n");
	size_o = printf("O: |%x| |%x| |%x|\n", hexz, hexz, hexz);
    size_m = ft_printf("M: |%x| |%x| |%x|\n", hexz, hexz, hexz);
	printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

	printf("X = 0\n");
	size_o = printf("O: |%X| |%X| |%X|\n", hexz, hexz, hexz);
    size_m = ft_printf("M: |%X| |%X| |%X|\n", hexz, hexz, hexz);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);

	size_o = printf("O: |%u| |%u| |%u| |%u|\n", tes, un, 1024, -1024);
    size_m = ft_printf("M: |%u| |%u| |%u| |%u|\n", tes, un, 1024, -1024);
    printf("Retorno O: %d, Retorno M: %d\n\n", size_o, size_m);
	return (0);
}


/*
int	main(void)
{
	char	c = 'g';
	char	*str = "dell";
	char	*ptr = &c;
	int		num = 6010;
	t_ui	unbr = -6010;

	normal_flags(c, str, ptr, num, unbr);
}
*/

/*
int main(void)
{
	int	n;
	
	n = ft_putchar('a');
	printf("\nreturn: %d\n", n);
	return (0);
}
*/