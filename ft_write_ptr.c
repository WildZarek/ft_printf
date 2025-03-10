/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:24:46 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 21:09:01 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_ptr(unsigned long long ptr)
{
	int	addr;

	if (!ptr)
		return (ft_write_str("(nil)", 1));
	addr = 0;
	addr += ft_write_str("0x", 1);
	addr += ft_write_hex((unsigned long long)ptr, 'x');
	return (addr);
}

/* int	main(void)
{
	// unsigned long long ptr = 0x1234abcd;
	// ft_write_ptr(ptr);
	// Expected output: 1234abcd
	// Expected return: 8
	printf("%p", NULL);
	return (0);
} */
