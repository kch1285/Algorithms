#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool check[51] = {false, };
int answer = 0;

bool check_one_word(string a, string b){
    int diff = 0;
    for(int i=0;i<a.length();i++){
        if(a[i] != b[i])    diff++;
    }
    if(diff == 1)   return true;
    return false;
}

void dfs(string begin, string target, vector<string> words, int cnt){
    if(target == begin){
        answer = min(cnt, answer);
        return;
    }
    for(int i=0;i<words.size();i++){
        if(check_one_word(begin, words[i])){
            if(!check[i]){
                check[i] = true;
                answer++;
                dfs(words[i], target, words, cnt+1);
                check[i] = false;
            }
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    
    auto it = find(words.begin(), words.end(), target);
    if(it == words.end())   return 0;
    dfs(begin, target, words, 0);
    
    return answer;
}