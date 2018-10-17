#include "krug.h"


int main()
{
	krug k1 = krug(10);
	krug k2;
	krug k3;
	krug k4;
	k3.setPovrsina(100);
	k4.setOpseg(200);
	cout << k1.Opis() << endl;
	cout << k2.Opis() << endl;
	cout << k3.Opis() << endl;
	cout << k4.Opis() << endl;
	system("pause");

	return 0;
}