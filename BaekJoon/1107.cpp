#include <iostream>

using namespace std;


int error[10];

int main(){
    bool check = false;
    int n, m, cnt = 0, tmp, n_len = 1;
    cin >> n;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> error[i];
    }
    tmp = n;
    while(tmp > 10){
        tmp = tmp/10;
        n_len++;
    }
    
    for(int i=0;i<m;i++){
        if(tmp == error[i]) check = true;
    }
    if(check = false){
        
    }
}