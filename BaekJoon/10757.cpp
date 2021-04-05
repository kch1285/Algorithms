#include <iostream>
#include <string>

using namespace std;

int main(){
    int aIdx, bIdx, addd = 0, idx;
    string a, b, ans = "", tmp = "";
    cin >> a >> b;
    aIdx = a.length() - 1;
    bIdx = b.length() - 1;
    if(aIdx > bIdx){
        for(int i=0;i<aIdx-bIdx;i++)    tmp += '0';
        b = tmp + b;
    }
    else{
        for(int i=0;i<bIdx-aIdx;i++)    tmp += '0';
        a = tmp + a;
    }
    
    idx = a.length() - 1;
    
    while(idx >= 0){
        if(addd + ((int)a[idx] - '0') + ((int)b[idx] - '0') >= 10){
            ans += to_string(((int)a[idx] - '0' + (int)b[idx] - '0' + addd) % 10);
            addd = (((int)a[idx] - '0') + ((int)b[idx] - '0') + addd) / 10;
        }
        else{
            ans += to_string(((int)a[idx] - '0' + (int)b[idx] - '0' + addd) % 10);
            addd = 0;
        }
        idx--;
    }
    if(addd > 0)    ans += to_string(addd);

    for(int i=ans.length()-1;i>=0;i--)   cout << ans[i];
    cout << '\n';

    return 0;
}