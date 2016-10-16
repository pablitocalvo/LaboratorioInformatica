#include <iostream>
using namespace std;

int main()
{
	
	
	short int piccolo_intero;
	
	piccolo_intero=128;
	cout << "esempio di short int ="<< piccolo_intero << endl;
	cout << "dimensione in byte =" << sizeof ( piccolo_intero )
	<< endl
	<< endl;;
	
	
	int intero;
	
	intero=2000000;
	cout << "esempio di int ="<< intero << endl;
	cout << "dimensione in byte =" << sizeof ( intero ) 
	<< endl
	<< endl;
	
	
	long int intero_lungo;
	
	intero_lungo=1400000000;
	cout << "esempio di long int ="<< intero_lungo << endl;
	cout << "dimensione in byte =" << sizeof ( intero_lungo ) 
	<< endl
	<< endl;
	
	double reale ;
	
	reale=3.1415926535897932384626433;
	cout << "esempio di double ="<< reale << endl;
	cout << "dimensione in byte =" << sizeof ( reale ) 
	<< endl
	<< endl;


	long double reale_lungo;
	
	reale_lungo=0.000000000000000000000000003;
	cout << "esempio di long double ="<< reale_lungo << endl;
	cout << "dimensione in byte =" << sizeof ( reale_lungo ) 
	<< endl
	<< endl;
	
	
}
