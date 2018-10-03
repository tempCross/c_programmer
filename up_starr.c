#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	int c, i, j, k;
	int alpha[10];
	i = 0;
	k = 10; 
	for(i = 0; i < 10; i++)
        alpha[i] = 0;
	
	while ((c = getchar()) != EOF)
	{
		if(c != '\n'){
		   ++alpha[i-10];
		   printf("alpha[%d]= %d\n",i-10,(c));
		
		}else
		   i++;
	}
	for(;k > 0;k--){
	   for(i = 0; i < 10; i++)
	     if(alpha[i] == k){
		printf("%d ", alpha[i]);
		--alpha[i];
	     }else
		putchar(' '); 
	   printf("\n");
     }	 
} 
