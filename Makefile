# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsarmien <dsarmien@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 23:02:48 by dsarmien          #+#    #+#              #
#    Updated: 2024/11/04 18:52:51 by dsarmien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Instructions
NAME 	= libftprintf.a
CC 		= gcc
FLAGS 	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

# C Source Files
SRC_MAN = ft_printf.c ft_strlen.c ft_write_chr.c ft_write_str.c ft_write_hex.c \
		  ft_write_ptr.c ft_write_nbr.c ft_write_hex.c

# Object Files
OBJ_MAN = $(SRC_MAN:.c=.o)

# Compiler Rules
%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	$(info [✦] File '$<' compiled.)

$(NAME): $(OBJ_MAN)
	@$(AR) $(NAME) $(OBJ_MAN)
	$(info [^] Mandatory functions compiled.)

all: $(NAME)
	$(info [✔] Static library '$(NAME)' created.)

clean:
	@$(RM) $(OBJ_MAN)
	$(info [!] Object files deleted.)

fclean: clean
	@$(RM) $(NAME)
	$(info [✘] File '$(NAME)' deleted.)

re: fclean all

# Add bonus in the future...¿?
.PHONY: all clean fclean re