# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jhendrik <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/28 10:58:27 by jhendrik      #+#    #+#                  #
#    Updated: 2023/01/18 09:21:23 by jhendrik      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADERFILES := libft.h
SRCFILES := ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_strlcpy.c	\
			ft_memmove.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_itoa_base.c	\
			ft_luitoa_base.c\
			ft_putlui_base.c\
			ft_putnbr_base.c
SRCFILES_BONUS := ft_lstnew_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c 
OBJFILES := $(SRCFILES:.c=.o)
OBJFILES_BONUS := $(SRCFILES_BONUS:.c=.o)
CFLAGS ?= -Wall -Werror -Wextra

ifdef BONUS
	OBJFILES += $(OBJFILES_BONUS)
endif

# Reset
Reset="\033[0m"			# Text Reset

# Regular Colors
Black="\033[0;30m"			# Black
Red="\033[0;31m"			# Red
Green="\033[0;32m"			# Green
Yellow="\033[0;33m"			# Yellow
Blue="\033[0;34m"			# Blue
Light_Blue="\033[1;34m"		#Light Blue
Purple="\033[0;35m"			# Purple
Cyan="\033[0;36m"			# Cyan
White="\033[0;37m"			# White

# Bold text style
Bold="\033[1m"

all: $(NAME)

$(NAME): $(OBJFILES)
	@$(AR) -rsc $@ $^
	@echo $(Green) $(Bold)Made $(NAME) succesfully!$(Reset) $(Reset)

bonus:
	@$(MAKE) BONUS=1 all

%.o: %.c $(HEADERFILES)
	@echo $(Light_Blue)	$< $(Reset)
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@echo $(Yellow) Cleaned all object files $(Reset)
	@rm -f $(OBJFILES) $(OBJFILES_BONUS)

fclean: clean
	@echo $(Yellow) Cleaned $(NAME) $(Reset)
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus
