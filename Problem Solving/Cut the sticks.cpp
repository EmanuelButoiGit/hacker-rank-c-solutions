#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheSticks' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int minArray(vector<int> arr){
    
    int min = 100000;
    
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < min && arr[i] != 0){
            min = arr[i];
        }
    }
    
    return min;
}

bool checkIfZero(vector<int> arr, vector<int> zeros){
    
    int zero = 0;
    
    for(int i=0; i<arr.size(); i++){
            if(arr[i] == zeros[i]){
                zero++;
            }
        }
    
    if(zero == arr.size()){
        return true;
    }
    
    else return false;
    
}

int counterWithoutZ(vector<int>arr){
    
    int ct = 0;
    
    for(int i=0; i<arr.size(); i++){
            if(arr[i] != 0){
                ct++;
            }
            //cout<<arr[i]<<" ";
        }
        
        cout<<endl;
        
    return ct;
}

vector<int> cutTheSticks(vector<int> arr) {
    
    vector<int>sticks;
    vector<int>zeros;
    
        for(int i=0; i<arr.size(); i++){
            int zero = 0;
            zeros.push_back(0);
        }
        
        sticks.push_back(arr.size());
        
        while(checkIfZero(arr, zeros)!=true){
            int min = minArray(arr);
            for(int i = 0; i < arr.size(); i++){
                if(arr[i] != 0){
                    arr[i] -= min;
                }
            }
            
            int n = counterWithoutZ(arr);
            
            sticks.push_back(n);
            
        }
        
        sticks.pop_back();              
        
    return sticks;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = cutTheSticks(arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
