#include<stdio.h>
#include<conio.h>



int main()
{
	
	int n;
	printf("Kare matris tanimlayiniz...\n");
	printf("Kare matrisin satir sayisini girini: ");
	scanf("%d",&n);
	printf("Kare matrisin sutun sayisi: %d\n",n);
	int matris[n][n];
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<n;k++)
				{
				printf("[%d][%d]:",i+1,k+1);	
				scanf("%d",&matris[i][k]);
				}
				
			}

		for(int i=0;i<n;i++)
			{
				for(int k=0;k<n;k++)
				{
					printf("  %3d",matris[i][k]);
				}
				printf("\n");
			}
		int hold[n][n];	
		
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<n;k++)
				{
					hold[k][i]=matris[i][k];	
				}
				
			}
		printf("\n\n");
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<n;k++)
				{
					printf("  %3d",hold[i][k]);
				}
				
				printf("\n");		
			}
		
			


	
	
	
	
	
	
	
	
	
	
	return 0;
			
}
