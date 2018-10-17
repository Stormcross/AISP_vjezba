#include "student.h"



student::student()
{
	imePrezime = "";
	godinaStudija = 0;
}


student::~student()
{
}

string student::getImePrezime()const
{
	return imePrezime;
}

void student::setImePrezime(string studInfo)
{
	imePrezime = studInfo;
}

int student::getGodinaStudija() const
{
	return godinaStudija;
}

void student::setGodinaStudija(int godina)
{
	godinaStudija = godina;
}

void student::ispis()
{
	cout << endl << "Student: " << imePrezime << endl;
	cout << "Godina studija: " << godinaStudija << endl;
	cout << "********************************************" << endl;
}

