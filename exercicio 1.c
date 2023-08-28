/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

main ()
{
  int idade, peso;
  double salario, altura;

  printf ("Diga a sua idade");
  scanf ("%d", &idade);
  printf ("Diga o seu salario");
  scanf ("%lf", &salario);
  printf ("Diga a sua altura");
  scanf ("%lf", &altura);
  printf ("Diga o seu peso");
  scanf ("%d", &peso);

  if(idade=>18){
      printf("Maior de idade");
  }else{
      printf("minor")
  }
  if(salario=>1320){
      printf("ganha mais q um salario minimo");
  }else{
      printf("ganha menos");
  }
  if(altura<=1.8){
      printf("baixinho");
  }else{
      printf("alto");
  }
  if(peso<=60){
      printf("magro");
  }else{
      printf("pesado");
  }
}
