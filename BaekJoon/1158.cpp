#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k, idx = 0;
    cin >> n >> k;
    vector<int> people;
    vector<int> answer;

    for(int i=1;i<=n;i++)   people.push_back(i);

    while(answer.size() < n){
        idx += k - 1;
        if(idx >= people.size())    idx %= people.size();
        answer.push_back(people[idx]);
        people.erase(people.begin() + idx);
    }

    cout << "<";
    for(int i=0;i<answer.size();i++){
        if(i == answer.size() - 1)  cout << answer[i] << ">" << '\n';
        else    cout << answer[i] << ", ";
    }
    return 0;

}