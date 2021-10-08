PROJ_NAME = rodador
CC_FLAGS=-c -w -Wall

$(PROJ_NAME): main.o listaGen.o tadAluno.o tipoDaLista.o
	gcc -o $(PROJ_NAME) main.o listaGen.o tadAluno.o tipoDaLista.o

main.o: main.c
	gcc -o main.o main.c $(CC_FLAGS)

listaGen: listaGen.c
	gcc -o listaGen.o listaGen.c $(CC_FLAGS)

tadAluno: tadAluno.c
	gcc -o tadAluno.o tadAluno.c $(CC_FLAGS)

tipoDaLista: tipoDaLista.c
	gcc -o tipoDaLista.o tipoDaLista.c $(CC_FLAGS)



clean:
	rm -rf *.o $(PROJ_NAME)


rmpromper: clean
	rm -rf $(PROJ_NAME)

run:
	valgrind ./$(PROJ_NAME)