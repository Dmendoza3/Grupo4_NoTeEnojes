#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <typeinfo>

using namespace std;

class jugador
{
	public:
		int color;
		vector<Pieza> piezas;
};

void iniciarTablero(char**);
void imprimirTablero(char**);
int dados();

int main()
{
	srand ((unsigned)time(NULL));

	initscr();
	raw();
    keypad(stdscr, TRUE);

	jugador j1,j2;
	j1.color = 0;
	j2.color = 0;

	int turno = 1;

	char** tablero;
	tablero = new char*[15];
	for(int i = 0; i < 15; i++)
	{
		tablero[i] = new char[15];
	}
	
	//Pedir a los jugadores
	do{
		//string mesg = "Jugador 1 elija su color: \n1. Rojo\n2. Azul\n3. Amarillo\n4. Verde";
		printw("Jugador 1 elija su color: \nR. Rojo\nA. Azul\nY. Amarillo\nV. Verde\n->");
		//mvprintw(row/2, (col - mesg.size()/2), "%s", mesg);
		j1.color = getch();
	}while(j1.color != 'R' && j1.color != 'A' && j1.color != 'Y' && j1.color != 'V');

	refresh();

	do{
		refresh();
		//string mesg = "Jugador 2 elija su color: \n1. Rojo\n2. Azul\n3. Amarillo\n4. Verde";
		printw("\nJugador 2 elija su color: \nR. Rojo\nA. Azul\nY. Amarillo\nV. Verde\n->");
		//mvprintw(row/2, (col - mesg.size())/2, "%s", mesg);
		j2.color = getch();
	}while(j2.color != 'R' && j2.color != 'A' & j2.color != 'Y' && j2.color != 'V' || j1.color == j2.color);

	clear();

	iniciarTablero(tablero);

	turno = 1;

	//Comenzar juego
	while(true)
	{
		imprimirTablero(tablero);
		if(turno = 1)
			printw("Jugador 1 Lanza el dado\n");
		else
			printw("Jugador 2 Lanza el dado\n");
		
		getch();	
		
		
		clear();
		refresh();
	}

		
	getch();
	
	endwin();

	for(int i = 0; i < 15; i++)
		delete[] tablero[i];
	delete[] tablero;

	return 0;
}

void iniciarTablero(char** tablero)
{
	//w.blanco
	//g.gris
	//R.rojo
	//A.azul
	//Y.amarillo
	//V.verde
	//M.meta

	for(int row = 0; row < 15; row++)
	{	
		for(int col = 0; col < 15; col++)
		{
			if(col == 7 && row < 7)//Rojo
				tablero[row][col] = 'R';
			else if(row == 7 && col > 7)//Azul
				tablero[row][col] = 'A';
			else if(col == 7 && row > 7)//Amarillo
				tablero[row][col] = 'Y';
			else if(row == 7 && col < 7)//Verde
				tablero[row][col] = 'V';	
			else if(row == 0 || row == 14 || col == 0 || col == 14)//Gris
				tablero[row][col] = 'g';
			else
				tablero[row][col] = 'w';
			
		}
	}
	
	tablero[7][7] = 'M';
}

void imprimirTablero(char** tablero)
{
	int r, c;
	getmaxyx(stdscr, r, c);

	//mvprintw(row/2, (col - mesg.size())/2, "%s", mesg);
	for(int row = 0; row < 15; row++)
	{	
		//string line = "";
		for(int col = 0; col < 15; col++)
		{	
			mvprintw((r/2) + row - 7, (c/2) + col - 7, "%c", tablero[row][col]);	
			//line += "# ";
		}
		
	}
}

int dados()
{
	return (rand() % 6) + (rand() % 6);
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
