#include<stdio.h>



int main()              //bu program yazýlcak.
{
	
	int sayi1;
	int sayi2;
	
	printf("1.sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");
	scanf("%d",&sayi2);	
	if(sayi2>sayi1)
		for(int i=sayi1;i<=sayi2;i++)
		{
			int hold=1;
			for(int k=2;k<i;k++)	
			{	
				if(i%k==0)
				hold=0;	
			}
			if(hold==1)
			printf("%d ",i);
			hold=1;
		}
	
	
	
	
	
	
	
	return 0;
}
