#include <iostream>

int fibonacci(int);

int main(){
	int num, fibo;
	std::cout<<"Ingresa un numero: ";
	std::cin>>num;
	fibo = fibonacci(num);
	std::cout<<"Fibonacci de "<<num<<": "<<fibo<<std::endl;
	
	return 0;
}

int fibonacci(int num){
	if(num>1)
		num = fibonacci(num-1) + fibonacci(num-2);
	return num;
}
