#include<stdio.h>
int main(){
    int limite;
    int resultado =0;
    printf("ingrese un numero entero positivo:");
    scanf("%d",&limite);
    for(int i=1; i<=limite;i++){
        resultado += i;
    }
printf("el resultado de la suma de los %d numeros es : %d",limite,resultado);
return 0;
}