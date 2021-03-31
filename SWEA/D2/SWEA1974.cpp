#include<iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector< vector <int> > sudoku(9, vector<int>(9, 0));
        bool flag = false;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin >> sudoku[i][j];
            }
        }
        
        for(int i=0;i<9;i++){
            set<int> s;
            for(int j=0;j<9;j++){
                auto check = s.insert(sudoku[i][j]);
                if(!check.second){
                    flag = true;
                    break;
                }
            }
        }
        
        for(int i=0;i<9;i++){
            set<int> s;
            for(int j=0;j<9;j++){
                auto check = s.insert(sudoku[j][i]);
                if(!check.second){
                    flag = true;
                    break;
                }
            }
        }
        
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                set<int> s;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        auto check = s.insert(sudoku[i+k][j+l]);
                        if(!check.second){
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
        if(flag)	cout << "#" << test_case << ' ' << "0" << '\n';
        else	cout << "#" << test_case << ' ' << "1" << '\n';
	}
	return 0;
}