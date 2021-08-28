#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> v;
    int nr = 0;
    int cifra = 0;
    bool primaCifra = true;
    bool esteNegativ = false;
    
    //"871,166,-433,-917,-846,461";
    
    for(int i = 0; i < str.size(); i++){
        cifra =(int)str[i]-'0';
        
        if(str[i] == '-'){
            esteNegativ = true;
        }
        
        if(str[i] != ',' && str[i] != '-' && primaCifra == true){
            nr+= cifra;
            primaCifra = false;
        }
        
        else if(str[i] != ',' && str[i] != '-' && primaCifra == false){ 
            //nr += (int)str[i] - '0';
            
            nr = (nr * 10) + cifra;
                   
        }
        
        if(str[i] == ',' && esteNegativ == true){
            nr = nr * -1;
            v.push_back(nr);
            nr = 0;
            primaCifra = true;
            esteNegativ = false;
        }
        
        else if(str[i] == ',' && esteNegativ == false){
            v.push_back(nr);
            nr = 0;
            primaCifra = true;
        }
        
        if ( i == (str.size()-1) && esteNegativ == true){
            nr = nr * -1;
            v.push_back(nr);
            esteNegativ = false;
        }  
        
        else if(i == (str.size()-1) && esteNegativ == false){
            v.push_back(nr);
        }
        
    }
    
    return v;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
