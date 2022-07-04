#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int flag[3] = { 0,0,0 };
    int one[5] = { 1,2,3,4,5 };
    int two[8] = { 2,1,2,3,2,4,2,5 };
    int three[10] = { 3,3,1,1,2,2,4,4,5,5 };
    int best=-1;
    for (int i = 0; i < answers.size(); i++) {
        if (one[i%5] == answers.at(i))flag[0]++;
        if (two[i%8] == answers.at(i))flag[1]++;
        if (three[i%10] == answers.at(i))flag[2]++;
    }
    best = flag[0] > flag[1] ? flag[0] > flag[2] ? flag[0] : flag[2] : flag[1] > flag[2] ? flag[1] : flag[2];
    for (int j = 0; j < 3; j++) { if (flag[j] == best)answer.push_back(j+1); }
    return answer;
}