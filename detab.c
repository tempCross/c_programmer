#include <stdio.h>

#define MAXLINE 1000
#define TABSTOPS 8
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int len2;
	char line[MAXLINE];
	char space_tab[MAXLINE];

	while((len = getLine(line, MAXLINE)) > 0){
		
		printf("The length of the line with tabs and blanks is %d\n", len);
		copy(space_tab, line);
		//if(len > 80)
		    printf("%s", space_tab);
	}
	return 0;
}
int getLine(char s[], int lim)
{
	int c, i;
	
	for(i=0; i<lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void copy(char to[], char from[])
{
	int i,j,count;
	i = j = count =0;
	while ((to[i] = from[j]) != '\0'){
		if(to[i] == '\t'){
			count = TABSTOPS;
			for(;count>0;count--){
			   to[i] = '>';
			   printf("i = %d\t to[i] = %d\n", i,to[i]);
			   i++;
		   }
		--i;
		printf("to[i] = %d\n", to[i]);
		}
		++i;
		++j;
	}
	
}

