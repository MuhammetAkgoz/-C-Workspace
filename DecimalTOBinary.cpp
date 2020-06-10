#include<stdio.h>
#include<math.h>



int main()
{
	
	int decimal;
	printf("Bir sayi giriniz: ");
	scanf("%d",&decimal);
	int hold[decimal];
	
	
	int n=0;
	while(decimal>=1)
		{	
			hold[n]=decimal%2;
			decimal=(decimal-hold[n])/2;
			if(decimal<1)
			{
				hold[n+1]=(decimal)/2;	
				break;
			}		
			n++;			
		}
	
	printf("Binary Karsiligi:");
		for(int i=n;i>=0;i--)	
			printf("[%d]",hold[i]);
		
	printf("\n");	
	int target1,target2=0;
		for(int k=0;k<=n;k++)
		{
				if(hold[k]==1)
				{
					target1=pow(2,k);
					target2=target2+target1;
					printf("%d.basamakdaki deger: %d \n",k+1,target1);
				}
				else
					printf("%d.basamaktaki deger: 0\n",k+1);			
		}
	printf("TOPLAM: %d",target2);
	return 0;
}


