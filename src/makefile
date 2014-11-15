CC = g++
SRC = main.cpp MD5.cpp
OBJ = ${SRC:.cpp=.o}
EXE = a.out
CFLG = -c -g

${EXE}: ${OBJ}
	${CC} ${OBJ}
	rm ${OBJ}

${OBJ}: ${SRC}
	${CC} ${CFLG} $?

run:
	./${EXE}

clear:
	rm ${OBJ} ${EXE}
