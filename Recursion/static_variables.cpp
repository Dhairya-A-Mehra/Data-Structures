#include<iostream>
using namespace std;
int func1(int n) {
    static int x=0;
    if(n>0){
        x++;
        return func1(n-1)+x;
    }
    return 0;
}
int main(){
    int a;
    a=func1(5);
    cout<<a;
    return 0;
}