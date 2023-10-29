/*if else statement*/
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	 if(age>=18)
	 {
	 	
	 	printf("You are eligible for votting");		
	 }	
	 else if(age>=10){
	 	printf("Youre are between 10 to 18, so you can vote for kids");
	 	
	 }
	else{

		printf("You are not able for votting ,you should play video games...");
	
	}
return 0;	
}
