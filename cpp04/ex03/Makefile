NAME = bob
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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
