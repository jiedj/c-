#include<iostream>
#include<algorithm>
using namespace std;
int temp[21];
const int N =100;
int n;
int s=0;
int main(){
    int b;

    cin>>n;
    int n1=n;
    while(n--){
        cin>>b;
        s=s^b;
        for(int i=0;i<21;i++)
        {
            if((s>>i)&1)
            temp[i]++;
        }
    }
    int s1=0;
    for(int i=0;i<21;i++){
        s1+=temp[i]*(n1+1-temp[i])*(1<<i);
        //在计算时由于^的运算关系

    }
    cout<<s1;
    return 0;

}
