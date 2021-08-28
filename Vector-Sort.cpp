#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    vector<int> v;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        int el;
        cin>>el;
        v.push_back(el);
    }
    
    /*for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }*/
    
    sort(v.begin(),v.end());
    
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
     
    return 0;
}
