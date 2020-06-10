#include<stdio.h>




int main()														//girilen bir deðere kadar olan bütün asal sayýlarý yazdýran program.
{
	
	int sayac=0;
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	int m=2;
	printf("sirasiyla %d tane asal sayi: ",n);	
		while(sayac<n)
		{	
			int asal=1;
				for(int i=2;i<m;i++)
				{
				
					if(m%i==0)
					asal=0;
				
				}
					if(asal==1)
					{	
						printf("%d ",m);	
						sayac++;
					}	
			m++;										
		}
			
					
		
			
			
	
	
	
	
	
	
	
	return 0;
}
