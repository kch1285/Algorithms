#include <iostream>
#include <cstring>

using namespace std;

int pi[1000001];

int main(){
    cin.tie(NULL);
    
    int len;
    while(1){
        string s;
        cin >> s;
        if(s==".")    break;

        len = s.size();
        memset(pi, 0, sizeof(pi));
        for(int i=1, j=0;i<len;i++){
            while(j > 0 && s[i]!=s[j])  j = pi[j-1];
            if(s[i]==s[j])  pi[i] = ++j;
        }
        if(len%(len-pi[len-1]) == 1)    cout << "1\n";
        else cout << len / (len - pi[len-1]) << '\n';
    }
    return 0;
}