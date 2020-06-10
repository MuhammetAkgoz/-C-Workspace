#include<stdio.h>
#include<string.h>
#include<conio.h>


int main()									
{
	char metin[100];
	char ters[100];
	
	int uzunluk=0;
	int n=0;
	
	
	printf("Bir kelime giriniz: ");
	gets(metin);
	
	
	uzunluk=strlen(metin);
	
	for(int n=0;n<uzunluk;n++)
	{
		
		ters[n]=metin[uzunluk-1-n];
		
	}

	
	printf("\n Girilen Metin : %s",metin);
    printf("\n Metnin Tersi  : %s",ters);
    getch();
}
