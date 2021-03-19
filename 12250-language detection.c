#include<stdio.h>
#include<string.h>
int main()
{
	char o1[7]="UNKNOWN", o2[]="ENGLISH", o3[]="SPANISH", o4[]="GERMAN", o5[]="FRENCH", o6[]="ITALIAN",o7[]="RUSSIAN", s[14];
	int i,j,l;
	j=1;
	while(j)
	{
		gets(s);
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else if(strcmp(s,"#")==0)
		{
			break;
		}
		else
		{
			if(strcmp(s,"HELLO")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<7;i++)
				{
					printf("%c",o2[i]); 
				}
			}
				else if(strcmp(s,"HOLA")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<7;i++)
				{
					printf("%c",o3[i]); 
				}
			}
					else if(strcmp(s,"HALLO")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<6;i++)
				{
					printf("%c",o4[i]); 
				}
			}
					else if(strcmp(s,"CIAO")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<7;i++)
				{
					printf("%c",o6[i]); 
				}
			}
				else if(strcmp(s,"BONJOUR")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<6;i++)
				{
					printf("%c",o5[i]); 
				}
			}
				else if(strcmp(s,"ZDRAVSTVUJTE")==0)
			{
				printf("Case %d: ",j);
				for(i=0;i<7;i++)
				{
					printf("%c",o7[i]); 
				}
			}
			else
			{
				printf("Case %d: ",j);
				for(i=0;i<7;i++)
				{
					printf("%c",o1[i]); 
				}
			}
			printf("\n");
		}
		j++;
	}
	return 0;
}
