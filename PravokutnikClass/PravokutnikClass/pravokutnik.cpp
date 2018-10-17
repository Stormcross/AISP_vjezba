#include "pravokutnik.h"


double prav::getPovrsina() const
{
	return visina * sirina;
}

double prav::getOpseg()const
{
	return 2 * (visina + sirina);
}

double prav::getVisina() const
{
	return visina;
}

double prav::getSirina() const
{
	return sirina;
}

void prav::setVisina(double _visina)
{
	visina = _visina;
}

void prav::setSirina(double _sirina)
{
	sirina = _sirina;
}

bool prav::isKvadrat()
{
	if (visina==sirina)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string prav::opis() const
{
	stringstream ss;
	ss << "\nPravokutnik:\nVisina=" << getVisina() << "\nSirina=" << getSirina()
		<< "\nPovrsina=" << getPovrsina() << "\nOpseg=" << getOpseg() << endl;
	return ss.str();
}

prav::prav()
{
}


prav::~prav()
{
}
