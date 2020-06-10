#include<stdio.h>
#include<string.h>

int main() // yarýn yazýlmasý gerekir
{
	
	char kelime[100];
	char sirali;
	int uzunluk;
	char hold;
	
	printf("Bir kelime giriniz: ");
	gets(kelime);
	
	uzunluk=strlen(kelime);
	
	for(int i=0;i<uzunluk;i++)
		{
			for(int k=i+1;k<uzunluk;k++)
				if(kelime[i]>kelime[k])
					{
						hold=kelime[i];	
						kelime[i]=kelime[k];
						kelime[k]=hold;
		
					}
		}
	
		printf("Alfabetik siralanmis sekli: %s",kelime);
	
	
	
	
	return 0;
}
