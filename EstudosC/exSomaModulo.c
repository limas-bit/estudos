#include <stdio.h>
int modulo(int x) {
    if (x < 0){
    return -x;}
    return x;
}
int main(){
    int num1, num2;
    printf("Digite o valor 1\n");
    scanf("%d", &num1);
     printf("Digite o valor 2\n");
    scanf("%d", &num2);
    
    int soma = modulo(num1)+ modulo(num2);
    printf("A soma dos modulos é igual a : %d \n", soma);
}