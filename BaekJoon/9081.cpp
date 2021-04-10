#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    bool flag = false, lasgFlag = false;
    int t;
    string input;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> input;
        string tmp = "";
        vector<char> v;
        flag = false;
        lasgFlag = false;
        for(int j=0;j<input.length();j++){
            v.push_back(input[j]);
        }
        do{
            tmp = "";
            for(int j=0;j<input.length();j++){
                tmp += v[j];
            }

            if(flag){
                cout << tmp << '\n';
                lasgFlag = true;
                break;
            }

            if(tmp == input)    flag = true;
        }while(next_permutation(v.begin(), v.end()));
        if(!lasgFlag)   cout << input << '\n';
    }
    return 0;
}