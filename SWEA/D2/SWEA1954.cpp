#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int num = 1;
        int xpos = 0, ypos = 0;
        cin >> N;
        vector< vector<int> > arr(N, vector<int> (N, 0));

        while(num <= N * N){
            while(xpos < N && ypos < N){
                if(arr[xpos][ypos] != 0)	break;
                arr[xpos][ypos] = num++;
                ypos++;
            }
            ypos--;
            xpos++;
            
            while(xpos < N && ypos < N){
                if(arr[xpos][ypos] != 0)	break;
                arr[xpos][ypos] = num++;
                xpos++;
            }
            xpos--;
            ypos--;
            while(xpos < N && ypos < N && ypos >= 0 && xpos >= 0){
                if(arr[xpos][ypos] != 0)	break;
                arr[xpos][ypos] = num++;
                ypos--;
            }
            ypos++;
            xpos--;
            while(xpos < N && ypos < N && ypos >= 0 && xpos >= 0){
                if(arr[xpos][ypos] != 0)	break;
                arr[xpos][ypos] = num++;
                xpos--;
            }
            xpos++;
            ypos++;
        }
        cout << "#" << test_case << '\n';
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
	}
	return 0;
}