#include <iostream>
#include <limits>
#include <conio.h>

int val_num(int);
int factorial(int);

int main(){
	int num,fact=1;
	std::cout<<"Ingresa un numero: ";
	num = val_num(num);
	
	fact = factorial(num);
		
	std::cout<<"El factorial de "<<num<<" es: "<<fact<<std::endl;
	
	return 0;
}

int val_num(int num){
	while(!(std::cin>>num) || num<1){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout<<"Cantidad no valida, intentelo de nuevo: ";
	}
	return num;
}

int factorial(int num){
	if(num>1)
		num *= factorial(num-1);
	return num;
}
