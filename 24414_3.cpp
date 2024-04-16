#include<iostream>
using namespace std;
int cal(int64_t i){
    return ((i+1)/2+i/4);

}
int main(){
    int64_t r;
    int64_t l;
    cin>>l>>r;
    cout<<(cal(r-1)-cal(l));
}