#include <stdio.h>

int main()
{
        int c, i,j,b;
        int word[100];
        int count;
        int freq[100];
        count = j = 0;
        for(i = 0; i < 10; i++){
          word[i] = freq[i] = 0;
        }
	while((c = getchar()) != EOF){
          if( c != ' '){
            word[i] = c;
            printf("\nWord[i]: %d\n",word[i]);
            //next char to compare
            if( word[i] != 0)
            b = word[--i];
            printf("b: %d",b);
            count++;
            for( i = 0; i < count; i++){
              if(word[i] == b && word[i] != 0){
                //Dont count same letter twice
                word[i] = 0;
                ++freq[j];
                printf("\n%d\n",freq[j]);
              } 
            }
          }
          else{
          j++;
          printf("New word\n");
          for(i = 0; i < 10; i++)
            word[i] = 0;
         }
	}
}
