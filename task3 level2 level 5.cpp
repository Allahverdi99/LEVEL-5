#include <iostream>

using namespace std;

int boyuk(int a,int b,int c){

    int max=a;

    if(b>max)

    max=b;

    if(c>max)

    max=c;

    return max;

}

int main(){

    int x,y,z;

    cin>>x>>y>>z;

    cout<<boyuk(x,y,z)<<endl;

}