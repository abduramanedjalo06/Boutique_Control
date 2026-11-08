#include <stdio.h>
float Sales_Control(float SB, float REV, float EXP)
{
   float FB = SB + REV-EXP;
   float lucro = FB - SB;
   
   if (lucro > 0)
   {
      printf(" %.2f XOF, Positive Balance\n", lucro);
   }
  else if (lucro < 0)
   {
   printf("%.2f XOF, Negative Balance\n", lucro);
   }
  else 
  {
   printf("Neutral Balance\n");
  }
   return FB;
   return lucro;
}

int main()
{
    printf("===BOUTIQUE_CONTROL===\n");
   
   float SB,REV, EXP,
printf("Entre o saldo inicial:");
   printf("Entre a venda diária:");
   printf("Entre a despesa:");
   
scanf("%f %f %f", &SB, &REV, &EXP);
   
float FB = Sales_Control(SB,REV,EXP);
   printf("O Final_Balance é: %.2f XOF", FB);

float lucro = Sales_Control(FB, SB);
   printf("O lucro de hoje é: %.2f XOF,\n", lucro);   
      return 0;
}
