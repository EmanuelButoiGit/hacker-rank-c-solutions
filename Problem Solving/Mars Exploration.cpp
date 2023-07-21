#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    
    string expected = "";
    int ct = 0;
    
    for(int i = 0; i < s.size()/3; i++){
        
        expected+="SOS";
        
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != expected[i]){
            ct++;
        }
        
    }
    
    return ct;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
