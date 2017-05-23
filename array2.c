# c_programmer
exercise 1.6 (working)
#include <stdio.h>
int main()
{
        int c, nc, i, j;
        int word[10];
        nc = i = j = 0;
        for(i = 0; i < 10; i++)
          word[i] = 0;
        while ((c = getchar()) != EOF){
          if(c == ' '){
            putchar('b');
            j++;
            nc = 0;
          }
          else {
             nc++;
          }   
          for( i = 0; i < nc; i++)
                word[j] = nc;
}
          for(i = 0; i < 10; i++)
            printf("\n%d\n",word[i]);
}
