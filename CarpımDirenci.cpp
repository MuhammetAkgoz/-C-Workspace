#include<stdio.h>


int main(){
	
	
	for(int n=10;n<100;n++){
		int a,b,hold;	
		int carpimDirenci=0;
		hold=n;		
		while(n>=10){		
				a=n%10;
				b=n/10;
				n=a*b;	
				carpimDirenci++;			
		}
		n=hold;
		printf("%d sayisinin Carpim Direnci= [%d]\n",n,carpimDirenci);		
	}
	
	
	return 0;
}
