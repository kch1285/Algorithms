#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) a.second < b.second;
    return a.first > b.first;
}


vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<int, string, greater<int> > all_cnt;
    map<string, vector<pair<int, int> > > music;
    
    for(int i=0;i<genres.size();i++){
        music[genres[i]].push_back(make_pair(plays[i], i));
    }

    for(auto it : music){
        int cnt = 0;
        for(auto itt : it.second){
            cnt += itt.first;
        }
        all_cnt[cnt] = it.first;
    }

    for(auto it=all_cnt.begin();it!=all_cnt.end();it++){
        string genre = it->second;
        vector<pair<int, int> > v;
        for(auto itt=music[genre].begin();itt!=music[genre].end();itt++){
            v.push_back(make_pair(itt->first, itt->second));
        }
        sort(v.begin(), v.end(), comp);
        answer.push_back(v[0].second);
        if(v.size() > 1)    answer.push_back(v[1].second);
    }
    
    return answer;
}