#include<stdio.h>

void main()
{
	int a,b,c,d;
	printf("enter value a:");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
	printf("enter value c:");
	scanf("%d",&c);
	printf("enter value d:");
	scanf("%d",&d);
	
     if(a>b && a>c && a>d){
	    printf("a is big");
	 }
	 if(b>a && b>c && b>d){
	 	printf("b is big");
	 }
	 if(c>a && c>b && c>d){
	 	printf("c is big");
	 }
	 if(d>a && d>b && d>c){
	 	printf("d is big");
	 }
	 
	
	
	
	
}
