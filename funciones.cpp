//Victoria Acosta C.I:30106795

#include<stdio.h>
#include<windows.h>
#include<conio.h>

int suma(int x,int y), resta(int x,int y), producto(int x,int y); 
float division(float x,float y);

int main(){
  
int opc,num1,num2;

	do{ system("cls");
    	printf("Funciones.\n");
    	printf("Menu:\n 1.Suma.\n 2.Resta.\n 3.Producto.\n 4.Division.\nSelecione opcion: ");
        	scanf("%d",&opc);
    }while(opc>4 || opc<1);

	switch(opc){
		
	case 1: 
	 
	{int x,y;
		printf("El resultado es: %d",suma(x,y));  
	}break;
       
    case 2:
    	
    {int x,y;
    printf("El resultado es: %d ",resta(x,y));
	}break;
		
	case 3:
			
	{int x,y;
		printf("El resultado es: %d ",producto(x,y));
	}break;
	
	case 4:
		
	{float x,y;
		printf("El resultado es: %0.2f ",division(x,y));
	}break;
	
    	
    }while(getch());  
	return 0;
    } 
	 
	 
	int suma(int x, int y){
	int resultado;
    	printf("Ingrese el primer numero: ");
    		scanf("%d", &x);
    	printf("Ingrese el segundo numero: ");
    		scanf("%d", &y);	
    resultado=x+y;
    return resultado;
    }
    
	int resta(int x, int y){
    int resultado;
    	printf("Ingrese el primer numero: ");
    		scanf("%d", &x);
    	printf("Ingrese el segundo numero: ");
    		scanf("%d", &y);
    resultado=x-y;
    return resultado;
    }
    
    int producto(int x, int y){
    int resultado;
    	printf("Ingrese el primer numero: ");
    		scanf("%d", &x);
    	printf("Ingrese el segundo numero: ");
    		scanf("%d", &y);
    resultado=x*y;
    return resultado;
    }
    
    float division(float x, float y){
    float resultado;
    	printf("Ingrese el primer numero: ");
    		scanf("%f", &x);
    	printf("Ingrese el segundo numero: ");
    		scanf("%f", &y);
    resultado=x/y;
    return resultado;
    }