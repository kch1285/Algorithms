#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string o[4] = {"+", "-", "*", "/"};
    int n, op;
    cin >> n;
    vector<int> num(n);
    vector<string> operation;
    vector<int> result;

    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    for(int i=0;i<4;i++){
        cin >> op;
        if(op > 0){
            for(int j=0;j<op;j++){
                operation.push_back(o[i]);
            }
        }
    }

    sort(operation.begin(), operation.end());
    do{
        int tmp = num[0];
        for(int i=0;i<operation.size();i++){
            if(operation[i] == "+") tmp += num[i+1];
            else if(operation[i] == "-")    tmp -= num[i+1];
            else if(operation[i] == "*")    tmp *= num[i+1];
            else if(operation[i] == "/"){
                if(tmp < 0){
                    tmp *= -1;
                    tmp /= num[i+1];
                    tmp *= -1;
                }
                else    tmp /= num[i+1];
            }
        }
        result.push_back(tmp);
    }while(next_permutation(operation.begin(), operation.end()));
    sort(result.begin(), result.end());
    cout << result.back() << '\n' << result.front() << '\n';

}