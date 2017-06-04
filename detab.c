#include <stdio.h>
#define MAXLINE 1000
#define TAB_SPACES 8

int get_line(char line[], int maxline);
void copy(char to[], char from[], int len);
int main()
{
        char line[MAXLINE];
        char output[MAXLINE];
        int len;
        int num;
        while((len = get_line(line,MAXLINE)) > 0){
           num = len;
           printf("\nThe length is %d\n",len); 
           printf("The output is: %s\n",line);

  char output[MAXLINE];
        int len;
        int num;
        while((len = get_line(line,MAXLINE)) > 0){
           num = len;
           printf("\nThe length is %d\n",len); 
           printf("The output is: %s\n",line);
           copy(output,line,num);
           printf("Altered output %s\n",output);
        }
}
int get_line(char line[], int maxline)
{
  int c, i, j;
  j = 0;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        }
}
int get_line(char line[], int maxline)
{
  int c, i, j;
  j = 0;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i){
    line[i] = c;
   if(c == '\t'){
        for(j = 0; j < TAB_SPACES; ++j)
        line[++i] = ' ';
   }
}
  if(c == '\n'){
    line[i] = c;
    ++i;
        for(j = 0; j < TAB_SPACES; ++j)
        line[++i] = ' ';
   }
}
  if(c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
void copy( char to[], char from[], int len)
{
        int i;
        int j;
        i = j = 0;
        while((to[i] = from[j]) != '\0')
        {
                //remove blanks
//              if(from[j] == ' ')
//                if(from[++j] != '\n'){
//                 to[i] = from[j];
//              }
//              if(from[j] == '\t')
//                   to[i] = ' ';
                 ++i;
                 ++j;
        }
}
