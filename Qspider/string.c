#include<stdio.h>
char str[100],PAT[50],REP[50],ANS[150];
int i,j,k,m,n,c,flag = 0;
void string_match()
{
	i=j=m=c=0;
	while(str[c]!='\0')
	{
	if(str[m] == PAT[i])
	{
		i++;
		m++;
		if(PAT[i] == '\0')
		{
			flag = 1;
			for(k=0;REP[k]!='\0';k++,j++)
				ANS[j] = REP[k];
			 i = 0;
			 c = m;
			}
		}
		else
		{
			ANS[j] == str[c];
			j++;
			c++;
			m = c;
			i = 0;
		}
	}
	ANS[j]='\0';
}
void main()
{
	printf("enter the main string: \n");
	gets(str);
	printf("enter the pattern string: \n");
	gets(PAT);
	printf("enter the replace string: \n");
	gets(REP);
	string_match();
	if(flag == 1)
	{
		printf("The resultant string is %s\n",ANS);
	}
	else
	{
		printf("Pattern not found\n");
	}
}


