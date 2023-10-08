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

//printf("   .:..      .:...            \n");
//printf("   .5G5~. :^:7????~7~         \n");
//printf("    !&##GPPPP5P55YBGGY^       \n");
//printf("    7&&###&GPY?YYY55B&#7.     \n");
//printf("    5&&&#&&&#55G55YG&&#P5J:   \n");
//printf("    ^B&&&&&&&G5JJJB&@@&&BG5:  \n");
//printf("      .:Y7P@&BPPPP&&#B#&&BG?  \n");
//printf("         :&##&&##&&#B##&#P7:  \n");
//printf("         ~#GG#&5&&BGBY...     \n");
//printf("         ?###&5 ?@&B#7        \n");
//printf("        .YBB&#. .#&BBJ        \n");
//printf("       ^YPP#&P   P&BPGY.      \n");


printf("              .^7Y5PP5J7^.                                                                .77777777777^      ^7777777:                           \n");                                                       
printf("            ?#@@@@@@@@@@@@&Y     ~!!!!!!!                                                 P@@@@@@@@@@@@      #@@@@@@@P                           \n");                                                       
printf("           G@@@@@@@@@@@@@@@@&    @@@@@@@@.                                                &@@@@@@@@@@@@~     #@@@@@@@P                            \n");                                                      
printf("          :@@@@@@@#. G@@@@@@@~ :7@@@@@@@@?!.    .!5GB##BG5J^      Y555555J  !PP          :@@@@@@@@@@@@@5     #@@@@@@@P      ^?PB###B5?^           \n");                                                      
printf("          !@@@@@@@G  J@@@@@@@! #@@@@@@@@@@@7  7&@@@@@@@@@@@@@Y   .@@@@@@@&?@@@&          7@@@@@@&&@@@@@&     #@@@@@@@P   .P@@@@@@@@@@@@@P.        \n");                                                      
printf("          :@@@@@@@@5..::^^^^^  ?B@@@@@@@@BG: 5@@@@@@#?G@@@@@@@G  .@@@@@@@@@@@@&          B@@@@@@YG@@@@@@^    #@@@@@@@P   &@@@@@@&?G@@@@@@@:       \n");                                                      
printf("           G@@@@@@@@@#J:         &@@@@@@@.  .@@@@@@@7  @@@@@@@@  .@@@@@@@@@@@@&          @@@@@@@^J@@@@@@Y    #@@@@@@@P  J@@@@@@@? .@@@@@@@#       \n");                                                      
printf("            Y@@@@@@@@@@@&5:      &@@@@@@@.  .@@@@@@@!  @@@@@@@@. .@@@@@@@@@@#B5         ^@@@@@@@ ~@@@@@@&    #@@@@@@@P  G@@@@@@@J ^@@@@@@@@       \n");                                                      
printf("              !B@@@@@@@@@@@#^    &@@@@@@@.   ^^^^^!J?Y&@@@@@@@@: .@@@@@@@@P             Y@@@@@@# .@@@@@@@:   #@@@@@@@P  G@@@@@@@@@@@@@@@@@@      \n");                                                      
printf("                 ~G@@@@@@@@@@!   &@@@@@@@.     ^JB&@@@@@@@@@@@@: .@@@@@@@@:             #@@@@@@5  &@@@@@@?   #@@@@@@@P  G@@@@@@@@&&&&&&&&&#       \n");                                                      
printf("           7?????7~.7&@@@@@@@&   &@@@@@@@.   ?@@@@@@@P^@@@@@@@@: .@@@@@@@@.            .@@@@@@@B7?&@@@@@@#   #@@@@@@@P  G@@@@@@@?  :~^^^^~^       \n");                                                      
printf("          .@@@@@@@#  .@@@@@@@@.  &@@@@@@@.  .@@@@@@@5  @@@@@@@@: .@@@@@@@@.            !@@@@@@@@@@@@@@@@@@.  #@@@@@@@P  G@@@@@@@7  P@@@@@@@      \n");                                                      
printf("           @@@@@@@#   &@@@@@@@.  @@@@@@@@.  :@@@@@@@!  @@@@@@@@: .@@@@@@@@.            P@@@@@@@@@@@@@@@@@@7  #@@@@@@@P  P@@@@@@@7  P@@@@@@@       \n");                                                      
printf("           G@@@@@@@Y7G@@@@@@@&   &@@@@@@@!  .@@@@@@@P :@@@@@@@@: .@@@@@@@@.            &@@@@@@@Y..Y@@@@@@@B  #@@@@@@@P  ^@@@@@@@P .&@@@@@@G       \n");                                                      
printf("           .B@@@@@@@@@@@@@@@&^   G@@@@@@@@@G #@@@@@@@@@@@@@@@@@: .@@@@@@@@.           :@@@@@@@@^  ^@@@@@@@@  #@@@@@@@P   7@@@@@@@@@@@@@@@P        \n");                                                      
printf("             :Y#&@@@@@@@@&P~      ?#&@@@@@@G .5&@@@@@#!B@@@@@@@: .&@@@@@@@.           7@@@@@@@@.  .&@@@@@@@~ B@@@@@@@5    .7G&@@@@@@@@&5:         \n");                                                      
printf("\n");                                        
getchar();

  do {
  if (hp<1)
  {
	printf("You've lost");
	getchar();
	return 0;
  }
  
  printf("Do you want to fight stupid goblin or smelly rat?\nClick 1 or 2\n");
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
  printf("You are attacked by a stupid goblin\n");

  while(hp_goblin > 1)
  {
  
  hp_goblin = hp_goblin - (1+rand()%3);
  printf("You hit a stupid goblin\nThe stupid goblin's health is:%d\n", hp_goblin);
  
  if((rand()%100)>50)
  {
	printf("You are being attacked by a goblin\nStupid goblin missed, really stupid...\n"); 
  }
  else
  {
	  hp = hp -at_goblin;
    printf("You are being attacked by a stupid goblin\nThe stupid goblin has done damage to you\nYour health is:%d\n", hp); 
	if(hp<1)
	{
		return 0;
	}
	
  }
  getchar();
  }
  return hp;
}
