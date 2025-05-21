#include <bits/stdc++.h>

using namespace std;

bool provera(string &n){
    for (int i = 1; i < n.size(); i++){
        if (n[i] == '1' && n[i-1] == '1'){
            return false;
        }
    }
    return true;
}

int main()
{
    string n;
    cin >> n;
    string res = n;
    for (int i = n.size()-1; i >= 0; i--){
        if (n[i] == '0'){
            res[i] = '1';
            for (int j = i + 1; j < n.size(); j++){
                res[j] = '0';
            }
            if (provera(res)){
                cout << res << endl;
                exit(0);
            }
        }
    }
    cout << "ne postoji" << endl;
    return 0;
}
