#include <stdio.h>
int main()
{
float x, ve, vc;

printf("Insira a media de VE:\n");
scanf("%f", &ve);
printf("Insira a media de VC:\n");
scanf("%f", &vc);

x = (20 - (vc+ve))/2;

if(x<=4)
{
printf("Parabens! Voce precisa apenas do 4 na VF!");
}
else
{
printf("Voce precisa tirar %f na VF.", x);
}
return(0);
}
