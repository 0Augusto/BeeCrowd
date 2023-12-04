//
//  main.c
//  BeeCrowd
//
//  Created by Henrique Augusto Rodrigues on 27/10/23.
//

#include <stdio.h>//Biblioteca de entrada e saída
#include <stdlib.h>//Biblioteca padrão ** malloc
#include <math.h>
#include <string.h>

void Metodo00(void);
void Metodo01(void);
void Metodo02(void);
void Metodo03(void);
void Metodo04(void);
void Metodo05(void);
void Metodo06(void);
void Metodo07(void);
void Metodo08(void);
void Metodo09(void);
void Metodo10(void);
void Metodo11(void);
void Metodo12(void);
int main(void)
{
    printf("BeeCrowd BEGINNER - v0.0.1");
    printf("\nAuthor: Henrique Augusto Rodrigues\n");
    int x = 0;
   do
   {
       printf("0 - Sair do programa\n");
       printf("1 - 1000\n");
       printf("2 - 1001\n");
       printf("3 - 1002\n");
       printf("4 - 1003\n");
       printf("5 - 1004\n");
       printf("6 - 1005\n");
       printf("7 - 1006\n");
       printf("8 - 1007\n");
       printf("9 - 1008\n");
       printf("10- 1009\n");
       printf("11- 1010\n");
       printf("12- 1011\n");
      scanf("%i",&x);
      switch(x)
      {
        case 0:
            Metodo00();
            break;
        case 1:
            Metodo01();
            break;
        case 2:
            Metodo02();
            break;
        case 3:
              Metodo03();
              break;
        
        case 4:
              Metodo04();
              break;
        
        case 5:
            Metodo05();
            break;
        
        case 6:
            Metodo06();
            break;
        
        case 7:
            Metodo07();
            break;
        
          case 8:
            Metodo08();
            break;
         case 9:
            Metodo09();
            break;
         case 10:
            Metodo10();
            break;
         case 11:
            Metodo11();
            break;
        case 12:
              Metodo12();
              break;
         default:
            printf("Comando invalido, tente outro\n");
            x = 1;
      }
   }while(x != 0);
   printf("Aperte enter para sair do programa!\n");
   fflush( stdin);
   getchar();
   return (0);
}

//Metodo00()
void Metodo00(void){
    printf ("Cancela a execucao do programa!\n");
}//end Metodo00()

//Metodo01()
void Metodo01(void){
    printf("Hello World!\n");
}//end Metodo01()

//Metodo02
void Metodo02(void){
    int A, B = 0;
    
    scanf("%i", &A);
    scanf("%i", &B);
    
    int X = (A + B);
    
    printf("X = %d\n", X);
}//end Metodo02

//Metodo03
void Metodo03(void){
    double area    = 0.0;
    double pi      = 3.14159;
    double raio    = 0.0;
    
    scanf("%lf", &raio);
    
    area = pi * pow(raio, 2);
    
    printf("A=%0.4lf\n", area);
}//end Metodo03

//Metodo04
void Metodo04(void){
    int A, B = 0;
    
    scanf("%i", &A);
    scanf("%i", &B);
    
    int soma = (A + B);

    printf("SOMA = %i\n", soma);
}//end Metodo04

//Metodo05
void Metodo05(void){
    int A, B = 0;
    
    scanf("%i", &A);
    scanf("%i", &B);
    
    int PROD = (A * B);
    
    printf("PROD = %i\n", PROD);
}//end Metodo05

//Metodo06
void Metodo06(void){
    double A, B = 0.0;
        
    double P1 = 3.5;
    double P2 = 7.5;
        
    scanf("%lf", &A);
    scanf("%lf", &B);

    double media = ((A * P1) + (B * P2))/(P1 + P2);
//Insira a quebra de linha, para imprimir o dígito a mais.
    printf("MEDIA = %.5f\n", media);
}//end Metodo06

//Metodo07
void Metodo07(void){
    double A, B, C = 0.0;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    int PA = 2;
    int PB = 3;
    int PC = 5;

    double media = ((A * PA) + (B * PB) + (C * PC))/(PA + PB + PC);

    printf("MEDIA = %.1lf\n", media);
}//end Metodo07

//Metodo08
void Metodo08(void){
    int A, B, C, D = 0;

    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);

    int dif = ((A * B) - (C * D));

    printf("DIFERENCA = %i\n", dif);
}//end Metodo08

//Metodo09
void Metodo09(void){
    int numFunc    = 0;
    int horaTrab   = 0;
    double valHora = 0.0;
     
    scanf("%i", &numFunc);
    scanf("%i", &horaTrab);
    scanf("%lf", &valHora);
        
    double salary = (horaTrab * valHora);
        
    printf("NUMBER = %i\n", numFunc);
    printf("SALARY = U$ %.2f\n", salary);
}//end Metodo09

//Metodo10
void Metodo10(void){
    char nome;
    double salario = 0.0;
    double vendido = 0.0;
        
    scanf("%c",  &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendido);
        

    double sal = (vendido * 0.15) + salario;

    printf("TOTAL = R$ %.2f\n", sal);
}//end Metodo10

//Metodo11
void Metodo11(void){
    int code1, code2, numProd1, numProd2 = 0;
    double valProd1, valProd2 = 0.0;
        
    scanf("%d %d %lf", &code1, &numProd1, &valProd1);
    scanf("%d %d %lf", &code2, &numProd2, &valProd2);
     
    double valTotal = (numProd1 * valProd1) + (numProd2 * valProd2);
        
    printf("VALOR A PAGAR: R$ %.2f\n", valTotal);
}//end Metodo03

//Metodo12
void Metodo12(void){
    int R = 0;
    double pi = 3.14159;
        
    scanf("%i", &R);
        
    double vol = ((4.0/3.0) * pi * pow(R, 3));
     
    printf("VOLUME = %.3f\n", vol);
}//end Metodo12


