#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int multiplication( int num1, int num2 ); //прототип функции
 
int main()
{
  int num1;
  int num2;
 
  printf( "num: " );
  scanf( "%d", &num1 );
  scanf( "%d", &num2 );
  printf( "result %d\n", multiplication( num1, num2 ) ); // вызов функции
  getchar();
  getchar();
  return 0;
}
 
int multiplication(int num1, int num2) // определение функции
{
  return num1 * num2;
}