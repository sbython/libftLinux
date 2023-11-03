# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msbai <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 10:46:25 by msbai             #+#    #+#              #
#    Updated: 2023/11/03 12:20:42 by msbai            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
-include .env
export
fun := isalpha  \
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
FUNC != ls *.c | tr -d ";"

all: $(FUNC)
	gcc *.c libft.h -o rida
