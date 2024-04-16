#include<iostream>
using namespace std;
int a[50001];
int i=0;
bool judge(int i,int j){
    if(i>=j||a[i]<a[j]) return false;
    if(a[i]>a[j])
    return true;
    if(a[i]==a[j])
    return judge(i+1,j-1);

}
void get(){
    char ch;
    ch=getchar();
    while (ch!=EOF&&ch!='\n'){    
    a[i++]=int(ch);
    ch=getchar();

    }

    return ;

}

int main(){


    int s;
    get();
    for(int j=0;j<i;j++)
    for(int k=j+1;k<i;k++){
        s+=int(judge(j,k));
    }
    cout<<s;
    return 0;
}