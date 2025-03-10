/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:02:14 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 20:05:52 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_process_flag(va_list *args, const char letter)
{
	int	printed;

	printed = 0;
	if (letter == 'c')
		printed += ft_write_chr(va_arg(*args, int), 1);
	else if (letter == 's')
		printed += ft_write_str(va_arg(*args, char *), 1);
	else if (letter == 'p')
		printed += ft_write_ptr(va_arg(*args, unsigned long long));
	else if ((letter == 'd') || (letter == 'i'))
		printed += ft_write_nbr(va_arg(*args, int));
	else if (letter == 'u')
		printed += ft_write_unbr(va_arg(*args, unsigned int));
	else if (letter == 'x' || letter == 'X')
		printed += ft_write_hex(va_arg(*args, unsigned int), letter);
	else if (letter == '%')
		printed += ft_write_chr(letter, 1);
	else
		printed += ft_write_chr(letter, 1);
	return (printed);
}

/*
The accepted format specifiers are:
- %c: Print a single character.
- %s: Print a string of characters.
- %p: Print a pointer address.
- %d: Print a decimal number.
- %i: Print an integer in base 10.
- %u: Print an unsigned decimal number.
- %x: Print a number in hexadecimal using [a-f].
- %X: Print a number in hexadecimal using [A-F].
- %%: Print a percent sign.
*/

int	ft_printf(const char *format, ...)
{
	int		i;
	int		printed;
	va_list	args;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			printed += ft_process_flag(&args, format[i + 1]);
			i++;
		}
		else
			printed += ft_write_chr(format[i], 1);
		i++;
	}
	va_end(args);
	return (printed);
}
