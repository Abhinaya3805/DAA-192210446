#include<stdio.h>
int main()
{
	char s[]="design and analysis of algorithms";
	int i;
	for(i=0;s[i]!='\0';++i);
	printf("length of the string:%d",i);
	return 0;
}