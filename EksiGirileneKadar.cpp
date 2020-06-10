#include<stdio.h>





int main()
{
	
	int entered;
	printf("Sayi girmeye basla:");
	
	
	
	while(entered>=0)
	{
	
		scanf("%d",&entered);
		printf("%d\n",entered);
		
		if(entered>=0)
			printf("Helal kardesime devam...");
		else
			printf("Tamam birak,bitti.Oynama artik :)");
	}
	
	
	
	
	
}


