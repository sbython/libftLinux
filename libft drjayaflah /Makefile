# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:46:25 by msbai             #+#    #+#              #
#    Updated: 2023/11/02 10:46:31 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
-include .env
export

FUN := isalpha  \
			isalnum \
			isdigit \
			isascii \
			isprint \
			strlen \
			memset \
			bzero \
			memcpy \
			memmove \
			strlcpy \
			strlcat \
			toupper \
			tolower \
			strchr \
			strrchr \
FUNC := $(patsubst %,%.c, $(FUN))

all: $(FUNC)
	echo $(NAME)
