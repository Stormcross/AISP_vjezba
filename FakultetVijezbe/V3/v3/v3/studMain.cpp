#include "student.h"
#include <vector>

//vektor ce sadrzavati info o studentima
vector<student>vec;
void upisStudenta();

int main()
{
	


	cout << endl;
	system("pause");
	return 0;
}

void upisStudenta()
{
	//kreiramo objekt klase student
	student stud = student();
	//upis podataka
	cout << "*** Upis podataka o studentu ***" << endl;
	cout << "Upisi ime i prezime studenta: ";
	string data = "";
	getline(cin, data);
	//upis podataka u objekt
	stud.setImePrezime(data);
	cout << "Upisi godinu studija: ";
	getline(cin, data);
	stud.setGodinaStudija(stoi(data)); //jer je inicijalizirano s int
	//upis objekta u vektor
	vec.push_back(stud);

}