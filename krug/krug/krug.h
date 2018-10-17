#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

const double PI = 3.131592;

//Deklaracija klase
class krug
{
	double radius; //private
public:
	double getPovrsina() const;
	void setPovrsina(double _povrsina);
	double getOpseg() const;
	void setOpseg(double _opseg);
	double getRadius() const;
	void setRadius(double _radius);
	string Opis() const;

	krug(); //konstruktor bez argumenta
	krug(double _radius); //kosntruktor s jednim argumentom
	~krug(); //dekontruktor
};

