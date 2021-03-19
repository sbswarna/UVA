#include<bits/stdc++.h>
using namespace std;
int parent[100006],RANK[100006],tst,n;
void make_set(int v)
{
    for(int i=1; i<=v; i++)
    {
        parent[i] = i;
        RANK[i] = 0;
    }
}
int find_parent(int u)
{
    if(parent[u]!=u)
        parent[u]=find_parent(parent[u]);
    return parent[u];
}
void union_sets(int u, int v)
{
    int pu = find_parent(u);
    int pv = find_parent(v);
    if (pu != pv)
    {
        if (RANK[pu] < RANK[pv])
            swap(pu, pv);
        parent[pu] = pv;
        if (RANK[pu] == RANK[pv])
            RANK[pu]++;
    }
}
int main()
{
    int T, N, x, y;
    char s[100], ss[2];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        make_set(N);
        getchar();
        int yes = 0, no = 0;
        while(gets(s))
        {
            if(s[0] == '\0')
                break;
            sscanf(s, "%s %d %d", ss, &x, &y);
            if(ss[0] == 'c')
                union_sets(x, y);
            else
            {
                int parentx=find_parent(x);
                int parenty=find_parent(y);
                if(parenty==parentx)
                    yes++;
                else
                    no++;
            }
        }
        printf("%d,%d\n", yes, no);
        if(T)
            puts("");
    }
    return 0;
}

