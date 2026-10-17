#include <stdio.h>
float Sales_Control(float SB, float REV, float EXP)
{
   float FB = SB + REV-EXP;

   if (FB > SB)
   {
      printf("Positive Balance\n");
   }
else if (FB < SB)
{
   printf("Negative Balance\n");
}
else {
   printf("Neutral Balance\n");
}
return FB;
}

int main()
{
    printf("===BOUTIQUE_CONTROL===\n");
   
   float SB,REV, EXP,FB;
printf("digitar o valor de SB, REV,EXP\n");
scanf("%f %f %f", &SB, &REV, &EXP);

FB = Sales_Control(SB,REV,EXP);
printf("O Final_Balance é: %.2f XOF", FB);

return 0;
}
