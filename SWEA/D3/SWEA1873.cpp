#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, h, w, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string order;
        cin >> h >> w;
        vector<string> map(h);
        pair<int, int> pos;
        int x, y;
        
        for(int i=0;i<h;i++){
            cin >> map[i];
            for(int j=0;j<w;j++){
                if(map[i][j] == '<' || map[i][j] == '>' || map[i][j] == '^' || map[i][j] == 'v')	pos = make_pair(i, j);
            }
        }
        cin >> n;
        cin >> order;
        
        for(int i=0;i<n;i++){
            if(order[i] == 'U'){
                map[pos.first][pos.second] = '^';
                if(0 <= pos.first - 1 && map[pos.first - 1][pos.second] == '.'){
                    map[pos.first][pos.second] = '.';
                    map[pos.first - 1][pos.second] = '^';
                    pos = make_pair(pos.first - 1, pos.second);
                }
            }
            else if(order[i] == 'D'){
                map[pos.first][pos.second] = 'v';
                if(pos.first + 1 < h && map[pos.first + 1][pos.second] == '.'){
                    map[pos.first][pos.second] = '.';
                    map[pos.first + 1][pos.second] = 'v';
                    pos = make_pair(pos.first + 1, pos.second);
                }
            }
            else if(order[i] == 'R'){
                map[pos.first][pos.second] = '>';
                if(pos.second + 1 < w && map[pos.first][pos.second + 1] == '.'){
                    map[pos.first][pos.second] = '.';
                    map[pos.first][pos.second + 1] = '>';
                    pos = make_pair(pos.first, pos.second + 1);
                }
            }
            else if(order[i] == 'L'){
                map[pos.first][pos.second] = '<';
                if(0 <= pos.second - 1 && map[pos.first][pos.second - 1] == '.'){
                    map[pos.first][pos.second] = '.';
                    map[pos.first][pos.second - 1] = '<';
                    pos = make_pair(pos.first, pos.second - 1);
                }
            }
            else if(order[i] == 'S'){
                if(map[pos.first][pos.second] == 'v'){
                    x = pos.first;
                    y = pos.second;
                    while(x < h){
                        if(map[x][y] == '#')	break;
                        else if(map[x][y] == '*'){
                            map[x][y] = '.';
                            break;
                        }
                        x++;
                    }
                }
                else if(map[pos.first][pos.second] == '<'){
                    x = pos.first;
                    y = pos.second;
                    while(y >= 0){
                        if(map[x][y] == '#')	break;
                        else if(map[x][y] == '*'){
                            map[x][y] = '.';
                            break;
                        }
                        y--;
                    }
                }
                else if(map[pos.first][pos.second] == '>'){
                    x = pos.first;
                    y = pos.second;
                    while(y < w){
                        if(map[x][y] == '#')	break;
                        else if(map[x][y] == '*'){
                            map[x][y] = '.';
                            break;
                        }
                        y++;
                    }
                }
                else if(map[pos.first][pos.second] == '^'){
                    x = pos.first;
                    y = pos.second;
                    while(x >= 0){
                        if(map[x][y] == '#')	break;
                        else if(map[x][y] == '*'){
                            map[x][y] = '.';
                            break;
                        }
                        x--;
                    }
                }
            }
        }
        
        cout << "#" << test_case << ' ';
        for(int i=0;i<h;i++){
            cout << map[i] << '\n';
        }

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}