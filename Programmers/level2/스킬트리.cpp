#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    bool flag = false;
    for(int i=0;i<skill_trees.size();i++){
        flag = false;
        string tmp = skill_trees[i];
        int tree_index = 0;
        int skill_index = 0;
        while(tree_index < skill_trees[i].length()){
            if(tmp[tree_index] == skill[skill_index]){
                skill_index++;
                //if(skill_index == skill.length())   break;
            }
            else{
                for(int j=skill_index + 1;j<skill.length();j++){
                    if(skill[j] == tmp[tree_index]){
                        flag = true;
                        break;
                    }
                }
            }
            tree_index++;
        }
        cout << "flag : " << flag << '\n';
        if(flag)    continue;
        answer++;
        // if(skill_index == skill.length()){
        //     answer++;
        //     cout << tmp << '\n';
        // }
        cout << "tmp : " << tmp << '\n';
        cout << "answer : " << answer << '\n';
    }
    return answer;
}