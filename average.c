#include <stdio.h>
int main(){
float a=0;
float b=0;
int c=0;
float d=0;
printf("Please enter a number (enter -1 to exit)\n");
scanf("%f",&a);
if(a!=-1){
	do{
		c++;
		b+=a;
		printf("Please enter a number (enter -1 to exit)\n");
        scanf("%f",&a); 
	}while(a!=-1);
	d=b/c;
	printf("The average of the numbers you entered is %f\n",d);
}
else{
	printf("You have not entered valid data\n");
}
return 0;
}


	
