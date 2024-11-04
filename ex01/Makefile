# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsommet <jsommet@student.42.fr >           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 18:04:30 by jsommet           #+#    #+#              #
#    Updated: 2024/11/04 20:53:14 by jsommet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook
SRCS		= main.cpp contact.cpp phonebook.cpp utils.cpp
INCLUDES	= contact.hpp phonebook.hpp main.hpp
INCDIR		= include
SRCDIR		= src
OBJDIR		= .obj
SRCS		:= $(SRCS:%=$(SRCDIR)/%)
INCLUDES	:= $(INCLUDES:%=$(INCDIR)/%)
OBJS		= $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -I$(INCDIR) -std=c++98
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

.PHONY: all clean fclean re .cpp.o test
