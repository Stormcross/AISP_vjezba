#include "student.h"
#include <vector>

//vektor ce sadrzavati info o studentima
vector<student>vec;
void upisStudenta();
void ispisStudenata();
void ispisGodinaStudija(int godina);
void urediStudent(string novoIme, int novaGodina, int pozicija);
void brisiStudentGodina(int godina);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		upisStudenta();
	}
	
	ispisStudenata();
	cout << endl << "Upisi godinu studija: "; int godinaStudija; cin >> godinaStudija;
	ispisGodinaStudija(godinaStudija);
	cout << endl << "Uredivanje studenta info\nUpisi poziciju studenta 1,2,3:	";
	int pozicija; cin >> pozicija; pozicija -= 1;
	cout << "Unesi godinu studenta: ";
	int novaGodina; 
	cin >> novaGodina;
	cout << "Unesi novo ime studenta: ";
	string novoIme=""; getline(cin, novoIme);
	urediStudent( novoIme,  novaGodina,  pozicija);
	cout << endl << "obrisi sve studente iz godine: "; int godina; cin >> godina;
	brisiStudentGodina(godina);

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

void ispisStudenata()
{
	cout << endl << "***Popis studenata***" << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		student stud = (student)vec.at(i);
		stud.ispis();
	}
}

void ispisGodinaStudija(int godina)
{
	cout << endl << "***Popis studenata***" << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		student stud = (student)vec.at(i);
		
		if (godina==stud.getGodinaStudija())
		{
			cout << "Na " << godina << " godini studira: " << stud.getImePrezime() << endl;
		}
	}
}

void urediStudent(string novoIme, int novaGodina, int pozicija)
{
	if (pozicija>vec.size())
	{
		cout << "Unesena kriva pozicija" << endl;
			
			
	}
	else
	{
		cout << endl << "***Promjenjen student***" << endl;
		student s = (student)vec.at(pozicija);
		s.setGodinaStudija(novaGodina);
		s.setImePrezime(novoIme);
		vec.at(pozicija) = s;
		pozicija += 1;
		cout << "Pozicija: " << pozicija << endl;
		cout << "Novo ime: " << s.getImePrezime() << endl;
		cout << "Nova godina: " << s.getGodinaStudija() << endl;

	}
	
}

void brisiStudentGodina(int godina)
{
	
	//dodati while naredbu za brisanje
	
	ispisStudenata();
}