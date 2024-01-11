#include <stdio.h>

void salutation ()
{
  printf("hello\n"); 
}
int smaller(int x, int y)
{
  if (num1 > num2)
  {
    return 1;
  }
  else 
  {
    return 0; 
  }
}
int main ()
{
salutation();
int num1 = 4;
int num2 = 5;
int age, limiteage;

age = 16;
limiteage = 18;
printf("%d\n", num1);
printf("%d\n", num2);
int resultat = 0;
printf ("%d\n", resultat);
resultat =greater(num1, num2);
resultat =smaller(num1, num2); 
printf ("resultat = %i /greater =%d", greater(4,5))
printf ("resultat = %i / smaller = %d", smaller(4,5));
	
  return 0;

}

// %d or %i is used for  display integer varaible 
