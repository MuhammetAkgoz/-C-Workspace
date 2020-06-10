#include<stdio.h>

int main(){
	
	
	int i,j;
	double a,b,c,d,k,l;
	double sonuc1,sonuc2;
	
	for(i=10;i<100;i++){
		
		k=i;
		a=i%10;
		c=i/10;
	
		for(j=10;j<100;j++){
			
			l=j;
			b=j%10;
			d=j/10;
		
			sonuc1=c/b;
			sonuc2=k/l;
			
			if(a==d){
				if(sonuc1 == sonuc2 && k!=l){
					printf("%d/%d sayisi uykucu sayisidir\n",i,j);	
				}
			}
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
