#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int goblinattack(int hp); //прототип функции
 
int main()
{
  int hp= 30;
  int num1;
  int gold = 0;
  srand(time(NULL));
  printf(⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠋⠀⣍⣛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⡿⠿⠟⠛⠉⠉⠀⠀⠀⢀⣠⣴⣶⣿⣿⣿⣷⣶⣯⣽⣿⣻⣿⣿⣿⣿);
  printf(⠁⠀⠀⠀⠀⠀⠀⣀⣠⠤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⠀⠀⠐⠒⠊⠉⠉⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⡆⠀⠘⡀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣧⠀⠀⢇⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⡆⠀⠘⡄⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⡀⠀⠐⡀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣷⡀⠀⠐⡀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣷⡄⠀⠈⢄⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣿⣿⣆⠀⠀⠑⢄⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣫⣾⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⡿⣫⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠀⠀⠙⠻⣿⣿⢟⣯⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⡿⢟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿);
  printf(⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠿⠶⠤⠤⠾⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿⣿⣿);
 
  do {
  if (hp<1)
  {
	printf("You've lost");
	getchar();
	return 0;
  }
  
  printf("Do you want to fight a goblin or a dragon?\nClick 1 or 2\n");
  scanf( "%d", &num1 );
  
  if(num1 == 1)
  {
	hp = goblinattack(hp); // вызов функции
	gold = gold + rand()%10;
    printf( "Your gold is:%d\n", gold); // вызов функции
  }
    else if(num1 == 2)
  {
	printf("Not ready yet\n");
  }
  }while(num1==1||num1==2);
	if(num1!=1||num1!=2)
	printf("program is closed\n");
  getchar();
  return 0;
}
 
int goblinattack(int hp) // определение функции
{
  int hp_goblin = 10;
  int at_goblin = 3;
  printf("You are attacked by a goblin\n");

  while(hp_goblin > 1)
  {
  
  hp_goblin = hp_goblin - (1+rand()%3);
  printf("You hit a goblin\nThe goblin 's health is:%d\n", hp_goblin);
  
  if((rand()%100)>50)
  {
	printf("You are being attacked by a goblin\nGoblin missed\n"); 
  }
  else
  {
	  hp = hp -at_goblin;
    printf("You are being attacked by a goblin\nThe goblin has done damage to you\nYour health is:%d\n", hp); 
	if(hp<1)
	{
		return 0;
	}
	
  }
  getchar();
  }
  return hp;
}