#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[], int len);
int main()
{
        char line[MAXLINE];
        char output[MAXLINE];
        int len;
        while((len = get_line(line,MAXLINE)) > 0){
           printf("\nThe length is %d\n",len); 
           printf("The output is: %s\n",line);
           copy(output,line,len);
           printf("Altered output %s\n",output);
        }
}
int get_line(char line[], int maxline)
{
  int c, i;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
{
  int c, i;
  for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
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
        printf("This %d\n ",len);
        while((to[i] = from[len-1]) != '0')
        {
                //remove blanks
                if(from[j] == ' ')
                  if(from[++j] != '\n'){
                   to[i] = from[j];
                }
                 ++i;
                --len;
        }
}
