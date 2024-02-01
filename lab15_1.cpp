#include <iostream>
using namespace std;

int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int *z = *&x;

	cout << a  << " "<< b  << " " << c << " " << &x  << " " << &y << " " << &z << endl;
	
	int ab = *&b;
	int ac = *&c;
	cout << &a  << " "<< &ab  << " " << &ac << " " << &x  << " " << &y << " " << &z << endl;
	
	c = 'F';
	b = c ;
	cout << a  << " "<< b << " " << c << " " << &x  << " " << &y << " " << &z << endl;

	*y = 'W' ;
	b = *y ;
	cout << a  << " "<< b << " " << c << " " << &x  << " " << &y << " " << &z << endl;

	*x = 6;
	a = *x;
	cout << a  << " "<< b << " " << c << " " << &x  << " " << &y << " " << &z << endl;

	*z = 7;
	*x = *z;
	a = *x;
	cout << a  << " "<< b << " " << c << " " << &x  << " " << &y << " " << &z << endl;

	return 0;
}
