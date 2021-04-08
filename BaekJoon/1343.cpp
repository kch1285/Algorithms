#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string input, answer = "";
    string a = "AAAA", b = "BB";
    int idx = 0;
    cin >> input;

    while(idx < input.length()){
        if(input[idx] == 'X'){
            int cnt = 0;
            while(input[idx] == 'X'){
                idx++;
                cnt++;
            }

            if(cnt % 2 != 0){
                cout << "-1" << '\n';
                return 0;
            }

            while(cnt >= 4){
                answer += a;
                cnt -= 4;
            }

            while(cnt >= 2){
                answer += b;
                cnt -= 2;
            }
        }
        else{
            answer += '.';
            idx++;
        }
    }

    cout << answer << '\n';
    return 0;
}