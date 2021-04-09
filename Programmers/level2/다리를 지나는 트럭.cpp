#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int state_weight = 0;
    queue<int> truck;
    for(int i=0;i<truck_weights.size();i++){
        while(true){
            if(truck.empty()){
                truck.push(truck_weights[i]);
                state_weight = truck_weights[i];
                answer++;
                break;
            }
            else if(truck.size() == bridge_length){
                state_weight -= truck.front();
                truck.pop();
            }
            else{
                if(truck_weights[i] + state_weight > weight){
                    truck.push(0);
                    answer++;
                }
                else{
                    truck.push(truck_weights[i]);
                    state_weight += truck_weights[i];
                    answer++;
                    break;
                }
            }
        }
    }
    return answer + bridge_length;
}