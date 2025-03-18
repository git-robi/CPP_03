# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 10:55:15 by rgiambon          #+#    #+#              #
#    Updated: 2025/03/18 10:55:17 by rgiambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp ClapTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = ClapTrap.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^
	chmod +x $(NAME)

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
