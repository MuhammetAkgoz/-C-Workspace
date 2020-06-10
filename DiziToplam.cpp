#include<stdio.h>





int main()
{
	
	int dizi[2]={12,56};
	int hold;
	int target=0;	

		for(int i=0;i<2;i++)
		{
		
			hold=dizi[i];
			target=hold+target;
		}
	
	printf("%d",target);
	
	
	return 0;
}
