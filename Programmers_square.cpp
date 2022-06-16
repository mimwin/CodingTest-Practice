#include <iostream>
using namespace std;

long long solution(int w, int h) {
    long long answer = 1;
    long long t = (long long)w*(long long)h;
    
    int gcd,a,b;
    if(w>h){
        a=w; b=h;
    }else {
        a=h;b=w;
    }
       while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    answer = t - (w + h - a);

    return answer;
}