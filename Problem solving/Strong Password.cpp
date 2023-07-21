#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    int missingCar = 0;
    int newLength = 0;
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    bool nr = false;
    bool lw = false;
    bool up = false;
    bool sp = false;
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = 0; j < n; j++){
            if(numbers[i] == password[j]){
                nr = true;
                break;
            }
        }
    }
    
    if(nr == false){
        missingCar++;
    }
    
    for(int i = 0; i < lower_case.size(); i++){
        for(int j = 0; j < n; j++){
            if(lower_case[i] == password[j]){
                lw = true;
                break;
            }
        }
    }
    
    if(lw == false){
        missingCar++;
    }
    
    for(int i = 0; i < upper_case.size(); i++){
        for(int j = 0; j < n; j++){
            if(upper_case[i] == password[j]){
                up = true;
                break;
            }
        }
    }
    
    if(up == false){
        missingCar++;
    }
    
    for(int i = 0; i < special_characters.size(); i++){
        for(int j = 0; j < n; j++){
            if(special_characters[i] == password[j]){
                sp = true;
                break;
            }
        }
    }
    
    if(sp == false){
        missingCar++;
    }
    
    newLength = n + missingCar;
    
    if(newLength < 6){
        missingCar = missingCar + 6 - newLength;
    }
    
    cout<<missingCar;
    
    return missingCar;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
