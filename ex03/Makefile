NAME = main 
SRC = AMateria/AMateria.cpp	\
			Character/Character.cpp \
			Cure/Cure.cpp\
			Ice/Ice.cpp\
			MateriaSource/MateriaSource.cpp\
			main.cpp \

	
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)
FLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -MMD -MP
CC = c++
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp 
			$(CC) $(FLAGS) -c $< -o $@ 

clean : 
			$(RM) $(OBJ) $(DEP)

fclean: clean 
			$(RM) $(NAME)

re : fclean

-include $(DEP)
valgrind: $(NAME)
	@echo "$(YELLOW)🔍 Lancement de Valgrind sur ./minishell..."
	clang -g main.cpp -o main && leaks -atExit -- 
	./main
.PHONY: clean fclean 

