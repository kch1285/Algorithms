#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>

using namespace std;

vector <string> tmp;
string arr[10];
string temp;
int n, k, indexx = 0;
bool visit[8];

void dfs(int start){
    for(int i=0;i<n;i++){
        if(!visit[i]){
            visit[i] = true;
            for(int j=0;arr[i][j]!='\0';j++){
                tmp[indexx].push_back(arr[i][j]);
            }
            indexx++;
            dfs(i+1);
            visit[i] = false;
        }
    }
}

int main(){
    string input;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        
    }
    //cin >> k;

    for(int i=0;i<n;i++){
        cout << arr[i] << '\n';
    }
    for(int i=0;i<n;i++){
        dfs(i);
    }
    cout << tmp.size() << '\n';
    for(int i=0;i<tmp.size();i++){
        cout << i << tmp[i] << '\n';
    }
    return 0;
}