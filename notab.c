#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
int copy(char to[], char from[]);

int main()
{
	int len;
	int len2;
	char line[MAXLINE];
	char notab[MAXLINE];

	while((len = getLine(line, MAXLINE)) > 0){
		
		len2 = copy(notab, line);
		printf("The length of the line with tabs and blanks is %d\n", len);
		printf("The length of the line without tabs and blanks is %d\n", len2);

		//if(len > 80)
		    printf("%s", notab);
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
int copy(char to[], char from[])
{
	int i, j;
	i = 0;
	while ((to[i] = from[i]) != '\0'){
		++i;
	}
	--i;
	--i;
	while ((to[i] == ' ' || to[i] == '\t'))
		--i;
	return i + 2;
	
}
