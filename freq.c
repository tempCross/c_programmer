#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	int c, i, j, k, chk, freq;
	int alpha[10];
	i = chk = freq = j = 0;
	k = 10; 
	for(i = 0; i < 10; i++)
        alpha[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF)
	{
		if(c != '\n'){
		   alpha[i] = c;
		   printf("alpha[%d]= %d\n",i,(c));
		   i++;
	       }
	 }
		for(k = 0 ; k < 10; k++){
		  for(i = 0; i < 10; i++){      
		     printf("%d ", alpha[i]);
		     if(alpha[i] == alpha[k])
			freq++;
		  }
		     printf("alpha[k] = %d its frequency is %d\n", alpha[k],freq);
		     freq = 0;
	      }
} 
