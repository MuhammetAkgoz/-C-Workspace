#include<stdio.h>







int main()
{
	
	
	int n;
	int hold;
	int r,toplam=0;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	hold=n;	
		while(n>0)	
	{
						
		r=n%10;	
		toplam=(toplam*10)+r;
		n=n/10;	
 	}
			
				
		if(hold==toplam)
			printf("Bu sayi palindomdur.");
		else
			printf("Bu sayi palimdon degildir.");
	
	
	
	
	
	
	return 0;
}
