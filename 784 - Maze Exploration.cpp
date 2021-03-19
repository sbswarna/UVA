#include<stdio.h>
#include<string.h>
long long i,j,row,a[1000],t,m,mx,k;
char maze[1000][1000];
void mz(long long i,long long j)
{

    if(maze[i][j]==' '||maze[i][j]=='*')
	{
	maze[i][j]='#';
    mz(i,j+1);
    mz(i,j-1);
    mz(i+1,j);
    mz(i-1,j);
    mz(i+1,j+1);
   mz(i+1,j-1);
    mz(i-1,j+1);
    mz(i-1,j-1);
}
else
{
	return;
}
}
int main()
{
	scanf("%lld",&t);
	getchar();
	m=1;
	while(m<=t)
	{
		row=0;
		long long int mx=0;
		for(k=1;k;k++)
		{
			gets(maze[row]);

			if(maze[row][0]=='_')
			{
				row++;
				break;
			}
			else
			{
				row++;
			}

		}

		/*for(i=0;i<row;i++)
		{
			for(j=0;j<a[i];j++)
			{
				cout<<maze[i][j];
			}
			cout<<endl;
		}*/
	for(i=0;i<row;i++)
		{
			for(j=0;maze[i][j]!='\0';j++)
			{
				if(maze[i][j]=='*')
					mz(i,j);
			}
		}

		for(i=0;i<row;i++)
		{
			for(j=0;maze[i][j]!='\0';j++)
			{
				printf("%c",maze[i][j]);
			}
			printf("\n");
		}
		m++;
	}
	return 0;
}
