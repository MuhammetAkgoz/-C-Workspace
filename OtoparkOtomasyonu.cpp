#include<stdio.h>

int main(){
	int motosiklet=0;
	int otomobil=0;
	int minibus=0;
	int otobus=0;
	double toplam=0;
	int siraSayisi=1;
	while(siraSayisi>=1 || siraSayisi<=4 && siraSayisi!=5){	
	
	printf( "1-Motosiklet\n"
			"2-Otomobil\n"
			"3-Minibus\n"
			"4-Otobus\n"
			"5-Iptal\n");		
		printf("Lutfen arac tipini seciniz: ");
		scanf("%d",&siraSayisi);
	
		int kalinanSure;
	if(siraSayisi>=5){
		break;
	}else{
		printf("Kac saat kalacaksiniz:"); 
		scanf("%d",&kalinanSure);
	}
		printf("----------------------\n");	
		
	if(siraSayisi==5){
		break;
	}
	else if(siraSayisi==1 && kalinanSure<=2 && kalinanSure>=0){
		toplam=toplam+(15.00*0.5);
		motosiklet=motosiklet+1;	
	}
	else if(siraSayisi==1 && kalinanSure<=6 && kalinanSure>=3){
		toplam=toplam+(25.50*0.5);
		motosiklet=motosiklet+1;
	}
		
	else if(siraSayisi==1 && kalinanSure<=10 && kalinanSure>=7){
		toplam=toplam+(30.00*0.5);
		motosiklet=motosiklet+1;
	}
		
	else if(siraSayisi==1 && kalinanSure>=11){
		toplam=toplam+(37.50*0.5);
		motosiklet=motosiklet+1;
	}
	else if(siraSayisi==2 && kalinanSure<=2 && kalinanSure>=0){
		toplam=toplam+(15.00*1.0);
		otomobil=otomobil+1;	
	}
	else if(siraSayisi==2 && kalinanSure<=6 && kalinanSure>=3){
		toplam=toplam+(25.50*1.0);
		otomobil=otomobil+1;
	}
	else if(siraSayisi==2 && kalinanSure<=10 && kalinanSure>=7){
		toplam=toplam+(30.00*1.0);
		otomobil=otomobil+1;
	}
	else if(siraSayisi==2 && kalinanSure>=11){
		toplam=toplam+(37.50*1.0);	
		otomobil=otomobil+1;
	}
		
	else if(siraSayisi==3 && kalinanSure<=2 && kalinanSure>=0){
		toplam=toplam+(15.00*1.5);
		minibus=minibus+1;
	}
		
	else if(siraSayisi==3 && kalinanSure<=6 && kalinanSure>=3){
		toplam=toplam+(25.50*1.5);
		minibus=minibus+1;
	}
		
	else if(siraSayisi==3 && kalinanSure<=10 && kalinanSure>=7){
		toplam=toplam+(30.00*1.5);
		minibus=minibus+1;
	}
		
	else if(siraSayisi==3 && kalinanSure>=11){
		toplam=toplam+(37.50*1.5);
		minibus=minibus+1;
	}
		
	else if(siraSayisi==4 && kalinanSure<=2 && kalinanSure>=0){
		toplam=toplam+(15.00*2.0);
		otobus=otobus+1;	
	}
		
	else if(siraSayisi==4 && kalinanSure<=6 && kalinanSure>=3){
		toplam=toplam+(25.50*2.0);
		otobus=otobus+1;
	}
	
	else if(siraSayisi==4 && kalinanSure<=10 && kalinanSure>=7){
		toplam=toplam+(30.00*2.0);
		otobus=otobus+1;
	}
	
	else if(siraSayisi==4 && kalinanSure>=11){
		toplam=toplam+(37.50*2.0);
		otobus=otobus+1;
	}					
	}
	printf("------------------------------\n");
	printf("Toplam Kazanc:%5.2f \n",toplam);
	printf("Toplam Motorsiklet Sayisi:%d\n",motosiklet);
	printf("Toplam Otomobil Sayisi:%d\n",otomobil);
	printf("Toplam Minibus Sayisi:%d\n",minibus);
	printf("Toplam Otobus Sayisi :%d\n",otobus);
	
	
	return 0;
}
