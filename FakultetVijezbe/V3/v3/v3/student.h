#pragma once
#include<iostream>
#include <string>

using namespace std;

class student
{
	string imePrezime;
	int godinaStudija;

public:
	student();
	~student();

	void setImePrezime(string studInfo);
	string getImePrezime() const;
	void setGodinaStudija(int godina);
	int getGodinaStudija() const;
	
	void ispis();
};

