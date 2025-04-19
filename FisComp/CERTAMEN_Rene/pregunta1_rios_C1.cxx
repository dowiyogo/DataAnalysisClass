#include <iostream>

int fibonacci(int termino){
int r;
switch(termino) {
	case 0: 
		r=0;
		break;
	case 1:
		r=1;
		break;
	default:
		r=fibonacci(termino-1)+fibonacci(termino-2);
		}
	return(r);
}

int main(){
std::cout<<"los 13 1eros terminos de la serie de fibonnacci son \n";
int a=0;
while(a<=12)
{
	std::cout<<fibonacci(a)<<" ";
	a++;
}
std::cout<<std::endl;
return 0;
}
