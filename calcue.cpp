#include<iostream>
#include<iomanip>
using namespace std;

double calculatee(int num){
double suma=2;
double fact=1;
for(int i=2; i<num;i++){
	fact *=i;
	suma +=1/fact;
	}
	return suma;
}

int main(){
	double precision;
	cout<<"POR FAVOR INTRODUZCA LA PRECISION QUE DESEA OBTENER:"<<endl;
	cin>> precision;
	cout<< setprecision(precision+1)<<calculatee(450)<<endl;
return 0
}
	
