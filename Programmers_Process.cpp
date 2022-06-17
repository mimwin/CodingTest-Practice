//1:13
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> end;
    int ans = 0;
    
    for(int i=0;i<progresses.size();i++){
        int n = (100-progresses.at(i))%speeds.at(i);
        int m = (100-progresses.at(i))/speeds.at(i);
        if(n){
            ans = m+1;        
        }else ans = m;
        end.push_back(ans);
    }
    ans = 1;
    int max = end.at(0);
    for(int i=1;i<end.size();i++){
        if(max<end.at(i)){
            max = end.at(i);
            answer.push_back(ans);
            ans = 1;
        }else ans++;
    }
    answer.push_back(ans);
    return answer;
}