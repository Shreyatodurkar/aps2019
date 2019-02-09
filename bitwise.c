#include<stdio.h>
#include<math.h>
int main()
{
	char data[30];
	scanf("%s",data);
	int size=strlen(data);
	int set_size=pow(2,size);
	int i,j;
	for(i=0;i<set_size;i++)
	{
		for(j=0;j<set_size;j++)
		{
			if(i&(1<<j))
			{
				printf("%c",data[j]);
			}
		}
		printf("\n");
	}
}
