#include<stdio.h>




int main(){
	
	int sayi,yenisayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	int a,b,c;
	a=sayi%10;
	yenisayi=sayi/10;
	b=yenisayi%10;
	c=yenisayi/10;
	int toplamC=1;
	int toplamB=1;
	int toplamA=1;
	for(int i=a; i>=1 ;i--){
		
		toplamA= toplamA*i;
	}
	for(int i=b; i>=1 ;i--){
		
		toplamB= toplamB*i;
	}
	for(int i=c; i>=1 ;i--){
		
		toplamC= toplamC*i;
	}
	
	int tumToplam=(toplamA+toplamB+toplamC);N
	if(sayi == tumToplam)
		printf("bu sayi organize sayidir");
	else
		printf("bu sayi organize sayi degildir");


	return 0;	
	
}
