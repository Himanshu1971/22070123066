#include<bits/stdc++.h>
using namespace std;

int main(){
    int var1 = 12;
    int var2 = 13;
    
    cout<<"Addition: "<<var1+var2<<endl;
    cout<<"Subtraction: "<<var1-var2<<endl;
    cout<<"Modulus: "<<var1%var2<<endl;
    cout<<"Division: "<<var1/var2<<endl;
    cout<<"MUltiplication: "<<var1*var2<<endl;

    // Bitwise operator
    cout<<"Bitwise operator:"<<endl;
    cout<<"Left shift: "<<(var1<<2)<<endl;
    cout<<"Right shift: "<<(var2>>3)<<endl;
    cout<<"And: "<<(var1&var2)<<endl;
    cout<<"Or: "<<(var1|var2)<<endl;
    cout<<"Not: "<<(~var1)<<endl;
    cout<<"Xor: "<<(var1^var2)<<endl;

    // Assignment Operator
    cout<<"Assignment operator:"<<endl;
    cout<<"Addition equal: "<<(var1+=var2)<<endl;
    cout<<"Subtraction equal: "<<(var1-=var2)<<endl;
    cout<<"Modulus equal: "<<(var1%=var2)<<endl;
    cout<<"Division equal: "<<(var1/=var2)<<endl;
    cout<<"MUltiplication equal: "<<(var1*=var2)<<endl;

    // Comparison operator
    cout<<"Comparison operator:"<<endl;
    cout<<"equal to: "<<(var1==var2)<<endl;
    cout<<"not equal: "<<(var1!=var2)<<endl;
    cout<<"greater than equal: "<<(var1>=var2)<<endl;
    cout<<"smaller than equal: "<<(var1<=var2)<<endl;
    


}

