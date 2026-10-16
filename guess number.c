 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
int main()
{
srand((unsigned)time(NULL));
int a=rand()%10001;
printf("Please guess a number\n");
int b=0;
scanf("%d",&b);
int c=0;
c++;
while(b!=a){
	if(b<a){
		printf("Your guess is too low, please guess again\n");
		scanf("%d",&b);
	}
	if(b>a){
		printf("Your guess is too high, please guess again\n");
		scanf("%d",&b);
	}
	c++;
}	
printf("Congratulations, you guessed it right! You guessed a total of %d times",c);
return 0;
}
