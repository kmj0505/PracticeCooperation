#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(){
    for(int i = 1; i<=5; i++) v.push_back(i);
    for(int i = 0; i<5; i++){
        cout << i << "��° ��� : " << *(v.begin()+i) << "\n";
        cout << i << &*(v.begin()+i) << "\n";
    }
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
}