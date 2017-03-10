main: Pieza.o PiezaVerde.o  PiezaRoja.o PiezaAmarilla.o PiezaAzul main.o
	g++ Pieza.o PiezaVerde.o main.o -o main -lncurses

main.o:	main.cpp Pieza.h PiezaVerde.h
	g++ -c main.cpp 

PiezaVerde.o:	PiezaVerde.h Pieza.h PiezaVerde.cpp
	g++	-c PiezaVerde.cpp

PiezaRoja.o:	PiezaRoja.h Pieza.h PiezaRoja.cpp
	g++ -c PiezaRoja.cpp

PiezaAmarilla.o:	PiezaAmarilla.h Pieza.h PiezaAmarilla.cpp
	g++ -c PiezaAmarilla.cpp

PiezaAzul.o:	PiezaAzul.h Pieza.h PiezaAzul.cpp
	g++ -c PiezaAzul.cpp

Pieza.o: Pieza.h Pieza.cpp
	g++ -c Pieza.cpp

clean:
	rm *.o main
