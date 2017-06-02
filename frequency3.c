#include <stdio.h>

#define NUM_CHARS 128

int main()
{
    int c, i, j;
    int char_freq[NUM_CHARS + 1];
    
    for( i = 0; i <= NUM_CHARS; i++ )
      char_freq[i] = 0;
      
    while((c = getchar()) != EOF)
      ++char_freq[c];
    
    for(i = 0; i <= NUM_CHARS; i++){
      if(char_freq[i] > 0){
        printf("\n%4d: ", i);
        for(j = 0; j < char_freq[i]; j++)
          printf("*");
        printf("\n");
      }  
    }  
}
