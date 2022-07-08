#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int zero = 0;

    for (int i = 0; i < win_nums.size(); i++) {
        if (lottos.at(i) == 0)zero++;
        for (int j = 0; j < lottos.size(); j++) 
            if (lottos[j]!=-1 && lottos[j] == win_nums[i]) {
                correct++;   lottos[j] = -1;    break;
            }
    }
    correct = 7 - correct;
    if (correct > 6) {
        if (correct - zero > 6)answer.push_back(6);
        else answer.push_back(correct - zero);
        answer.push_back(6);
    }
    else {
        answer.push_back(correct - zero);
        answer.push_back(correct);
    }
    return answer;
}