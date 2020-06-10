#include<stdio.h>



int main(){
	
	
	int kisiSayi;

	printf("kisi sayisini girin: ");
	scanf("%d",&kisiSayi);
	
	double gunSayisi1=366;	
	double yeniGunSayisi=gunSayisi1-kisiSayi+1;
	
	double hold=1.0;
	double gunSayisi2=365;	
	while(gunSayisi2>=yeniGunSayisi){
		hold=hold*(gunSayisi2/gunSayisi1);
		gunSayisi2--;
	}
	
	double olasilik=1-(hold);
	printf("Dogum gunlerinin ayni olma ihtimali: %f",olasilik);	
	
	return 0;

}
