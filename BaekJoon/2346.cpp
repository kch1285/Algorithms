#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, paper, idx = 0, nextPaper;
    cin >> n;
    vector<pair<int, int> > balloon;
    vector<int> answer;

    for(int i=0;i<n;i++){
        cin >> paper;
        balloon.push_back(make_pair(i+1, paper));
    }

    while(!balloon.empty()){
        answer.push_back(balloon.front().first);
        nextPaper = balloon.front().second;
        balloon.erase(balloon.begin());
        
        if(nextPaper >= 0){
            for(int i=0;i<nextPaper-1;i++){
                balloon.push_back(balloon.front());
                balloon.erase(balloon.begin());
            }
        }
        else{
            for(int i=0;i<abs(nextPaper);i++){
                balloon.insert(balloon.begin(), balloon.back());
                balloon.erase(balloon.end()-1);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << answer[i] << ' ';
    }
    cout << '\n';
    return 0;
}