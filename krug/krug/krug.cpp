#include "krug.h"

//definicija klase

double krug::getPovrsina() const
{
	return radius * radius*PI; //r^2 x PI
}

void krug::setPovrsina(double _povrsina)
{
	radius = sqrt(_povrsina / PI);
}

double krug::getOpseg() const
{
	return 2 * radius*PI;
}

void krug::setOpseg(double _opseg)
{
	radius = _opseg / (2 * PI);
}

double krug::getRadius() const
{
	return radius;
}

void krug::setRadius(double _radius)
{
	radius = _radius;
}

string krug::Opis() const
{
	stringstream ss;
	ss << "Krug - Radius=" << getRadius()
		<< ", Opseg=" << getOpseg() << ", Povrsina=" << getPovrsina();
	return ss.str();
}


krug::krug()
{
	radius = 0;
}

krug::krug(double _radius)
{
	radius = _radius;
}


krug::~krug()
{
}
