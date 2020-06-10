#include<stdio.h>




int main(){
	
	
	int dizi[20];
	
	for(int i=0;i<20;i++){
		
		printf("%d.Elemani giriniz: ",i);
		scanf("%d",&dizi[i]);
	}
	
	for(int i=0;i<20;i++){
		
		for(int j=1;j<20;j++){
			if(dizi[i]+dizi[j]==20)
			printf("%d.eleman ile %d elemanin toplami=20\n",i,j);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
