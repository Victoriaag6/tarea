#include<stdio.h>

int factorial(int numero){
	if(numero <= 1){
		return 1;
	}else{
		return(numero*factorial(numero-1));
	}
}

int main(){
int numero;
printf("ingrese un numero: ");
scanf("%d",&numero);
for(int i=0; i<=numero; i++){
	printf("%d\n",factorial(i));
}
return 0;
}