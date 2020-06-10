#include<stdio.h>




int main()
{
	int hold=0;
	int ust=1;
	int n;
	printf("Logaritma 2 tabaninda:");
	scanf("%d",&n);
			int i;
			while(i=1,i++)
			{	
				ust=ust*2;		
				hold++;	
			if(ust>=n)
				break;
			
			}
			if(ust>n)
				printf("%d-%d araligindadir.",hold-1,hold);
			else if(ust==n)
				printf("Sayisal degeri: %d ",hold);
	
	return 0;
}
