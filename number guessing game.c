#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){

	int num=0,guess=0;
	int how_many_time=0;
	
	srand(time(NULL));
	//rastgele sayi üretir//

	num=rand()%10+1;
	printf("Let's find the number i guessed.\nenter a number: ");
	scanf("%d",&guess);
	
	while(guess!=num)
	{
		if(guess>num)
		{
		printf("guess is a false.guess a smaller number.\nnew guess: ");
		scanf("%d",&guess);
		how_many_time++;
	    }
	    
	    if(guess<num)
	    {
	    printf("guess is a false.guess a bigger number.\nnew guess: ");
	    scanf("%d",&guess);
	    how_many_time++;
		}
	    
	    if(guess==num)
        {
        printf("congratulations you guessed the number %d on the %dnd try.",num,how_many_time);	
		}
	
	    
	}
	
	printf("\nnum is a %d",num);
	
	
	
	
	
	getch();
	return 0;
}
