/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:32:33 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 21:10:11 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex(unsigned long long n, char letter)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_write_hex(n / 16, letter);
	if (letter == 'x')
		len += ft_write_chr("0123456789abcdef"[n % 16], 1);
	else if (letter == 'X')
		len += ft_write_chr("0123456789ABCDEF"[n % 16], 1);
	return (len);
}

/* int	main(void)
{
	ft_write_hex(0x2f, 'x');
	write(1, "\n", 1);
	// Expected output: 2f
	// Expected return: 2
	ft_write_hex(0x2F, 'X');
	// Expected output: 2F
	// Expected return: 2
	ft_write_hex(0x4abc, 'x');
	// Expected output: 4abc
	// Expected return: 4
	return (0);
} */