#include<stdio.h>


int fib(int indis)
{
	
		
	if(indis<=1)
		return indis;
	else
		return fib(indis-1)+fib(indis-2);		
	
}

int main()
{
	int indis;
	printf("Ýndis sayisini giriniz: ");
	scanf("%d",&indis);
	
	
		
	printf("%d",fib(indis));
	
	
}
