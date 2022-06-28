#include <iostream>

int main(){
	int num,fibo=0,aux1=1, aux2=0;
	std::cout<<"Ingresa un numero: ";
	std::cin>>num;
	if(num < 1)
		std::cout<<"A partir de 1 por favor";
	else{
		if(num == 1)
			fibo = 1;
		else{
			for(int i=1;i<num;i++){
				fibo = aux1 + aux2;
				aux2 = aux1;
				aux1 = fibo;
			}
		}
		std::cout<<"Fibonacci de "<<num<<": "<<fibo<<std::endl;
	}
	return 0;
}
