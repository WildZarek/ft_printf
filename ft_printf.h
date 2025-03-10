/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:35:17 by dsarmien          #+#    #+#             */
/*   Updated: 2024/11/05 21:11:28 by dsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* PRE-PROCESSOR RULES */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* INCLUDES */

# include <stdarg.h> // for va_start, va_arg, va_copy, va_end usage
# include <stdlib.h> // for size_t usage
# include <unistd.h> // for write usage
// #include "libft/libft.h" // for calling some functions from our library

/* MANDATORY PROTOTYPES */

/**
 * @brief
 * @param format The string to be processed and printed.
 * @param ... Variadic number of arguments.
 * @return The number of characters written.
 */
int		ft_printf(const char *format, ...);

/* AUXILIAR PROTOTYPES */

/**
 * @brief Calculate the length of the given string.
 * @param s The string to calculate the length of.
 * @return The length of the string 's'.
 */
int		ft_strlen(const char *s);

/**
 * @brief Writes the character 'c' to the given file descriptor 'fd'.
 * @param s The character to write.
 * @param fd The file descriptor on which to write.
 * @return The number of characters written (in this case, just 1).
 */
int		ft_write_chr(int c, int fd);

/**
 * @brief Writes the string 'str' to the given file descriptor 'fd'.
 * @param str The string to write.
 * @param fd The file descriptor on which to write.
 * @return The number of characters written.
 */
int		ft_write_str(char *str, int fd);

/**
 * @brief Writes the memory address as hexadecimal format.
 * @param ptr The memory address (pointer) to write.
 * @return The number of characters written.
 */
int		ft_write_ptr(unsigned long long ptr);

/**
 * @brief Writes the number 'n' to the given file descriptor 'fd'.
 * @param s The number to write.
 * @param fd The file descriptor on which to write.
 * @return The number of characters written.
 */
int		ft_write_nbr(int n);

/**
 * @brief Writes the number 'n' as unsigned int to the given file descriptor.
 * @param s The number to write.
 * @param fd The file descriptor on which to write.
 * @return The number of characters written.
 */
int		ft_write_unbr(unsigned int n);

/**
 * @brief Writes the hexadecimal number given as lowercase or uppercase.
 * @param n The hexadecimal number to write.
 * @param letter A character which is the type of convertion;
 *               'x' for lowercase, 'X' for uppercase.
 * @return The number of characters written.
 */
int		ft_write_hex(unsigned long long n, char letter);

#endif