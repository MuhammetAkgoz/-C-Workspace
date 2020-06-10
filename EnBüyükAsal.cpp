#include<stdio.h>



int main(){
	
	int n;
	printf("bir sayi giriniz: ");
	scanf("%d",&n);
	
			for(int i=n;i>=2;i--)
			{
				
				int asal=1;
							
					for(int j=2;j<i;j++)
					{
						if(i%j==0)
						asal=0;		
					}
						
					if(n!=i && asal==1)
					{
					
				printf("En buyuk asal sayi: %d",i);
				break;
					
					}						
			}
				
	
	
	
	
	
	
	
	return 0;
}
