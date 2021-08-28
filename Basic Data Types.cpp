#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    //int, long, char, float, and double
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    //cout<<d<<endl;
    cout<<setprecision(3)<<fixed<<d<<endl;
    //cout<<e<<endl;;
    cout<<setprecision(9)<<fixed<<e<<endl;;
    
    
    return 0;
}
