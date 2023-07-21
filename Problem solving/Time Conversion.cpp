#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    
    if(s[8] == 'P' && s[9] == 'M'){
        
        s.erase(9);
        s.erase(8);
    
        if(s[0] == '0' && s[1] == '1'){
        
            s[0] = '1';
            s[1] = '3';
            
        }
    
        else if(s[0] == '0' && s[1] == '2'){
                   
            s[0] = '1';
            s[1] = '4';
             
        }
        
        
        else if(s[0] == '0' && s[1] == '3'){
                   
            s[0] = '1';
            s[1] = '5';
             
        }
        
        else if(s[0] == '0' && s[1] == '4'){
                   
            s[0] = '1';
            s[1] = '6';
             
        }
        
        else if(s[0] == '0' && s[1] == '5'){
                   
            s[0] = '1';
            s[1] = '7';
             
        }
        
        else if(s[0] == '0' && s[1] == '6'){
                   
            s[0] = '1';
            s[1] = '8';
             
        }
        
        else if(s[0] == '0' && s[1] == '7'){
                   
            s[0] = '1';
            s[1] = '9';
             
        }
        
        else if(s[0] == '0' && s[1] == '8'){
                   
            s[0] = '2';
            s[1] = '0';
             
        }
        
        else if(s[0] == '0' && s[1] == '9'){
                   
            s[0] = '2';
            s[1] = '1';
             
        }
        
        else if(s[0] == '1' && s[1] == '0'){
                   
            s[0] = '2';
            s[1] = '2';
             
        }
        
        else if(s[0] == '1' && s[1] == '1'){
                   
            s[0] = '2';
            s[1] = '3';
             
        }
    }    
        
    if(s[8] == 'A' && s[9] == 'M'){
            
        s.erase(9);
        s.erase(8);
            
        if(s[0] == '1' && s[1] == '2'){
                
            s[0] = '0';
            s[1] = '0';
                
        }
            
    } 
            
    return s;
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
