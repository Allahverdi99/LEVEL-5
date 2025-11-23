#include <iostream>

using namespace std;

int deqiqe(int s){

    return s/60;

}

int saat(int s){

    return s/3600;

    }

int main(){

    int s;

    cin>>s;

    cout<<"deiqe; "<<deqiqe(s)<<endl;

    cout<<"saat; "<<saat(s)<<endl;

}