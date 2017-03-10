main: Pieza.o PiezaVerde.o mainTemporal.o 
	g++ Pieza.o PiezaVerde.o mainTemporal.o -o main

mainTemporal.o:	mainTemporal.cpp Pieza.h PiezaVerde.h
	g++ -c mainTemporal.cpp 

PiezaVerde.o:	PiezaVerde.h Pieza.h PiezaVerde.cpp
	g++	-c PiezaVerde.cpp

Pieza.o: Pieza.h Pieza.cpp
	g++ -c Pieza.cpp

clean:
	rm *.o main
