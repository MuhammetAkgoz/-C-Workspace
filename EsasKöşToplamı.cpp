#include<stdio.h>




int main()
{
	
	int n;
	printf("Kare matris tanimlayiniz...\n");
	printf("Satir: ");
	scanf("%d",&n);
	printf("Sutun: %d\n",n);
	int matris[n][n];
	
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<n;k++)
				{
				printf("[%d][%d]:",i+1,k+1);	
				scanf("%d",&matris[i][k]);
				}
			}
	
	int hold=0;	
	
		for(int i=0;i<n;i++)	
			{
				for(int k=0;k<n;k++)	
				{
					if(i==k)
						{
							hold=hold+matris[i][k];
										
						}		
				}	
					
			}
			
	printf("Esas koþegenlerin toplamý: %d",hold);
	
	return 0;
}
