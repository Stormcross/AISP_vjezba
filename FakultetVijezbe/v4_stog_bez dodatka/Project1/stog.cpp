#include "stog.h"

//	KONSTRUKTOR
stog::stog(void)
{
	koliko = 0;			//broj elemenata na stogu
	vrh = 0;			//pokazivac na vrh stoga
}

//	DEKONSTRUKTOR
stog::~stog()			
{
	ocisti();			//ocisti stog
}

//	VRACANJE VELICINE STOGA
int stog::velicina() const
{
	return koliko;
}

//	VRACA TRUE AKO JE PRAZAN, FALSE AKO JE ISPUNJEN
bool stog::prazan() const
{
	return koliko == 0;
}

//	STAVLJANJE ELEMENTA NA VRH STOGA
void stog::push(tip_elementaT _podatak)
{
	cvor *novi = new cvor;			//kreiramo novi cvor
	novi->podatak = _podatak;		
	novi->slijedeci = vrh;			//novi podatak gleda na prethodni
	vrh = novi;						//novi cvor postaje novi vrh stoga
	koliko++;						//povecamo brojac elemenata u stogu
}

//	UZIMANJE SA VRHA STOGA (BRISANJE PRVOG ELEMENTA)
tip_elementaT stog::pop()
{
	if (!prazan())
	{
		tip_elementaT _podatak = vrh->podatak;	//zapamtimo podatak 
		cvor *c = vrh->slijedeci;				//zapamtimo novi vrh
		delete vrh;								//obrisemo stari vrh
		vrh = c;					//postavimo novi vrh koji smo zadali
		koliko--;					//smanjimo broj elemenata u stogu
		return _podatak;			//vratimo element s vrha
	}
	else
	{
		cout << "\nGresko STOG je prazan!" << endl;
		return 0;
	}
}

//	VRACA PODATAK IZ VRHA STOGA (ALI NE BRISE GA)
tip_elementaT stog::top()
{
	if (!prazan())
	{
		tip_elementaT _podatak = pop();			//iskoristimo prijasnju funkciju
												//za uzimanje elementa s vrha stoga
		push(_podatak);				//jednostavno vratimo element natrag
		return _podatak;			//vracamo podatak
	}
	else
	{
		return NULL;
	}
}

//	CISTI SLOG
void stog::ocisti()
{
	while (vrh!=0)			//provjera ako se sto nalazi na vrhu
	{
		tip_elementaT _podatak = pop();			//uzimamo sa vrha stoga sve dok ima podataka u stogu
	}
}
