#include<stdio.h>
int main(){
	int a=0;
	int b=0;
	printf("Please enter a number\n");
	scanf("%d",&b);
	if (b<=1)
	{
		printf("This number is not a prime number");
	}
	else{
		for (a=2;a*a<=b;a++){
		if (b%a==0)
		{
		break;
		}
		}
		if (a<b)
		{
		printf("This number is not a prime number");
		} 
		else {
			printf("This number is a prime number5");
		}
	}
	return 0;
}
