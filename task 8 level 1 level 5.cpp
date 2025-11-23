#include <iostream>
using namespace std;
int perimetr(int a){
    return 4*a;
}
int sahe(int a){
    return a*a;
}
int main(){
    int teref;
    cin>>teref;
    cout<<"Perimetri: "<<perimetr(teref)<<endl;
    cout<<"Sahe: "<<sahe(teref)<<endl;
    return 0;
}
