#include <stdio.h>

float calculo(float SB, float REV, float EXP)
{
    float FB = SB + REV - EXP;
    return FB;
}

int main()
{
    printf("BOUTIQUE_CONTROL\n");
    
    float SB, REV, EXP;
    
    printf("SB:");
    scanf("%f", &SB);
    
    printf("REV:");
    scanf("%f", &REV);
    
    printf("EXP:");
    scanf("%f", &EXP);
    
    float FB = calculo(SB, REV, EXP);
    printf("O SALDO FINAL É: %.2f\n", FB);
    
  
    float lucro = FB - SB;
    if (lucro > 0)
    {
        printf("\nO lucro é de %.2f,SUCESSO BALANÇO POSITIVO\n", lucro);
    }
    else if (lucro  < 0)
    {
      printf("\nA Perda é %.2f,NEGATIVO QUEDA NO BALANÇO\n", lucro);
    }
    else 
    {
        printf("\nEMPATE\n");
    }
    
    return 0;
}
