#include<stdio.h>

typedef struct complex
{
  float real;
  float imaginary;
}complex;
complex input()
{
  complex c;
  printf("Enter the Real part: ");
  scanf("%f", &c.real);
  printf("Enter the Imaginar part: ");
  scanf("%f", &c.imaginary);
  return c;
}
complex add(complex a, complex b)
{
  complex sum;
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}
void output(complex sum)
{
  printf("The sum of %0.1f + %0.1fi",sum.real,sum.imaginary);
}
int main()
{
  complex c1, c2, sum;
  c1= input();
  c2= input();
  sum=add(c1,c2);
  output(sum);
  return 0;
}