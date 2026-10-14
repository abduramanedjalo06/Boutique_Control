#include <stdio.h>
float Sales_Control(float SB, float REV, float EXP)
{
   float FB = SB + REV-EXP;
return FB;

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
}
int main()
{
   float SB,REV, EXP,FB;
printf("digitar o valor de SB, REV,EXP");
scanf("%f %f %f", &SB, &REV, &EXP);

FB = Sales_Control(SB,REV,EXP);
printf("O Final_Balance é: %.2f", FB);

return 0;
}

