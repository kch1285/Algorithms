#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
    int t, n;
    string p;
    string arr;
    bool flag = true, errorFlag = false;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> p >> n >> arr;
        deque<int> dq;
        int idx = 1;
        flag = true;
        errorFlag = false;
        for(int j=1;j<arr.length();j++){
            if(arr[j] == ','){
                dq.push_back(stoi(arr.substr(idx, j - idx)));
                idx = j+1;
            }
        }
        if(arr.length() != 2)
            dq.push_back(stoi(arr.substr(idx, arr.length() - idx-1)));
        
        for(int j=0;j<p.length();j++){
            if(p[j] == 'R'){
                flag = !flag;
            }
            else if(p[j] == 'D'){
                if(!dq.empty()){
                    if(flag){
                        dq.pop_front();
                    }
                    else{
                        dq.pop_back();
                    }
                }
                else{
                    errorFlag = true;
                    cout << "error" << '\n';
                    break;
                }
            }
        }
        if(!errorFlag && dq.empty()){
            cout << "[]" << '\n';
        }
        else if(!errorFlag && !dq.empty()){
            cout << "[";
            if(flag){
                while(!dq.empty()){
                    if(dq.size() == 1)  cout << dq.front() << ']' << '\n';
                    else    cout << dq.front() << ',';
                    dq.pop_front();
                }
            }
            else{
                while(!dq.empty()){
                    if(dq.size() == 1)  cout << dq.back() << ']' << '\n';
                    else    cout << dq.back() << ',';
                    dq.pop_back();
                }
            }
        }
    }
}