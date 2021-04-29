#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

class oblicz{
	ifstream plik1;
	int a,b,c;
	int a2,b2,c2;
	int strike=0;
	
	public:
		oblicz();
		~oblicz();
		
		void wczytaj();
};

oblicz::oblicz(){
	plik1.open("a.txt");
}

oblicz::~oblicz(){
	plik1.close();
}

void oblicz::wczytaj(){
	while(!plik1.eof()){
		plik1>>a;
		plik1>>b;
		plik1>>c;
		
		
	
	if((a*a)+(b*b)==(c*c)){
		strike++;
		if(strike==1){
			a2=a;
			b2=b;
			c2=c;
		}
		
	}else{
		strike=0;
	}
	
	if(strike==2){
		cout<<a2<<" "<<b2<<" "<<c2<<" "<<endl;
		cout<<a<<" "<<b<<" "<<c<<" "<<endl;
		strike=0;
	}
	
}
}
int main(int argc, char** argv) {
	oblicz o;
	o.wczytaj();
	return 0;
