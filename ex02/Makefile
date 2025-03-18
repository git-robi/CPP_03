# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 10:59:40 by rgiambon          #+#    #+#              #
#    Updated: 2025/03/18 10:59:42 by rgiambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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
