#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ip[100],st[100]={'0','1','1','1','1','1','1','0'},ds[100]={'0','1','1','1','1','1','1','0'};
	int i=8,l,o=0,j=8;
	clrscr();
	//stuffing
	printf("Enter data to be sent\n");
	gets(ip);
	printf("Data before stuffing: %s\n",ip);
	l=strlen(ip);
	while(i<l-8)
	{
		if(ip[i]=='1')
		{
			o++;
			st[j++]=ip[i];
			if(o==5)
			{
				st[j++]='0';
				o=0;
			}
		}
		else
		{
			o=0;
			st[j++]=ip[i];
		}
		i++;
	}
	strcat(st,"01111110");
	printf("Message after stuffing: %s\n",st);
	//destuffing
}