# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 11:01:22 by rgiambon          #+#    #+#              #
#    Updated: 2025/03/18 11:01:23 by rgiambon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
CXX = c++                  
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) -o $@ $^
	chmod +x $(NAME)

%.o: %.cpp Makefile $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
