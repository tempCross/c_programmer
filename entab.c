
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
	int i, j, count, tab;
	i = j = count = tab = 0;
	while ((to[i] = from[j]) != '\0'){
		if(from[j] == ' ')
			count++;
		++i;
		++j;
		printf("count = %d\n", count);
		
		if(count >= 8){
		
			for(tab = count; tab > 0; tab--){
				printf("We may need tabs!\n");
				--i;
			}
		   count = 0;
		   to[i] = '\t';
		   ++i;
		}
		printf("to[i] = %d\tfrom[j] = %d\n", to[i], from[j]);
	}
	printf("count = %d\n", count);
}
	
