#include <stdio.h>
float Sales_Control(float SB, float REV, float EXP)
{
   float FB = SB + REV-EXP;
   
   return FB;
}

int main()
{
    printf("===BOUTIQUE_CONTROL===\n");
   
   float SB,REV, EXP;
   
printf("ENTRE O SALDO INICIAL:");
scanf("%f", &SB);
   
printf("ENTRE A VENDA DO DIA:");
scanf("%f", &REV);

printf("ENTRE A DESPESA:");
scanf("%f", &EXP);
   
float FB = Sales_Control(SB,REV,EXP);
printf("O Final_Balance é: %.2f XOF\n", FB);

float lucro = FB - SB;

if (lucro > 0)
{
    printf("%.2f XOF,  SUCESSO!\n", lucro);
}

else if (lucro < 0)
{
    printf("\n %.2f XOF, QUEDA NO BALANÇO!\n", lucro);
}

else
{
    printf("%.2f XOF,  SALDO NEUTRO!\n", lucro);
}

printf("O lucro de hoje é: %.2f XOF\n", lucro);

  return 0;
}
