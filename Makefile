GXX := g++ -Wall -Werror

MAIN := src/Main.cpp
NAME := Application

create: ${MAIN}
	${GXX} $^ -o ${NAME}

clear: Application
	rm Application