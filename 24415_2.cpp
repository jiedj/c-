#include<iostream>
using namespace std;

const int N=2e2+10;
int a[N][N];
int top[N],leaves[N];
int main(){
    int n;
    cin>>n;
    int n1=n;
    int b,c;
    while(n--){
        cin>>b>>c;
        top[n1-n]=c;
        a[n1-n][b]++;
        
    }
    int s;

    for(int i=n1;i>0;i--){
        int m=0;
        int d=1;
        for(int j=1;j<N;j++){
            if(a[i][j]>0){
                a[top[i]][j]+=a[i][j];
                if(m==0)  m=a[i][j];
                if(m!=a[i][j]) {d=0;break;}
            }
        }
        s+=d;
    }
    cout<<s;
    return 0;
}