#include<stdio.h>

void main()
{
	int a;
	printf("enter year");
	scanf("%d",&a);
	
	if(a%4==0){
	   printf("this year is leap year");	
	}
	else{
		printf("this year is not leap year");
	}
}
