#include "Pieza.h"
#include "PiezaVerde.h"
#include <iostream>

using namespace std;

int main(){
	char** tablero = new char*[15];
	for (int i = 0; i < 15; ++i){
		tablero[i] = new char[15];
	}
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			tablero[i][j] = 'w';
		}
	}

	Pieza* pieza =new PiezaVerde();

	pieza->mover(20 , tablero);

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			cout <<tablero[i][j]<<" " ;
		}
		cout<<endl;
	}

	return 0;
}