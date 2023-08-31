#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 12;
    int b = 13;
    
    a = a*b;
    b = a;
    a = a/b;
    b = b/a;
    
    cout<<a<<" "<<b;
}