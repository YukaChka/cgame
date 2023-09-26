#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int gold = 15;
	int hp_goblin= 3;
	int rd = 80 + rand()%100;

	
	printf ("You attacked by goblin. Goblin HP: %d\n", hp_goblin);
		
	getchar();
		
	while(hp_goblin >1 )
	{
		hp_goblin = hp_goblin - 1;
		printf ("You kick goblin. Goblin HP: %d\n", hp_goblin);
		getchar();
		
	}
	gold = gold +3;

	printf ("You win. gold: %d\n", gold + rd);
	printf("%d\n", 80 + rand()%100);
	
	


	getchar();

    return 0;
} 