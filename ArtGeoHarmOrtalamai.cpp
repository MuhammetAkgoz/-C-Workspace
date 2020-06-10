#include<stdio.h>
#include<math.h>


void aritmatik(int toplam,int n)
{
	
	float aritmatik;
	
	aritmatik=toplam/n;
	
	printf("Aritmetik ortalamsi: %.2f \n",aritmatik);	
}


int main()
{
	float geoort,harmort;
	int n;
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&n);
	int dizi[n];
	geoort=1;
	harmort=1.0;
		for(int i=0;i<n;i++)
		{
			printf("%d. elemani giriniz: ",i+1);	
			scanf("%d",&dizi[i]);
					
		}	
	int toplam=1;		
		for(int i=0;i<n;i++)
		{
			toplam=toplam+dizi[i];
			geoort=geoort*dizi[i];
			harmort=harmort+1.0/dizi[i];	
		}
		
		
	geoort=pow(geoort,(1/n));
	harmort=n/harmort;	
		
	aritmatik(toplam,n);
	printf("Geometrik ortalama: %.2f \n",geoort);
	printf("Harmonik ortalama : %.2f",harmort);
	
	
	return 0;
}
