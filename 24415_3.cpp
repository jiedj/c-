#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int64_t N=1e2+10;
int n;
float m;
vector<float> A;
float b[N];
float s;
int main(){


    cin>>n>>m;
    int n1=n;
    float c;
    while(n--)
    {
        cin>>b[n1-n];
        s+=b[n1-n];
        A.push_back(b[n1-n]);

    }
    if(s<m||s>2*m) {cout<<"-1"; return 0;}
    sort(A.begin(),A.end());
    n=n1;
    while(n--)
    {
        if(s==m) break;
        s-=A[n]/2.0;
        if(s<m) s+=A[n]/2;
        
        else c++;
    }
    if(s==m) cout<<c;
    else cout<<"-1";
    return 0;

    

}