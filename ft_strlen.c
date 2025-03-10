/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:36:16 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/01 18:03:35 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	char	*end;

	end = (char *) s;
	while (*end)
		end++;
	return (end - s);
}

/*
int	main(void)
{
	ft_strlen("Hack&Code"); // Expected return: 9
	return (0);
}
*/
