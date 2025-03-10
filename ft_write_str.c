/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:23:53 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 20:50:55 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// This function prints the string given as argument (str).
// First, it checks if the pointer to str is not null.
// - If true: set the str param to (null) and continues
// Finally, it prints all the string and returns the characters written,
// which is the total lenght of the str param.

int	ft_write_str(char *str, int fd)
{
	int	s_len;

	if (!str)
		str = "(null)";
	s_len = ft_strlen(str);
	write(fd, str, s_len);
	return (s_len);
}

/*
int	main(void)
{
	ft_write_str("Hack&Code");
	// Expected output: "Hack&Code"
	// Expected return: 9
	return (0);
}
*/
