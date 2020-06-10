#include<stdio.h>




int main()
{
	
	int n,m;
	printf("Satir sayisini girini: ");
	scanf("%d",&n);
	printf("Sutun sayisini girini: ");
	scanf("%d",&m);
	int matris[n][m];
	
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<m;k++)
				{
				printf("[%d][%d]:",i+1,k+1);	
				scanf("%d",&matris[i][k]);
				}
			}
	
	int max;	
	int line,vertical;
	max=matris[0][0];

			for(int i=0;i<n;i++)
			{
				for(int k=0;k<m;k++)	
					{
						if(max<matris[i][k])
						{	
							max=matris[i][k];
							line=i+1;
							vertical=k+1;
						}
					}	
			}	
	
		printf("En buyuk eleman:%d\n Satir:%d\n Sutun:%d",max,line,vertical);
	
	
	
	
	
	return 0;
}
