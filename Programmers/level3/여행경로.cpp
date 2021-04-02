#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;


vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    map<string, vector<string> > path;
    string airport = "ICN";
    vector<string> tmp = {airport};
    
    //sort(tickets.begin(), tickets.end());
    sort(tickets.begin(), tickets.end(), greater< vector<string> >());
    for(int i=0;i<tickets.size();i++){
        path[tickets[i][0]].push_back(tickets[i][1]);
    }
    
    while(!tmp.empty()){
        airport = tmp.back();
        auto it = path.find(airport);
        if(it == path.end() || path[airport].size() == 0){
            answer.push_back(airport);
            tmp.pop_back();
        }
        else{
            tmp.push_back(path[airport].back());
            path[airport].pop_back();
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
}