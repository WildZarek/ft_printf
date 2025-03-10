/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:23:10 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 20:21:54 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_chr(int c, int fd)
{
	write(fd, &c, sizeof(char));
	return (1);
}

/*
int	main(void)
{
	ft_write_chr('W');
	// Expected output: W
	// Expected return: 1
	return (0);
}
*/
