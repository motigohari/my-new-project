#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 




int printRandoms(int lower, int upper);	


int main(void)
{
	
	int  player, bet1, bet2, bet3, bet4, bet5, ch1, ch2, ch3, diler;	
   
	printf("how many player (1-5)?\n");
	scanf(" %d", &player);
	printf("player %d\n", player);
	//for (player = 0 ; player < 7 ; player++) 
	 
	if (player >= 6)
	{
		printf("The number of players exceeds the number allowed\n");
		return 0;
	}
	if (player == 1)
	{
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet1);
	}
	else if (player == 2)
	{
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet1);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet2);
	} 
	else if (player == 3)
	{
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet1);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet2);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet3);
		
	}
	else if (player == 4)
	{
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet1);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet2);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet3);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet4);
	}
	else if (player == 5)
	{
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet1);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet2);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet3);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet4);
		printf("What is your bet?(1-100)\n");
		scanf("%d", &bet5);
	}

	printf("now we play :)\n");
	printf("Hand # 1\n\n\n");
	
	int lower = 1, upper = 13, card, card2, card3; 
        srand(time(0)); 
		printf("Dealer's first card :\n");
		diler = printRandoms(lower, upper);
																		// Driver code
																		// Use current time as  
		printf("\nYour first two cards,\n");							// seed for random generator 
		card = printRandoms(lower, upper); 
		card2 = printRandoms(lower, upper);
        card3= card+card2;
            
		printf("\nyou wont ander card?[y=1/n=0]"); 							
		scanf ("%d", &ch1);	 
    
	if (ch1 == 0)
		{
			printf("yor number is :%d", card3 );
			printf("\nDealer's first card :%d", diler );
			printf("\nDealer's second card :" );
			card = printRandoms(lower, upper);
			diler = card + diler;
			printf("\nThe amount of the dealer's cards :%d",diler);
			
			
			
		}
       
    else	 
        {
			
			int lower = 1, upper = 13; 
			srand(time(0)); 
			card= printRandoms(lower, upper);
			card3= card+card3;
			printf("\nyou wont ander card?[y=1/n=0]");
			scanf ("%d", &ch2);
			if (ch2 == 0)
			{  
				printf("yor number is :%d", card3 );
				printf("\nDealer's first card :%d", diler );
				printf("\nDealer's second card :" );
				card = printRandoms(lower, upper);
				diler = card + diler;
				printf("\nThe amount of the dealer's cards :%d",diler);
			}

			else 
			{
				int lower = 1, upper = 13; 
				srand(time(0)); 
				card=printRandoms(lower, upper);
				card3= card+card3;
				printf("\nyou wont ander card?[y=1/n=0]");
				scanf ("%d", &ch3);
				
				if (ch3 == 0)
				 {
					printf("yor number is :%d", card3 );
					printf("\nDealer's first card :%d", diler );
					printf("\nDealer's second card :" );
					card = printRandoms(lower, upper);
					diler = card + diler;
					printf("\nThe amount of the dealer's cards :%d",diler);
				 }
				 else 
				 {
					 // printRandoms(int lower, int upper, int count);
					int lower = 1, upper = 13; 
					srand(time(0)); 
					card=printRandoms(lower, upper);
					card3= card+card3;
					printf("\nThis is a last card : your number is %d",card3);
					printf("\nDealer's first card :%d", diler );
					printf("\nDealer's second card :" );
					card = printRandoms(lower, upper);
					diler = card + diler;
					printf("\nThe amount of the dealer's cards :%d",diler);
				}
				 
					
			}
		}	
		return 0 ;

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





























