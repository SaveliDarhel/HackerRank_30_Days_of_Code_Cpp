#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t;
    cin >> t;
    
    for (int i=0; i<t; i++){
        string s;
        cin >> s;
        for (int j=0; j<s.size(); j+=2){
            cout << s[j];
        }
        cout << " ";
        for (int u=1; u<s.size(); u+=2){
            cout << s[u];
        }
        cout << endl;
    }
    return 0;
}
