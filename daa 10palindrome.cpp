#include<stdio.h>
#include<string.h>
int main()
{
	char str[]={"amma"};
	int a=0;
	int b=strlen(str)-1;
	while(b>1)
	{
		if (str[a++]!=str[b--])
		   printf("%s is not a palindrome\n",str);
		   return 0;
	}
	printf("%s is a palindrome\n",str);
	return 0;
}