#include"Header.h"

//zadana struktura
struct STRUJA
{
	string imePotrosac;
	double potrosnja;
	string ulica;
	string grad;
};

//izrada vectora gdje ce biti svi potrosaci s podacima
vector<STRUJA> ukupno;

// vektor "ukupno" (STRUJA)


void upis()
{
	cout << "Koliko potrosaca zelite unjeti: "; int br = 0;; cin >> br;
	for (int i = 0; i < br; i++)
	{
		STRUJA A;
		cout << endl << "Ime potrosaca: "; cin >> A.imePotrosac;
		cout << "Potrosnja (kWh): "; cin >> A.potrosnja;
		cout << "Ulica: "; cin >> A.ulica;
		cout << "Grad: "; cin >> A.grad;
		ukupno.push_back(A);
	}
	cout << endl;
	system("pause");
}

 


void switchF()
{
	cout << endl << "Koju funkciju zelite zelite izvrsiti (0 za izlazak iz programa): "; 
	cout << "\nZadaci:\n\
1. najviseTrosi()\n\
2. vector<STRUJA> popisPotrosaca()\n\
3. int porosnjaGrad()\n\
4. int brisiPotrosaci()\n\n\
Unesi odabir:  ";
	int brFun; cin >> brFun; //upis odabira
	cout << endl;
	if (brFun>ukupno.size())
	{
		cout << "Unjeli ste krivi podatak, pokusajte ponovo ili pritisnite 0 za izlazak iz programa";
		system("pause");
		switchF();
	}
	else
	{
		system("cls");

		int potrosnja; string grad, ulica;

		switch (brFun)
		{
		case 0:
			break;
		case 1:
			
			cout << "Unesi grad i potrosnju, program ce ispisat potrosance s tom potrosnjom ili vecom u tom gradu";
			cout << endl << "Unesi grad: "; cin>> grad;
			cout << "Unesi potrosnji: "; cin >> potrosnja;
			najviseTrosi(potrosnja, grad);
			switchF();
		case 2:
			cout << "Unesi grad i ulicu, program izlista novi vektor koji sadrzi podatke o potrosacima iz te ulice: ";
			cout << endl << "Unesi grad: "; cin >> grad;
			cout << "Unesi ulicu: "; cin >> ulica;
			popisPotrosaca(grad, ulica);
			switchF();
		
		}
	}
}

void najviseTrosi(int potrosnja, string grad)
{
	for (int i = 0; i < ukupno.size(); i++)
	{
		STRUJA A = (STRUJA)ukupno.at(i);
		if (A.potrosnja >= potrosnja && A.grad==grad)
		{
			cout << "\nPotrosac: " << A.imePotrosac << endl
				<< "Vrijednost potrosnje: " << A.potrosnja<<" kWh";
		}
	}
}



void popisPotrosaca(string grad, string ulica)
{
	vector<STRUJA> popisPotrosaca;
	for (int i = 0; i < ukupno.size(); i++)
	{
		STRUJA A = (STRUJA)ukupno.at(i);
		if (A.grad==grad && A.ulica==ulica)
		{
			popisPotrosaca.push_back(A);
		}
	}

	for (int i = 0; i < popisPotrosaca.size(); i++)
	{
		STRUJA A = (STRUJA)popisPotrosaca.at(i);
		cout << endl << "Ime potrosaca: "<< A.imePotrosac<<endl;
		cout << "Potrosnja (kWh): "<< A.potrosnja<<endl;
		cout << "Ulica: "<< A.ulica<<endl;
		cout << "Grad: "<< A.grad<<endl<<endl;
	}
	

	
}
