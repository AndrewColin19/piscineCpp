NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Dog.cpp Cat.cpp AAnimal.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

%.o: %.cpp
	${CC} ${CFLAGS} -c $^

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${OBJS}

re: fclean all
