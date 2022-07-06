#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int cnt = 0; 
    for(int i=left;i<=right;i++){
        cnt = 0;
        for(int j=1;j<=i/2;j++){
            if(!(i%j))cnt++;
        }
        if(cnt%2)answer+=i;
        else answer-=i;
    }
    return answer;
}