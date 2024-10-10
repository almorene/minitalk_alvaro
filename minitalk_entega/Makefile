# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 19:36:06 by almorene          #+#    #+#              #
#    Updated: 2024/10/01 20:55:53 by almorene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

LIBFT = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror

NAME_CLIENT = client

CLIENT_SOURCE = client.c

CLIENT_OBJ = $(CLIENT_SOURCE:.c=.o)

NAME_SERVER= server

SERVER_SOURCE = server.c \
				utils.c \

SERVER_OBJ = $(SERVER_SOURCE:.c=.o)
		
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): ${CLIENT_OBJ}
	cd libft && $(MAKE)
	${CC} ${CFLAGS} ${CLIENT_OBJ} $(LIBFT)  -o ${NAME_CLIENT}

$(NAME_SERVER): ${SERVER_OBJ}
	cd libft && $(MAKE)
	${CC} ${CFLAGS} ${SERVER_OBJ} $(LIBFT) -o ${NAME_SERVER}		

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	cd libft && make clean
	@rm -rf $(SERVER_OBJ) $(CLIENT_OBJ)

fclean: clean
	cd libft && make fclean
	@rm -rf $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY : all clean fclean re