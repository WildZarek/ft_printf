/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:47:40 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 21:19:17 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_nbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_write_str("-2147483648", 1);
		return (len);
	}
	if (n < 0)
	{
		len += ft_write_chr('-', 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_write_nbr(n / 10);
	len += ft_write_chr("0123456789"[n % 10], 1);
	return (len);
}

int	ft_write_unbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_write_unbr(n / 10);
	len += ft_write_chr("0123456789"[n % 10], 1);
	return (len);
}

/* int	main(void)
{
	ft_write_nbr(-42);
	// Expected output: -42
	// Expected return: 2
	ft_write_unbr(4242)
	// Expected output: 4242
	// Expected return: 4
	return (0);
} */