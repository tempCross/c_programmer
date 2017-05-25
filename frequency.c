
#include <stdio.h>

int main()
{
        int c, i,j,b;
        int word[100];
        int count[10];
        for(i = 0; i < 10; i++)
          word[i] = 0;
        while((c = getchar()) != EOF)
          if( c == ' ')
                printf("\nNew Line\n");
          else{
            //initial array
            word[i] = c;
            printf("\nWord[i]: %d\n",word[i]);
            //next char to compare
            b = getchar();
            printf("b: %d",b);
            if(word[i] == b)
                printf("yes!");
            i++;
          }
  
}

