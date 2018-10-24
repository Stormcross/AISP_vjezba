#pragma once
#include<iostream>
//M.L.
using namespace std;

//	STOG	-	first in*first out

typedef int tip_elementaT;		//tip podataka elementa stoga

struct cvor		//element stoga
{
	tip_elementaT podatak;		//podatak na stogu
	struct cvor *slijedeci;		//pokazivac na slijedeci cvor
};

class stog
{
	cvor *vrh;		//pokazivac na vrh stoga
	int koliko;		//broj elemenata na stogu

public:

	//OSNOVNE OPERACIJE
	int velicina() const;				//vraca velicinu stoga
	bool prazan() const;				//vraca true ako je stog prazan
	void push(tip_elementaT _podatak);	//stavljanje na stog
	tip_elementaT pop();				//usimanje sa stoga
	
	//UZVEDENE OPERACIJE
	tip_elementaT top();				//vraca na vrh stoga
	void ocisti();						//ocisti stog

	//KONSTRUKTORI I DESTRUKTORI
	stog();
	~stog();

	//FUNKCIJE PRIJATELJI - imaju pristup privatnim clanovima klase
	friend void prikazi_stog(stog *_s);

};

