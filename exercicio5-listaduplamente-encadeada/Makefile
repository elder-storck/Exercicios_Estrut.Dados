#makefile

rodador: main.o listatarefa.o tarefa.o
	gcc main.o listatarefa.o tarefa.o -o rodador

main.o: main.c
	gcc -c main.c

listatarefa.o: listatarefa.c
	gcc -c listatarefa.c

tarefa.o: tarefa.c
	gcc -c tarefa.c

clean:
	rm -rf *.o *~ rodador

run:
	./rodador
valgrind:
	valgrind ./rodador
