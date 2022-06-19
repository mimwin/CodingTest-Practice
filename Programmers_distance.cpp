#include <string>
#include <vector>
using namespace std;


int dir[4][2] = { {1,0},{0,-1},{-1,0},{0,1} };
int dir2[4][2] = { {2,0},{0,2},{0,-2},{-2,0} };
int dir3[4][2] = { {1,1},{1,-1},{-1,-1},{-1,1} };
string seat[5][5];

bool check(int j, int z) {
    for (int i = 0; i < 4; i++) {
        int nj = j + dir[i][0];
        int nz = z + dir[i][1];

        int nj2 = j + dir2[i][0];
        int nz2 = z + dir2[i][1];

        int nj3 = j + dir3[i][0];
        int nz3 = z + dir3[i][1];

        if(nj>=0 && nz>=0 && nj<=4 && nz<=4){
            if (seat[nj][nz] == "P") return false;
        }

        if (nj2 >= 0 && nz2 >= 0 && nj2 <= 4 && nz2 <= 4) {
            if (seat[nj2][nz2] == "P") 
                switch (i) {
                case 0: if (seat[nj2 - 1][nz2] != "X")return false; break;
                case 1: if (seat[nj2][nz2 - 1] != "X") return false; break;
                case 2: if (seat[nj2][nz2 + 1] != "X") return false; break;
                case 3: if (seat[nj2 + 1][nz2] != "X") return false;
                }
            
        }
      
        if (nj3 >= 0 && nz3 >= 0 && nj3 <= 4 && nz3 <= 4) {

            if (seat[nj3][nz3] == "P") 
                switch (i) {
                case 0: if (seat[nj3 - 1][nz3] != "X" || seat[nj3][nz3 - 1] != "X")return false; break;
                case 1: if (seat[nj3 - 1][nz3] != "X" || seat[nj3][nz3 + 1] != "X") return false; break;
                case 2: if (seat[nj3 + 1][nz3] != "X" || seat[nj3][nz3 + 1] != "X") return false; break;
                case 3: if (seat[nj3 + 1][nz3] != "X" || seat[nj3][nz3 - 1] != "X") return false; break;
                }
            
        }
    }
    return true;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;

    for (int i = 0; i < 5; i++) {
        bool flag = false;

        for (int j = 0; j < 5; j++) {
            string s = places[i][j];
            for (int z = 0; z < 5; z++) {
                seat[j][z] = s[z];
            }
        }
        
        for (int j = 0; j < 5; j++) {
            for (int z = 0; z < 5; z++) {
                if (seat[j][z] == "P") {
                    if (!check(j, z)) {
                        answer.push_back(0);
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)break;
       }
        if (!flag)answer.push_back(1);
    }
    return answer;
}