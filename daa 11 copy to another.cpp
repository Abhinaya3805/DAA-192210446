#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the string");
	gets(str1);
	printf("\nstring 1=%s",str1);
	strcpy(str2,str1);
	printf("\nstring2=%s",str2);
	return 0;
}