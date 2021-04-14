#include <iostream>
#include <map>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t, k, num;
    char oper;

    cin >> t;
    for(int i=0;i<t;i++){
        cin >> k;
        map<int, int> q;

        for(int j=0;j<k;j++){
            cin >> oper >> num;

            if(oper == 'I'){
                if(q.find(num) != q.end())  q[num]++;
                else    q[num] = 0;
            }
            else if(oper == 'D'){
                if(q.empty())   continue;
                if(num == 1){
                    auto it = prev(q.end());
                    if(it->second > 0)  it->second--;
                    else    q.erase(it);
                }
                else if(num == -1){
                    auto it = q.begin();
                    if(it->second > 0)  it->second--;
                    else    q.erase(it);
                }
            }
        }

        if(q.empty())   cout << "EMPTY" << '\n';
        else    cout << prev(q.end())->first << ' ' << q.begin()->first << '\n';
    }
    return 0;
}