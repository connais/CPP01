SRC = main.cpp Harl.cpp

CC = c++

OBJ = $(SRC:%.cpp=./.build/%.o)

NAME = Harl

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I. -std=c++98

# COLORS
NONE			= \033[0m
CL_LINE			= \033[2K
B_RED			= \033[1;31m
B_GREEN			= \033[1;32m
B_MAGENTA 		= \033[1;35m
B_CYAN 			= \033[1;36m

./.build/%.o : %.cpp
	@$(CC) ${CFLAGS} -I. -o $@ -c $?
	@printf "${B_MAGENTA}Compilling $? ...\n${NONE}"

all :	
	@mkdir -p .build
	@make ${NAME} --no-print-directory


${NAME} : $(OBJ)
	@${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@printf "${B_GREEN}==>{${NAME}} LINKED SUCCESFULLY<==${NONE}\n"

clean :
	@${RM} ./.build
	@printf "${B_RED}XX{${NAME}} CLEANED SUCCESFULLY XX${NONE}\n"

fclean :	clean
	@${RM} ${NAME}
	@printf "${B_RED}XX{${NAME}} FCLEAN SUCCESFULL XX${NONE}\n"


re :	fclean all
