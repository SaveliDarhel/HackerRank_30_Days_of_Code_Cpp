#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int sum = 0;
    vector <int> s;
            
    for (int x=0; x<4; x++){
        for (int y=0; y<4; y++){
                    
            sum = arr[x][y]+arr[x][y+1]+arr[x][y+2]+
            arr[x+1][y+1]+arr[x+2][y]+arr[x+2][y+1]+arr[x+2][y+2];
            
            s.push_back(sum);
                    
            //cout << sum << " ";
        }
    }
    
    int ans = s[0];
    for (int i=0; i<16; i++){
        if (s[i] > ans){
            ans = s[i];
        }
    }
    cout << ans;
    return 0;
}
