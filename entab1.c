#include <stdio.h>
#define MAXLINE 1000
#define TAB_SPACES 8

int get_line(char line[], int maxline);
void copy(char to[], char from[], int len);
int main()
{
        char line[MAXLINE];
        char output[MAXLINE];
        int len, i;
        int num;
        while((len = get_line(line,MAXLINE)) > 0){
           num = len;
           printf("\nThe length is %d\n",len); 
           printf("The output is: %s\n",line);
     char output[MAXLINE];
        int len, i;
        int num;
        while((len = get_line(line,MAXLINE)) > 0){
           num = len;
           printf("\nThe length is %d\n",len); 
           printf("The output is: %s\n",line);
           copy(output,line,num);
           printf("Altered output: %s\n",output);
        }
}
int get_line(char line[], int maxline)
{
  int c, i, j, count;
  j,count = 0;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
       }
}
int get_line(char line[], int maxline)
{
  int c, i, j, count;
  j,count = 0;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  printf("The 0 has been appended\n");
  return i;
}
void copy( char to[], char from[], int len)
{
        int i;
        int j;
        int count;
        i = j = count = 0;
        while((to[i] = from[j]) != '\0')
        {
                   if(to[i] == ' '){
                          count++;
                     if(count == TAB_SPACES){
                        to[i-=7] = '\t';
                        printf("Entab inserted at: %d\n",i);
                        count = 0;
                   }
                  } else
                       count = 0;
                   ++i;
                   to[i-=7] = '\t';
                   printf("Entab inserted at: %d\n",i);
                   count = 0;
                   }
                  } else
                       count = 0;
                   ++i;
                   ++j;
        }
