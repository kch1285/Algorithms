#include<iostream>
#include <vector>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
    bool flag = false;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        flag = false;
        cin >> n;
        vector<string> omok(n);
        for(int i=0;i<n;i++){
            cin >> omok[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(omok[i][j] == 'o'){
                    for(int k=0;k<8;k++){
                        for(int l=1;l<5;l++){
                            int nx = i + dx[k] * l;
                            int ny = j + dy[k] * l;
                            
                            if(nx < 0 || ny < 0 || nx >=n || ny >= n)	break;
                            if(omok[nx][ny] != 'o')	break;
                            if(l == 4)	flag = true;
                        }
                    }
                }
            }
        }
        if(flag)	cout <<  "#" << test_case << ' ' << "YES" << '\n';
        else	cout <<  "#" << test_case << ' ' << "NO" << '\n';
	}
	return 0;
}