#include<stdio.h>
#include<conio.h>


struct time
{
	
	int saat;	
	int dk;
	int san;	
};


int main()
{
	
	time z1,z2;
	time toplam;
	
	printf("Ilk saat dilimini giriniz: ");
	scanf("%d",&z1.saat);
	printf("Ilk dakika dilimini giriniz: ");
	scanf("%d",&z1.dk);
	printf("Ilk saniye dilimini giriniz: ");
	scanf("%d",&z1.san);
	
	printf("Ikinci saat dilimini giriniz: ");
	scanf("%d",&z2.saat);
	printf("Ikinci dakika dilimini giriniz: ");
	scanf("%d",&z2.dk);
	printf("Ikinci saniye dilimini giriniz: ");
	scanf("%d",&z2.san);
	
	
	toplam.saat=z1.saat+z2.saat;
	toplam.dk=z1.dk+z2.dk;
	toplam.san=z1.san+z2.san;
	
	if(z1.san+z2.san>=100)
	{
		toplam.dk++;
		toplam.san=toplam.san-100;
	}
	if(z1.dk+z2.dk>=60)
	{
		toplam.saat++;
		toplam.dk=toplam.dk-60;
	}	
	if(z1.saat+z2.saat>=24)
	{	
		toplam.saat=toplam.saat-24;
	}		
	printf("\n\n");	
	printf(" TIME: %d:%d:%d",toplam.saat,toplam.dk,toplam.san);
	return 0;
}
