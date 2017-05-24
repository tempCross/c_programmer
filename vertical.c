#include <stdio.h>
int main()
{
        int c, nc, i, j, k;
        int word[10];
        nc = i = j = 0;
        k = 10;
        for(i = 0; i < 10; i++)
          word[i] = 0;
        while ((c = getchar()) != EOF){
          if(c == ' '){
            //putchar('b');
            j++;
            nc = 0;
          }
          else {
             nc++;
          }   
          for( i = 0; i < nc; i++)
                word[j] = nc;
          }
          printf("\n\n");
          for(i = 0; i < 10; i++){
                for(j = 0; j < 10; j ++)
                  if( word[j] == k ){
                        printf("*");
                        --word[j];
                        //printf("%d", word[j]);
                        //printf("%d", --k);
                  }
                  else
                        printf(" ");
                --k;
                printf("\n");
          }
}
