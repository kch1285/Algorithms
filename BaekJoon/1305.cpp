#include <iostream>
#include <cstring>

using namespace std;

char ad[1000002];
int pi[1000002];

int main(){
    cin.tie(NULL);
    int l;
    cin >> l;
    cin >> ad;
    for(int i=1, j=0;i<l;i++){
        while(j>0 && ad[i]!=ad[j])    j=pi[j-1];
        if(ad[i]==ad[j])    pi[i] = ++j;
    }
    cout << l - pi[l-1] << '\n';
    return 0;
}