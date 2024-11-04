# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 18:04:30 by jsommet           #+#    #+#              #
#    Updated: 2024/11/04 18:28:53 by jsommet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCS		= megaphone.cpp
SRCDIR		= src
OBJDIR		= .obj
SRCS		:= $(SRCS:%=$(SRCDIR)/%)
OBJS		= $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPC		= c++

# .cpp.o:
# 	$(CPPC) $(CPPFLAGS) -c $< -o $(<:.cpp=.o)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(NAME): $(OBJDIR) $(OBJS)
	$(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CPPC) $(CPPFLAGS) -o $@ -c $^

all: $(NAME)

    
fclean: clean
	@echo removing $(NAME)
	@$(RM) $(NAME)
    
clean:
	@echo removing $(OBJS)
	@$(RM) $(OBJS) $(OBJDIR)
    
re: fclean all

test: re
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all clean fclean re .cpp.o test
