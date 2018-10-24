#include "stog.h"


//	prikaz stoga na ekranu - mimo standardnih funkcija
//	potrebna posebna prava da mozemo do privatnih clanova klase
void prikazi_stog(stog *_s)
{
	cout << "\t\t\t\t";
	if (_s->vrh!=NULL)
	{
		cvor *c = _s->vrh;
		while (c!=NULL)
		{
			cout << c->podatak << " ";
			c = c->slijedeci;
		}
	}
	else
	{
		cout  << "Prazan stog";
	}

	cout << "(" << _s->velicina() << ")" << endl;	// velicina stoga
}

//	pomocna funkcija sa stoga i ispis na ekran
void citaj_stog(stog *_s)
{
	tip_elementaT temp;		//	privremena varijabla
	temp = _s->pop();		//	uzimamo s vrha stoga
	cout << "Vracamo sa stoga: " << temp << endl;
	prikazi_stog(_s);
}

//	pomocna funkcija za stavljanje na stog i ispis na ekran
void pisi_stog(stog *_s, tip_elementaT _T)
{
	_s->push(_T);			//na stog stavljamo varijablu _T koja ce biti zadana u main
	cout << "Stavljamo na stog: " << _T << endl;
	prikazi_stog(_s);
}

int main()
{
	cout << "Kreairamo stog: " << endl;
	stog s;					//kreiramo listu stog imena "s"
	prikazi_stog(&s);		//prikazemo prazan stog s referencom &

	//	punimo i praznimo stog
	pisi_stog(&s, 10);
	pisi_stog(&s, 15);
	pisi_stog(&s, 77);
	pisi_stog(&s, 3);
	citaj_stog(&s);
	citaj_stog(&s);
	pisi_stog(&s, 99);
	citaj_stog(&s);
	citaj_stog(&s);
	citaj_stog(&s);
	citaj_stog(&s);			//cita stog ali vraca samo null
	pisi_stog(&s, 15);
	pisi_stog(&s, 77);
	
	//	ciscenje liste stog
	cout << "\nOcistimo stog..." << endl;
	s.ocisti();

	// prikaz stoga
	prikazi_stog(&s);
	pisi_stog(&s, 3);		//dodamo jos jedan element u stog

	cout << "Na vrhu STOGA (top): " << s.top() << endl;
	prikazi_stog(&s);

	system("pause");
	return 0;
}





