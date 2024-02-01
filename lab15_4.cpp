#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b,int *c,int *d){
	int ca = 1 ,cb = 1,cc = 1,cd = 1;
	int v,x,y,z;
	int sh[4]={};
	int coun = 0;
    do{	
		int s = (rand()%4 + 1);
		if( s == 1)
		 if( ca != 0){sh[coun] = *a; coun++; ca--; }
		if( s == 2)
		 if( cb != 0){sh[coun] = *b; coun++; cb--; }
		if( s == 3)
		 if( cc != 0){sh[coun] = *c; coun++; cc--; }
		if( s == 4)
		 if( cd != 0){sh[coun] = *d; coun++; cd--; }
	}while(coun != 4);
	v = *&sh[0];
	x = *&sh[1];
	y = *&sh[2];
	z = *&sh[3];

	*a = *&v;
	*b = *&x;
	*c = *&y;
	*d = *&z;
}