#include<stdio.h>


void swapArr(int *Array,int elemanSayisi){
    
	for(int i=0;i<elemanSayisi;i++){
		
		int temp = Array[elemanSayisi - 1];
        Array[elemanSayisi - 1] = Array[i];
        Array[i] = temp;
        elemanSayisi=elemanSayisi-1;
        
	}
}
void prnArr(int *Array,int elemanSayisi){
	int i=0;	
	while(i<elemanSayisi)
	{
		 printf("%d ",Array[i]);
		 i++;
	}
	
}
int main(){
	
	
	int Array[]={0,10,20,30,40,50,60,70,80,90,100};
	
	int diziBoyut=sizeof(Array);
	int tipBoyut=sizeof(*Array);
	int elemanSayisi=diziBoyut/tipBoyut;
	

	prnArr(Array,elemanSayisi);
	swapArr(Array, elemanSayisi);
	printf("\n");
	prnArr(Array,elemanSayisi);

	
	return 0;
	
}
