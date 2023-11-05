# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:46:25 by msbai             #+#    #+#              #
#    Updated: 2023/11/05 14:19:35 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := libft.a
CCF  := cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CCF) -c *.c
	ar rcs $(NAME) *.o

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)
re: fclean all 
