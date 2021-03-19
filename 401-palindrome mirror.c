#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,l,f,j,fl;
	char s[555];
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		f=0;
		fl=0;
		for(i=0,j=l-1;i<l,j>=0;i++,j--)
		{
			if(s[i]==s[j])
			{
				f=0;
			}
			else
			{
				f=1;
				break;
			}
		}
		for(i=0,j=l-1,i<l;j>=0;i++,j--)
		{
			if(s[i]=='A'&&s[j]=='A'||s[i]=='E'&&s[j]=='3'||s[i]=='H'&&s[j]=='H'||s[i]=='I'&&s[j]=='I'||s[i]=='J'&&s[j]=='L'||s[i]=='L'&&s[j]=='J'||s[i]=='M'&&s[j]=='M'||s[i]=='O'&&s[j]=='O'||s[i]=='S'&&s[j]=='2'||s[i]=='T'&&s[j]=='T'||s[i]=='U'&&s[j]=='U'||s[i]=='V'&&s[j]=='V'||s[i]=='W'&&s[j]=='W'||s[i]=='X'&&s[j]=='X'||s[i]=='Y'&&s[j]=='Y'||s[i]=='Z'&&s[j]=='5'||s[i]=='1'&&s[j]=='1'||s[i]=='2'&&s[j]=='S'||s[i]=='3'&&s[j]=='E'||s[i]=='5'&&s[j]=='Z'||s[i]=='8'&&s[j]=='8')
			{
				fl=0;
			}
			else
			{
				fl=1;
				break;
			}
		}
		if(fl==0&&f==0)
		{
			printf("%s -- is a mirrored palindrome.\n\n",s);
		}
		else if(f==1&&fl==0)
		{
			printf("%s -- is a mirrored string.\n\n",s);
		}
		else if(f==0&&fl==1)
		{
			printf("%s -- is a regular palindrome.\n\n",s);
		}
		else if(f==1&&fl==1)
		{
			printf("%s -- is not a palindrome.\n\n",s);
		}
	}
	return 0;
}
