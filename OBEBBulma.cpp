#include<stdio.h>


int main(){
	
	
	int buyukSayi,kucukSayi;
	printf("Buyuk sayiyi giriniz: ");
	scanf("%d",&buyukSayi);
	printf("Kucuk sayiyi giriniz: ");
	scanf("%d",&kucukSayi);
	
	
	int kalan=1;
	int hold;
	while(kalan>0){
		hold=(buyukSayi/kucukSayi);
		kalan=(buyukSayi%kucukSayi);
		buyukSayi=kucukSayi;
		kucukSayi=kalan;
	}
		
		printf("OBEB:[%d]",buyukSayi);
	
	
	return 0;
}
