#include <stdio.h>
#include <stdlib.h>
using namespace std;
void CicloWhileRecursivo( int i){
int n;

if (i!=0){
	printf("%d\t",i);
	printf("ingrese un numero: ");
	scanf("%d",&n);
	CicloWhileRecursivo(n);
}
}
int main(){
	CicloWhileRecursivo(1);
	system("pause");
	return 0;
}
