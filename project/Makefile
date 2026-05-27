# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vigomes- <vigomes-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/13 10:49:42 by vigomes-          #+#    #+#              #
#    Updated: 2026/05/27 15:38:00 by vigomes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_printf
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -I $(H_DIR) -I $(LIBFT_DIR)
MAKEFLAGS	=	--silent
AR			=	ar -rcs
RM			=	rm -rf

H_DIR		=	includes/
H_SRCS		=	ft_printf.h
HEADER		=	$(addprefix $(H_DIR), $(H_SRCS))

SRCS		=	main.c ft_printf.c ft_printf_validations.c \
				ft_printf_utils1.c ft_printf_utils2.c
S_DIR		=	src/
SOURCE		=	$(addprefix $(S_DIR), $(SRCS))


OBJ_DIR		=	build/
OBJS		=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

LIBFT_DIR	=	includes/libft/
LIBFT		=	$(LIBFT_DIR)libft.a
LIBFT_OBJ	=	$(wildcard $(LIBFT_DIR)*.o)

ALL_FILES	=	$(LIBFT_DIR)*.c $(LIBFT_DIR)*.h $(HEADER) $(SOURCE)

PROGRAM		=	"FT_PRINTF"

DEFAULT		=	\033[0m
RED			=	\033[1;31m
CYAN		=	\033[1;36m
PINK		=	\033[1;35m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
REWHITE		=	\033[1;7;97m
RECYAN		=	\033[1;7;36m
REPINK		=	\033[1;7;35m
RERED		=	\033[1;7;31m
REGREEN		=	\033[1;7;32m
REYELLOW	=	\033[1;7;33m

TOTAL_FILES = $(words $(OBJS) $(LIBFT_OBJ))
COMPLETED = 0

define update_progress
		@if [ "$(COMPLETED)" -eq "0" ]; then \
			clear; \
		fi
		@$(eval COMPLETED=$(shell echo $$(($(COMPLETED)+1))))
		@$(eval PERCENT=$(shell echo $$(($(COMPLETED)*100/$(TOTAL_FILES)))))
		@$(eval FILLED=$(shell echo $$(($(PERCENT)*20/100))))
		@$(eval EMPTY=$(shell echo $$((20-$(FILLED)))))
		@clear
		@printf "$(YELLOW)COMPILING $(PROGRAM)! \n"
		@for i in $$(seq 1 $(FILLED)); do printf "🟧"; done
		@for i in $$(seq 1 $(EMPTY)); do printf "  "; done
		@printf "%d%%$(DEFAULT)" $(PERCENT)
		@if [ "$(COMPLETED)" -eq "$(TOTAL_FILES)" ]; then \
			clear; \
			echo "${GREEN}$(PROGRAM) COMPILED!"; \
			echo "🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩🟩 100%${DEFAULT}"; \
		fi
endef

all: $(NAME)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(OBJ_DIR)%.o: $(S_DIR)%.c $(HEADER)
		@clear
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@
		@$(call update_progress)


$(NAME): $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		@echo "project created as ft_printf"


norm:
		@for file in $(ALL_FILES); do \
			if norminette $$file | grep -q "Error"; then \
				echo "$(RED)❌ $$file$(DEFAULT)"; \
			else \
				echo "$(GREEN)✅ $$file$(DEFAULT)"; \
			fi; \
		done
		-@norminette > norminette.log 2>&1
		@echo "$(CYAN)🆗 Norminette check complete! 🆗$(DEFAULT)"
		@echo "$(CYAN)Norminette report saved in norminette.log!$(DEFAULT)"

clean:
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)
		$(RM) norminette.log
		@make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re norm