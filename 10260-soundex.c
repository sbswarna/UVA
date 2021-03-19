#include<stdio.h>
#include<string.h>
int main()
{
	long long int l,i,j,k,p;
	char s[100],s1[100];
	while(gets(s))
	{
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
			k=0;
			p=0;
			for(i=0;i<l;i=i+p+1)
			{
				p=0;
				if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
						if(s[j]=='B'||s[j]=='F'||s[j]=='P'||s[j]=='V')
						{
							p++;
							
p++;						}
						else
						{
							break;
						}
					}
				}
			else	if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
						if(s[j]=='C'||s[j]=='G'||s[j]=='J'||s[j]=='K'||s[j]=='Q'||s[j]=='S'||s[j]=='X'||s[j]=='Z')
						{
							p++;
						}
						else
						{
							break;
						}
					}
				}
				else if(s[i]=='D'||s[i]=='T')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
if(s[j]=='D'||s[j]=='T')						{
						p++;
						}
						else
						{
							break;
						}
					}
				}
				else if(s[i]=='L')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
						if(s[j]=='L')
						{
							p++;
						}
						else
						{
							break;
						}
					}
				}
				else if(s[i]=='M'||s[i]=='N')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
						if(s[j]=='M'||s[j]=='N')
						{
							p++;
						}
						else 
						{
							break;
						}
					}
				}
				else if(s[i]=='R')
				{
					s1[k]=s[i];
					k++;
					for(j=i+1;j<l;j++)
					{
						if(s[j]=='R')
						{
							p++;
						}
						else
						{
							break;
						}
					}
				
				}
				else
				{
					p=0;
				}
			}
			for(i=0;i<k;i++)
			{
								if(s1[i]=='B'||s1[i]=='F'||s1[i]=='P'||s1[i]=='V')
								{
									printf("1");
								}
			else	if(s1[i]=='C'||s1[i]=='G'||s1[i]=='J'||s1[i]=='K'||s1[i]=='Q'||s1[i]=='S'||s1[i]=='X'||s1[i]=='Z')
			{
				printf("2");
			}
							else if(s1[i]=='D'||s1[i]=='T')

{
	printf("3");
}

					else if(s1[i]=='L')
{
	printf("4");
		}	
			
				else if(s1[i]=='M'||s1[i]=='N')

{
	printf("5");
	
}
				else if(s1[i]=='R')
{
	printf("6");
}
			}
			printf("\n");
		}
	}
}
