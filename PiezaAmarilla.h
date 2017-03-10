#include <Pieza.h>
 class PiezaAmarilla
 {
 public:
 	PiezaAmarilla();
 	~PiezaAmarilla();
 	
 	virtual void ingresarTablero(char**);
	virtual void ingresarZonaFinal(char**);
	virtual void comer(char**);
		
 };