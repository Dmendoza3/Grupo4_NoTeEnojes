#include <Pieza.h>
class PiezaVerde
{
public:
	PiezaVerde();
	~PiezaVerde();
	
	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);	
};