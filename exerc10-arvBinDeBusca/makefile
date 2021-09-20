PROJ_NAME = rodador
CC_FLAGS=-c -w -Wall

$(PROJ_NAME): main.o arvBinDeBusca.o tipoDaLista.o
	gcc -o $(PROJ_NAME) main.o arvBinDeBusca.o tipoDaLista.o

main.o: main.c
	gcc -o main.o main.c $(CC_FLAGS)

arvBinDeBusca: arvBinDeBusca.c
	gcc -o arvBinDeBusca.o arvBinDeBusca.c $(CC_FLAGS)

tipoDaLista: tipoDaLista.c
	gcc -o tipoDaLista.c $(CC_FLAGS)

clean:
	rm -rf *.o $(PROJ_NAME)


rmpromper: clean
	rm -rf $(PROJ_NAME)

run:
	valgrind ./$(PROJ_NAME)