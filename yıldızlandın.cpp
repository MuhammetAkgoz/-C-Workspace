#include<stdio.h>
#include<conio.h>




int main()
{
	
	int n;
	int yildiz,bos;
	
	yildiz=1;
	bos=n-1;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
	
	
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<bos;k++)
				{
					printf(".");
					
				}
				for(int k=0;k<yildiz;k++)					
				{
					printf("*");
				}
				
				
				printf("\n");
				bos--;
				yildiz=yildiz+2;
				
						
			}		
	
	
	
	
	
	
	return 0;
}
