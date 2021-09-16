// Calculando o seu indice de massa corporal

#include <stdio.h>
int main(void) 
{
  float alt, pes, imc;
  printf("Por favor você pode me informar a sua altura: ");
  scanf("%f",&alt);
  printf("Agora digame o seu peso: ");
  scanf("%f",&pes);
  imc = pes / (alt * alt);
  printf("Seu IMC é %.2f ",imc);

  if (imc <= 18.5)              printf ("\naltaualmente voce nao se encontra em um peso ideal, esta magro(a)");
  else   if   (imc <= 25)       printf ("\nEste é o seu peso ideal, continue mantendo o foco!");
         else  if (imc <= 30)   printf ("\nVoce esta umpouco acima do seu peso, isso é deveras preocupante");
               else             printf ("\namigo(a) sugiro que voce deva ir ao medico, pois voce se encontra em um estado de obesidade");

  return 0;
}
