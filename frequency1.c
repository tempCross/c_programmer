#include <stdio.h>

int main()
{
        int c, i,j,b;
        int word[100];
        int count;
        int freq[100];
        count = j = 0;
        for(i = 0; i < 10; i++)
          word[i] = 0;
        while((c = getchar()) != EOF){
          if( c != ' '){
            word[i] = c;
            printf("\nWord[i]: %d\n",word[i]);
            //next char to compare
            b = getchar();
            printf("b: %d",b);
            count++;
            for( i = 0; i < count; i++){
              if(word[i] == b)
                printf("yes!");
                ++freq[j];
            }
          }
          else{
          j++;
          printf("New word\n");
         }
	}
}
