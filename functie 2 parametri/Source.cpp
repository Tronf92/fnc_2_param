//Nicorici Adrian, 18.05.2014
/*Sa se scrie un program cu o functie care ia doi parametri de tip int,
citeste valorile lor in cadrul functiei si le calculeaza suma si
in final sa se afiseze cele doua valori si suma lor in
programul principal .
*/

#include <iostream>
using namespace std;

int suma(int *a,int *b){
	cout << "Introduceti a " << endl;
	cin >> *a;
	cout << "Introduceti b " << endl;
	cin >> *b;
	int suma;
	suma=*a+*b;
	return suma;
}

int main(){
	int a,b;
	cout << "Numerele sunt : " << a << " si " << b << " si suma lor este : " << suma(&a,&b) << endl;

	system("pause");
	return 0;
}