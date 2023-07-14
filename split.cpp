#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimiter){
    vector<string> ret;
    long long pos = 0;
    string token = "";
    
    //input에서 delimeter 찾기(못 찾을 때까지 루프 반복)
    while ((pos = input.find(delimiter))!= string::npos){
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);

    return ret;
}

int main(){
    string s = "Let's do the C++ practice!", d = " ";
    vector<string> a = split(s,d);
    for(string b:a) cout << b << "\n";
    //-> for(int i = 0; i < a.size(); i++) cout << a[i] << "\n";
}