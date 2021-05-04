#include <iostream>

using namespace std;

//USANDO PUNTEROS
int tama1(char*c){
	char*a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}
//USANDO ARREGLOS
int tam2(char c[]){
	int tam=0;
	while(c[tam]!='\0'){
		tam++;
	}
	return tam;

}

int main(){
	char cad1[]={"Villanueva Flores 20"};
	char*cad2 =new char();
	cad2="Villanueva Flores 201";

	cout<<tama1(cad1)<<endl;
	cout<<tam2(cad2)<<endl;
	return 0;
}
