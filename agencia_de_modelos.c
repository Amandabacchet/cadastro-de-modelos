/*seja bem-vindo ao nosso projeto de cadastro dos modelos na agencia.*/
/*programadora AMANDA BACCHET
contato (43)99353587*/

#include <stdio.h>

int main(){
    /*declaraçao das variaveis*/
    char nome[30], email[30], cordapele[10], cordosolhos[10], nat[15], cidade[15], insta[20];
    int tel, idade, busto, quadril, cintura, peso;
    float altura;

    /*mensagem ao usuario*/
    /*nome*/
    printf("digite seu nome");
    scanf ("%s", nome);
    /*idade*/
    printf("digite sua idade");
    scanf("%d", &idade);
    /*altura*/
    printf("digite sua altura");
    scanf("%f", &altura);
    /*peso*/
    printf("digite seu peso");
    scanf("%d", &peso);
    /*quadril*/
    printf("digite o tamanho do seu quadril");
    scanf("%d", &quadril);
    /*cintura*/
    printf("digite a sua cintura");
    scanf("%d", &cintura);
    /*busto*/
    printf("digite a seu busto");
    scanf("%d", &busto);
    /*telefone*/
    printf("digite seu telefone");
    scanf("%d", &tel);
    /*email*/
    printf("digite seu email");
    scanf("%s", email);
    /*insta*/
    printf("digite seu instagram");
    scanf("%s", insta);
    /*cor da pele*/
    printf("digite a cor da sua pele");
    scanf("%s", cordapele);
    /*cor dos olhos*/
    printf("digite a cor dos seus olhos");
    scanf("%s", cordosolhos); 
    /*naturalidade*/
    printf("digite a sua naturalidade");
    scanf("%s", nat); 
    /*cidade*/
    printf("digite a cidade em que nasceu");
    scanf("%s", cidade); 

    /*empresao das informaçoes fornecidas para cadastro*/
    printf(" seu nome e: %s\n", nome);
    printf(" sua idade e: %d\n", idade);
    printf(" sua altura e: %f\n", altura);
    printf(" seu peso e: %d\n", peso);
    printf(" seu quadril e: %d\n", quadril);
    printf(" sua cintura e: %d\n", cintura);
    printf(" seu busto e: %d\n", busto);
    printf(" seu telefone e: %d\n", tel);
    printf(" seu email e: %s\n", email);
    printf(" seu instagram e: %s\n", insta);
    printf(" a cor da sua pele e: %s\n", cordapele);
    printf(" a cor dos seus olhos e: %s\n", cordosolhos);
    printf(" a sua naturalidade e %s\n", nat);
    printf(" a sua cidade e: %s\n", cidade);
    return 0 ;
}