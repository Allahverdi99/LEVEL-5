#include <iostream>

using namespace std;

double sahe(double r){

    return r*r*3.14;

}

double cevre(double r){

    return r*3.14*2;

}

int main(){

    double r;

    cin>>r;

    cout<<"sahesi; "<<sahe(r)<<endl;

    cout<<"cevre; "<<cevre(r)<<endl;

}