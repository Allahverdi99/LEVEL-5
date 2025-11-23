#include <iostream>
using namespace std;
int cem(int a,int b){
    return a+b;
}
int hasil(int a,int b){
    return a*b;
}
int ferq(int a,int b) {
    return a-b;
}
double bolme(int a,int b){
    return (double)a/b;
} 
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"Cem: "<<cem(x,y)<<endl;
    cout<<"Hasil: "<<hasil(x,y)<<endl;
    cout<<"Ferq: "<<ferq(x,y)<<endl;
    if(y!=0)
        cout<<"Bolme: "<<bolme(x,y)<<endl;
    else
        cout<<"0-a bolme yoxdur"<<endl;
    return 0;
}