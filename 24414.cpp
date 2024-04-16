#include<iostream>
using namespace std;
int64_t a[19];
int64_t b[28];
int64_t c[37];
int64_t s;
int main(){
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
            a[i+j]++;

    }
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++)
                b[i+j+k]++;
        }
            

    }
    for(int i=1;i<=9;i++)
    {
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int o=0;o<=9;o++)
                c[i+j+k+o]++;
            }
                
        }
            

    }
    for(int i=1;i<37;i++){
        
        if(i<=9){
            s+=a[i]*a[i]+b[i]*b[i]+c[i]*c[i];
            cout<<"c[i]="<<a[i]<<endl;
            continue;

        }
        
        if(i>9&&i<=18){
            s+=b[i]*b[i]+c[i]*c[i];
            continue;
        }
        
        if(i>18)
        s+=c[i]*c[i];
    }
    cout<<s;
    return 0;
}