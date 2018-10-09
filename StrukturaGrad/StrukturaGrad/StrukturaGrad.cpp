#include<iostream>
#include<vector>
#include<string>
#include<ctype.h>
using namespace std;

//Deklariramo strukturu grada
struct grad
{
	string nazivGrad;
	double temperatura;
	int brojStanovnika;
};

//deklaracija prototipa
void upis(int x); //+
int temperaturaGrad(string nazivGrad); //+
int gradOd_Do(int dolje, int gore); 
int brisiGrad(char slovo);
void traziGrad();
void ispisGradova();

//deklariran vector koji u sebe puni gradove i ime mu je info
vector <grad> info;

int main()
{
	cout << "Koliko gradova zelite unjeti: "; int x = 0; cin >> x;
	system("cls");
	upis(x);
	ispisGradova();
	//temperatura
	cout << "\nOd kojeg grada vas zanima temperatura, unesite ime: "; string naziv; cin >> naziv;
	cout << "U " << naziv << " je " << temperaturaGrad(naziv) << " stupnjeva!"<<endl<<endl;
	system("pause");
	system("cls");
	//raspon stanovnika
	cout << "\nUnesite raspon broj stanovnika za provijeru koliko gradova je u tom rasponu: "; int dolje = 0, gore = 0;
	cout << "\nDonja granica = "; cin >> dolje;
	cout << "Gornja granica = "; cin >> gore;
	cout << endl << "U rasponu broja stanovnika od " << dolje << " do " << gore << " imamo " << gradOd_Do(dolje, gore) << " grad/gradova.\n";
	cout << endl;
	system("pause");
	//brisi grad sa slovom
	system("cls");
	char slovo;
	cout << "Izbrisi gradove koji pocinju s slovom: "; cin >> slovo;
	cout << "\nObrisano je " << brisiGrad(slovo) << " gradova\n" << endl;
	cout << "Ostali gradovi:\n";
	ispisGradova();
	system("pause");	
	traziGrad();
	
	

	cout << endl;
	system("pause");
	return 0;
}

//ispisivanje funkcija
//upis gradova
void upis(int x)
{
	int br = 1;
	for (int i = 0; i < x; i++)
	{
		grad g; //strukturu grad upotrijebimo na varijabli 'g'
		cout << br << ". grad.\n";
		cout << "Unesi ime grada: "; cin >> g.nazivGrad;
		cout << "Unesi temperatru grada: "; cin >> g.temperatura;
		cout << "Koliko grad ima stanovnika: "; cin >> g.brojStanovnika;
		info.push_back(g); //u vector info ubacujemo po uzlaznom nizu indexa informacije o gradu
		br++;
		system("cls");
	}
	
}
//ispis
void ispisGradova()
{
	system("cls");
	int br = 1;
	for (int i = 0; i < info.size(); i++)
	{
		grad g = (grad)info.at(i); //pokazemo na poziciju u strukturi grad u vektoru info na poziciji 'i'
		cout << endl << br << ". " << g.nazivGrad << endl;
		br++;
	}
}
//temp grada
int temperaturaGrad(string nazivGrad)
{
	double temp=0;
	for (int i = 0; i < info.size(); i++)
	{
		grad g = (grad)info.at(i);
		if (nazivGrad == g.nazivGrad)
		{
			temp = g.temperatura;
		}

	}
	return temp;
}
//populacija
int gradOd_Do(int dolje, int gore)
{
	
	int br = 0;
	for (int i = 0; i < info.size(); i++)
	{
		grad g = (grad)info.at(i);
		if (g.brojStanovnika>=dolje && g.brojStanovnika<=gore)
		{
			br++;
		}
	}

	return br;

}
//brisi grad po slovu
int brisiGrad(char slovo)
{
	int br = 0;
	for (int i = 0; i < info.size(); i++)
	{
		grad A = (grad)info.at(i);
		char bris = A.nazivGrad[0];
		if (bris == slovo)
		{
			info.erase(info.begin() + i);
			br++;
		}
		

	}

	return br;
	
}
//max temp min populacija
void traziGrad()
{
	double maxtemp = 0;
	grad GminPop = (grad)info.at(0);
	int minPop = GminPop.brojStanovnika;
	string GRAD;
	for (int i = 0; i < info.size(); i++)
	{
		grad A = (grad)info.at(i);
		if (A.temperatura >= maxtemp && A.brojStanovnika <= minPop)
		{
			maxtemp = A.temperatura;
			minPop = A.brojStanovnika;
			GRAD = A.nazivGrad;
		}
	}
	cout << endl << "Grad s najvisom temp od " << maxtemp
		<< " i s najmanjim brojem stanovnika od " << minPop
		<< " je " << GRAD << endl;
}