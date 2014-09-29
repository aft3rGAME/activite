#include <iostream>
using namespace std;

int main()
{
	const int annee(2014);
	int age(0), naissance(0);

	cout << "Quel age a tu?" << endl;
	cin >> age ;
	
	naissance=annee-age;

	cout << "tu es donc nes en " << naissance << endl;

	return 0;

}
