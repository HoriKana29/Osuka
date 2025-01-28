#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
	int y = rand()%4;
	int x;
	if(y==0){
		x = a;
		a = b;
		b = x;
	}
	else if(y==1){
		x = b;
		b = c;
		c = x;
	}
	else if(y==2){
		x = c;
		c = d;
		d = x;
	}
	else{
		x = d;
		d = a;
		a = x;
	}
}