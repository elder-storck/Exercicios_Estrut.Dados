PROJ_NAME = rodador
CC_FLAGS=-c -w -Wall
PASTA = ./objetos/

$(PROJ_NAME): main.o tad_pilha_dupla.o tipoDaLista.o
	mkdir objetos
	gcc -o $(PROJ_NAME) main.o tad_pilha_dupla.o tipoDaLista.o

main.o: main.c
	gcc -o main.o main.c $(CC_FLAGS)

tad_pilha_dupla: tad_pilha_dupla.c
	gcc -o tad_pilha_dupla.o tad_pilha_dupla.c $(CC_FLAGS)

tipoDaLista: tipoDaLista.c
	gcc -o tipoDaLista.c $(CC_FLAGS)

clean:
	rm -rf objetos *.o $(PROJ_NAME)


rmpromper: clean
	rm -rf $(PROJ_NAME)

run:
	valgrind ./$(PROJ_NAME)