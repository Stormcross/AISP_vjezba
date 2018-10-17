#pragma once
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

//deklaracija klase
class prav
{
	//privatno
	double visina; 
	double sirina;

public:

	double getPovrsina() const;
	double getOpseg() const;
	double getVisina() const;
	double getSirina() const;

	void setVisina(double _visina);
	void setSirina(double _sirina);
	bool isKvadrat(); //vraca ako je pravokutnik ujedno i kvadrat;
	
	string opis() const;

	//konstruktor i destruktor
	prav(void);
	prav(double _visina, double _sirina);
	~prav(void);
};

