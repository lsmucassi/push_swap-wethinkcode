# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 14:27:48 by lmucassi          #+#    #+#              #
#    Updated: 2017/12/08 14:18:51 by lmucassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#STACK_SWAP	=	push_swap
STACK_CHECK	=	checker
HEADER		=	inc/pushswap.h
LIB			=	libft/libft.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

INC_PATH	=	./inc
INC			=	-I $(HEADER)

SRC_PATH	=	./src/
#SRC_PS		=	push_swap.c
SRC_CK		=	checker.c

SRC_FILE	=	ft_lstlen.c\
				ft_push.c\
				ft_rotate.c\
				ft_swap.c\
				ft_printer.c\
				ft_rev_rotate.c\
				ft_asort.c\
				ft_stack.c\
				check_input.c\
				fill_stack.c\
				check_inst.c

SRCS		=	$(addprefix $(SRC_PATH), $(SRC_FILE))

OBJ			=	 $(SRC_FILE:.c=.o)

all: $(STACK_CHECK)

$(OBJ) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) <@

$(STACK_CHECK):
	@make -C libft/
	@echo "\033[32mCompiling Project Push_Swap...\033[00m"
#	$(CC) -c $(CFLAGS) $(SRC_PATH)$(SRC_PS) $(LIB) -o $(STACK_PS) $(INC)
	@$(CC) $(CFLAGS) $(SRCS) $(SRC_PATH)$(SRC_CK) $(LIB) -o $(STACK_CHECK) $(INC)
	@echo "\033[33mProject Push_Swap Compiled\033[00m"

clean:
	@make clean -C libft/
	@rm $(STACK_CHECK)
#	@rm $(STACK_SWAP)

fclean: clean
	@make fclean -C libft/

re:	fclean all

norm:
	@normenette .src/*
	@normenette main.c

.PHONY: clean fclean all re
