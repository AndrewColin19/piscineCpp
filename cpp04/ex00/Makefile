NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

%.o: %.cpp
	${CC} ${CFLAGS} -c $^

OBJS = ${SRCS:.cpp=.o}
all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

re: fclean all
