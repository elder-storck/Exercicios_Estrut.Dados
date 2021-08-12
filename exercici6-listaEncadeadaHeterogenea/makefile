#makefile

rodador: main.o listaEncHeterogenea.o tipoDaLista.o
	gcc main.o listaEncHeterogenea.o tipoDaLista.o -o rodador

main.o: main.c
	gcc -c main.c

listaEncHeterogenea.o: listaEncHeterogenea.c
	gcc -c listaEncHeterogenea.c

tipoDaLista.o: tipoDaLista.c
	gcc -c tipoDaLista.c

clean:
	rm -rf *.o *~ rodador