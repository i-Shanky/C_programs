#include<stdio.h>
#include<string.h>
int main()
{
char argv[100];
int hash[256]={0};
int i;
scanf("%s",argv);
int l = strlen(argv);
for(i=0;i<l;i++)
{
hash[argv[i]]++;
if(hash[argv[i]]==1)
	printf("%c",argv[i]);
}
return 0;
}
