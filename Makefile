CC = gcc
FLAGS = -ggdb -Wall
LIBS = -lc

build:
	#${CC} ${FLAGS} ${LIBS} src/sudoku_reader.c src/sudoku_reader.h -o reader
	${CC} ${FLAGS} ${LIBS} src/readSudoku.c -o readSudoku

clean:
	rm reader readSudoku
