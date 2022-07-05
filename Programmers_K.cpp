#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer(commands.size());
    int count=0,arr[101];
    while(count<commands.size()){
        int first = commands[count][0];
        int second = commands[count][1];
        int c=first-1;
        for(int i=0;i<(second-first+1);i++){arr[i]=array.at(c+i);}
        sort(arr,arr+(second-first+1));
        answer[count]=arr[(commands[count][2]-1)];
        count++;
    }
    return answer;
}