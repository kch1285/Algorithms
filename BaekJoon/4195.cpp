#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector <string> relation;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string a, b;
    int testcase, f;
    cin >> testcase;
    for(int i=0;i<testcase;i++){
        cin >> f;
        for(int j=0;j<f;j++){
            cin >> a >> b;
            if(relation.size() == 0){
                relation[0].push_back(a);
                relation[0].push_back(b);
            }
            else{
                for(int k=0;k<relation.size();k++){
                    for(int l=0;l)
                    if(strcmp(a,relation[k].))
                }
            }
        }
    }
}