# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 14:29:36 by akeryan           #+#    #+#              #
#    Updated: 2024/06/11 16:55:30 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec 

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			Base.cpp

INCLUDE_FILES = Base.hpp	\
				A.hpp	\
				B.hpp	\
				C.hpp

OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp $(INCLUDE_FILES) 
	$(CXX) $(CXXFLAGS) -o $@ -c $<  

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
