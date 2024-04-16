#include<iostream>
#include<algorithm>
using namespace std;

const int N=100;
int dis[N][N];
int n,m,q;
void floyd(){

     for(int k=1;k<=n;k++)
         for(int i=1;i<=n;i++)
             for(int j=1;j<=n;j++)
                    if(min(dis[i][k],dis[k][j])>dis[i][j])
                     dis[i][j]=min(dis[i][k],dis[k][j]);


}
int main(){
    cin>>n>>m>>q;
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        dis[a][b]=dis[b][a]=c;
    }
    floyd();
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<dis[a][b]<<endl;
    }
    return 0;
}