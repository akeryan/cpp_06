# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 09:58:33 by akeryan           #+#    #+#              #
#    Updated: 2024/06/11 14:16:47 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec 

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			Serializer.cpp	\
			Data.cpp	

INCLUDE_FILES = Serializer.hpp	\
				Data.hpp	

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
