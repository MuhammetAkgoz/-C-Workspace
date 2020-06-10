#include<stdio.h>




int main(){											//booble sort(kabarcýk sýralamasý)
	
		int dizi[]={12,687,23,98,798};
		int hold;
		printf("Yeni dizi: ");
			for(int hand=1;hand<5;hand++)
				for(int i=0;i<4;i++)
					if(dizi[i]>dizi[i+1])
					{
						hold=dizi[i];
						dizi[i]=dizi[i+1];
						dizi[i+1]=hold;	
												
					}	
				for(int i=0;i<=4;i++)
					printf("%d ",dizi[i]);
	return 0;
}
