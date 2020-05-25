#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 





int printRandoms(int lower, int upper);	


int main(void)
{
	
	int  player, diler, i, z, choice, split;	
	 printf("\n********************\n"
			"** Hello To Csino **\n"
			"**      Royal     **\n"
			"********************\n");
			
	printf("how many player (1-5)?\n");
	scanf(" %d", &player);
	 
	if (player >= 6)
	{
		printf("The number of players exceeds the number allowed\n");
		return 0;
	}
	else 
	{
		int bitim [player];
		for ( i =1 ; i <= player ; i++)
		{
			
			printf("What is your bet?(1-100)\n");
			scanf("%d", &bitim[i-1]);	
		}
	}
	
	printf("now we play :)\n");
	
	for ( z = 1 ; z <= player ; z++)
		
		{
			
			printf("\n\n*********\nplayer #%d\n\n\n", z);
			int lower = 1, upper = 13, card, card2, card3, card4, card5; 
			srand(time(0)); 
			printf("Dealer's first card :\n");
			diler = printRandoms(lower, upper);
			
			printf("\nYour first two cards,\n");							// seed for random generator 
			card = printRandoms(lower, upper); 
			card2 = printRandoms(lower, upper);
			if ( card == card2 )
			{
				printf("You want to split?[y=1/n=0]");
				scanf("%d", &split);
				if ( split == 1)
				{
					printf("\nplayer #%d\n",z);
					printf("\nhand #1\n");
					printf("%d\n", card);
					card4 = printRandoms(lower, upper);
					card5= card+card4;
					printf("\nyou wont ander card?[y=1/n=0]"); 							
					scanf ("%d", &choice);
					if (choice == 1)
					{
					while ( choice > 0 )
					{
					int lower = 1, upper = 13; 
					srand(time(0)); 
					card= printRandoms(lower, upper);
					card5= card+card5;
					printf("\nyou wont ander(moti) card?[y=1/n=0]");
					scanf ("%d", &choice);
					if (choice == 1)
					{
						choice++;
					}
					else 
					{
						choice = 0 ;
					}
					}
					}
					printf("yor number is :%d", card5 );
					printf("\nDealer's first card :%d", diler );
					printf("\nDealer's second card :" );
					card = printRandoms(lower, upper);
					diler = card + diler;
					printf("\nThe amount of the dealer's cards :%d",diler);
					////////////////////////////////////////////////
					printf("\nplayer #%d\n",z);
					printf("\nhand #2\n");
					printf("%d\n", card);
					card4 = printRandoms(lower, upper);
					card5= card+card4;
					printf("\nyou wont ander card?[y=1/n=0]"); 							
					scanf ("%d", &choice);
					if (choice == 1)
					{
					while ( choice > 0 )
					{
					int lower = 1, upper = 13; 
					srand(time(0)); 
					card= printRandoms(lower, upper);
					card5= card+card5;
					printf("\nyou wont ander(moti) card?[y=1/n=0]");
					scanf ("%d", &choice);
					if (choice == 1)
					{
						choice++;
					}
					else 
					{
						choice = 0 ;
					}
					}
					}
					printf("yor number is :%d", card5 );
					printf("\nDealer's first card :%d", diler );
					printf("\nDealer's second card :" );
					card = printRandoms(lower, upper);
					diler = card + diler;
					printf("\nThe amount of the dealer's cards :%d",diler);
					
				}
				else
				{
					card3= card+card2;
					printf("\nyou wont ander card?[y=1/n=0]"); 							
					scanf ("%d", &choice);
					
				if (choice == 1)
					{
						while ( choice > 0 )
						{
						int lower = 1, upper = 13; 
						srand(time(0)); 
						card= printRandoms(lower, upper);
						card3= card+card3;
						printf("\nyou wont ander(moti) card?[y=1/n=0]");
						scanf ("%d", &choice);
						if (choice == 1)
						{
							choice++;
						}
						else 
						{
							choice = 0 ;
						}
						}
					}
						printf("yor number is :%d", card3 );
						printf("\nDealer's first card :%d", diler );
						printf("\nDealer's second card :" );
						card = printRandoms(lower, upper);
						diler = card + diler;
						printf("\nThe amount of the dealer's cards :%d",diler);
				}
			}
			else 
			{
				card3= card+card2;
				printf("\nyou wont ander card?[y=1/n=0]"); 							
				scanf ("%d", &choice);
				
				if (choice == 1)
					{
						while ( choice > 0 )
						{
						int lower = 1, upper = 13; 
						srand(time(0)); 
						card= printRandoms(lower, upper);
						card3= card+card3;
						printf("\nyou wont ander(moti) card?[y=1/n=0]");
						scanf ("%d", &choice);
						if (choice == 1)
						{
							choice++;
						}
						else 
						{
							choice = 0 ;
						}
						}
					}
						printf("yor number is :%d", card3 );
						printf("\nDealer's first card :%d", diler );
						printf("\nDealer's second card :" );
						card = printRandoms(lower, upper);
						diler = card + diler;
						printf("\nThe amount of the dealer's cards :%d",diler);
			}
		}
     return 0;
}





int printRandoms(int lower, int upper)						//function to gut rundom number 
{ 
    int  num ;
    num = (rand() %  (upper - lower + 1)) + lower; 
																	// chaineg from number to letrs (K,N,J,A)
	if (num==13)
	{
		printf("K ");
		
	}
	else if (num==12)
	{
		printf("N ");
    }
    else if (num==11)
    {
		printf("J ");
	}
	else if (num==1)
	{
		printf("A ");
	}
    else
    {
       
        printf("%d ", num);  
     }
      
  
  return num;
} 

  
//Good game my frides


























