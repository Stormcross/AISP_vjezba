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
	cout << "\nOd kojeg grada vas zanima temperatura: "; string naziv; cin >> naziv;
	cout << "U " << naziv << " je " << temperaturaGrad(naziv) << " stupnjeva!";
	


	cout << endl;
	system("pause");
	return 0;
}

//ispisivanje funkcija

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

int temperaturaGrad(string nazivGrad)
{
	int temp=0;
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

