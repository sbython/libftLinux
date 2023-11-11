# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:46:25 by msbai             #+#    #+#              #
#    Updated: 2023/11/10 14:05:28 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := libft.a
CCF  := cc -Wall -Wextra -Werror
FU := ft_bzero \
      	ft_isascii \
	ft_memcpy \
	ft_strlcat \
       	ft_strrchr \
	ft_isalnum \
       	ft_isdigit \
       	ft_memset \
       	ft_strlcpy \
       	ft_tolower \
	ft_isalpha \
	ft_isprint \
      	ft_strchr \
	ft_strlen \
	ft_toupper \
	ft_calloc \
	ft_memmove \
	ft_atoi	\
	ft_strnstr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strdup \
	ft_substr \
	ft_strcat \
	ft_strjoin \
	ft_itoa \
	ft_strnub \
	ft_strtrim \
	ft_strmapi \
	ft_split
FUN := $(patsubst %,%.c,$(FU))
OBJ := $(patsubst %,%.o,$(FU))

all: $(NAME)

$(NAME):$(OBJ)
	$(CCF) -c $(FUN)
	ar rcs $(NAME) $(OBJ)
clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
re: fclean all 
.PHONY: all re fclean clean	
