/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_validations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:47:00 by vigomes-          #+#    #+#             */
/*   Updated: 2026/06/14 15:27:13 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	error_message(char *error_text)
{
	ft_putstr(RED "Error: " DEFAULT);
	ft_putstr(error_text);
}

static void	invalid_argument(char iarg, const char *fstr, unsigned long int i)
{
	unsigned long int	j;

	j = 0;
	ft_putstr(RED "error: " DEFAULT "invalid argument type: '%");
	ft_putchar(iarg);
	ft_putstr("'\n");
	ft_putstr_nl((char *)fstr);
	ft_putchar('\n');
	while (j++ != i - 1)
		ft_putchar(' ');
	ft_putstr(GREEN "~^\n");
	ft_putstr(RED "'%");
	ft_putchar(iarg);
	ft_putstr("' is not a valid argument type!\n" DEFAULT);
}

static int	validate_eol(const char c)
{
	if (c == '\0')
	{
		error_message("'%' right before a null terminator, change to '%%'!\n");
		return (0);
	}
	if (c == '\n')
	{
		error_message("'%' right before line feed (\\n), change to '%%'!\n");
		return (0);
	}
	return (1);
}

static int	validate_indentifier(const char *fstr)
{
	unsigned long int	i;

	i = 0;
	while (fstr[i] != '\0')
	{
		if (fstr[i] != '%')
			i++;
		else
		{
			i++;
			if (!validate_eol(fstr[i]))
				return (0);
			else if (fstr[i] == '%' || fstr[i] == 'c' || fstr[i] == 's'
				|| fstr[i] == 'i' || fstr[i] == 'd' || fstr[i] == 'u'
				|| fstr[i] == 'p' || fstr[i] == 'x' || fstr[i] == 'X')
				i++;
			else
			{
				invalid_argument(fstr[i], fstr, i);
				return (0);
			}
		}
	}
	return (1);
}

int	validate_string(const char *fstr)
{
	if (!fstr)
	{
		ft_putstr(RED "error: " DEFAULT "null string is not accepted!\n");
		return (0);
	}
	if (!validate_indentifier(fstr))
		return (0);
	return (1);
}
