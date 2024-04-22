#include <iostream>
#include <cmath>
using namespace std;

float pierw(float liczba)
{
		
	return sqrt(liczba);
}

float pierw(float liczba, float stopien)
{

	return pow(liczba,1/stopien);
}

int main() {


for(int i = 1;i<=10;i++)
{
	cout << "Pierwiastek kwadratowy z: " << i << " = " << pierw(float(i)) << endl;
	cout << "Pierwiastek trzeciego stopnia z: " << i << " = " << pierw(float(i),3) << endl;
}

	return 0;
}

// xpp