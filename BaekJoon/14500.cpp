#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > table;


int firstTetromino(){
    int sum = 0, max_sum = 0;
    for(int i=0;i<table.size();i++){
        for(int j=0;j<=table[i].size()-4;j++){
            sum = 0;
            for(int k=0;k<4;k++){
                sum += table[i][j+k];
            }
            if(max_sum < sum)    max_sum = sum;
        }
    }

    for(int i=0;i<table[0].size();i++){
        for(int j=0;j<=table.size()-4;j++){
            sum = 0;
            for(int k=0;k<4;k++){
                sum += table[j+k][i];
            }
            if(max_sum < sum)    max_sum = sum;
        }
    }

    return max_sum;
}

int secondTetromino(){
    int sum, max_sum = 0;
    for(int i=0;i<table.size()-1;i++){
        for(int j=0;j<table[i].size()-1;j++){
            sum = table[i][j] + table[i+1][j] + table[i][j+1] + table[i+1][j+1];
            if(max_sum < sum)   max_sum = sum;
        }
    }
    return max_sum;
}

int thirdTetromino(){
    vector<vector<int> > tetro1(3, vector<int>(2, 0));
    vector<vector<int> > tetro2(3, vector<int>(2, 0));
    vector<vector<int> > tetro3(3, vector<int>(2, 0));
    vector<vector<int> > tetro4(3, vector<int>(2, 0));
    tetro1[0][0] = 1; tetro1[1][0] = 1; tetro1[2][0] = 1; tetro1[2][1] = 1;
    tetro2[0][0] = 1; tetro2[0][1] = 1; tetro2[1][0] = 1; tetro2[2][0] = 1;
    tetro3[0][1] = 1; tetro3[1][1] = 1; tetro3[2][0] = 1; tetro3[2][1] = 1;
    tetro4[0][0] = 1; tetro4[0][1] = 1; tetro4[1][1] = 1; tetro4[2][1] = 1;

    vector<vector<int> > tetro5(2, vector<int>(3, 0));
    vector<vector<int> > tetro6(2, vector<int>(3, 0));
    vector<vector<int> > tetro7(2, vector<int>(3, 0));
    vector<vector<int> > tetro8(2, vector<int>(3, 0));
    tetro5[0][0] = 1; tetro5[0][1] = 1; tetro5[0][2] = 1; tetro5[1][2] = 1;
    tetro6[0][0] = 1; tetro6[1][0] = 1; tetro6[0][1] = 1; tetro6[0][2] = 1;
    tetro7[1][0] = 1; tetro7[1][1] = 1; tetro7[0][2] = 1; tetro7[1][2] = 1;
    tetro8[0][0] = 1; tetro8[1][0] = 1; tetro8[1][1] = 1; tetro8[1][2] = 1;

    int sum, max_sum = 0;

    for(int i=0;i<=table.size()-3;i++){
        for(int j=0;j<table[i].size()-1;j++){
            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro1[k][l];
                }
            }
            
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro2[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro3[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro4[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;
        }
    }


    for(int i=0;i<table.size()-1;i++){
        for(int j=0;j<=table[i].size()-3;j++){
            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro5[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro6[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro7[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro8[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;
        }
    }
    return max_sum;
}

int fourthTetromino(){
    int sum, max_sum = 0;
    vector<vector<int> > tetro1(3, vector<int>(2, 0));
    vector<vector<int> > tetro2(3, vector<int>(2, 0));
    vector<vector<int> > tetro3(2, vector<int>(3, 0));
    vector<vector<int> > tetro4(2, vector<int>(3, 0));

    tetro1[0][0] = 1; tetro1[1][0] = 1; tetro1[1][1] = 1; tetro1[2][1] = 1;
    tetro2[0][1] = 1; tetro2[1][0] = 1; tetro2[1][1] = 1; tetro2[2][0] = 1;
    tetro3[0][0] = 1; tetro3[0][1] = 1; tetro3[1][1] = 1; tetro3[1][2] = 1;
    tetro4[1][0] = 1; tetro4[0][1] = 1; tetro4[1][1] = 1; tetro4[0][2] = 1;

    for(int i=0;i<=table.size()-3;i++){
        for(int j=0;j<table[i].size()-1;j++){
            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro1[k][l];
                }
            }
            
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro2[k][l];
                }
            }
            
            if(max_sum < sum)   max_sum = sum;
        }
    }

    for(int i=0;i<table.size()-1;i++){
        for(int j=0;j<=table[i].size()-3;j++){
            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro3[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro4[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;
        }
    }

    return max_sum;
}

int fifthTetromino(){
    int sum, max_sum = 0;
    vector<vector<int> > tetro1(3, vector<int>(2, 0));
    vector<vector<int> > tetro2(3, vector<int>(2, 0));
    vector<vector<int> > tetro3(2, vector<int>(3, 0));
    vector<vector<int> > tetro4(2, vector<int>(3, 0));

    tetro1[0][0] = 1; tetro1[1][0] = 1; tetro1[2][0] = 1; tetro1[1][1] = 1;
    tetro2[0][1] = 1; tetro2[1][1] = 1; tetro2[2][1] = 1; tetro2[1][0] = 1;
    tetro3[0][0] = 1; tetro3[0][1] = 1; tetro3[0][2] = 1; tetro3[1][1] = 1;
    tetro4[1][0] = 1; tetro4[1][1] = 1; tetro4[1][2] = 1; tetro4[0][1] = 1;

    for(int i=0;i<=table.size()-3;i++){
        for(int j=0;j<table[i].size()-1;j++){
            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro1[k][l];
                }
            }
            
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<3;k++){
                for(int l=0;l<2;l++){
                    sum += table[i+k][j+l] * tetro2[k][l];
                }
            }
            
            if(max_sum < sum)   max_sum = sum;
        }
    }

    for(int i=0;i<table.size()-1;i++){
        for(int j=0;j<=table[i].size()-3;j++){
            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro3[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;

            sum = 0;
            for(int k=0;k<2;k++){
                for(int l=0;l<3;l++){
                    sum += table[i+k][j+l] * tetro4[k][l];
                }
            }
            if(max_sum < sum)   max_sum = sum;
        }
    }
    return max_sum;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m, 0);
    vector<int> answer;
    for(int i=0;i<n;i++)    table.push_back(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> table[i][j];
        }
    }
    answer.push_back(firstTetromino());
    answer.push_back(secondTetromino());
    answer.push_back(thirdTetromino());
    answer.push_back(fourthTetromino());
    answer.push_back(fifthTetromino());

    sort(answer.begin(), answer.end(), greater<int>());

    cout << answer[0] << '\n';
    return 0;
}