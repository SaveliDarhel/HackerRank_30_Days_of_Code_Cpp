#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    map <string,string> m;
    
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;
        m.insert(pair<string,string>(a,b));
    }
    
    string q;
    while(cin >> q){
        auto itr = m.find(q);
        if (itr == m.end()){
            cout << "Not found\n";
            continue;
        }
        cout << itr->first << "=" << itr->second << endl;
    }
       
    return 0;
}
