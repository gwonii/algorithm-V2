// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // Write code here.

    vector<vector<int>> board;

    // n이 입력되었을 때 소용돌이 판을 만든다. 

    board.resize(n);
    for(int i = 0; i < n; i++) {
        board[i].resize(n,0);
    }

    int limit = n;
    int move = 1; // 양의 방향
    int i = 0;
    int j = -1;
    int num = 1;

    while(1) {

        for (int k = 0; k < limit; k++) {
            j += move;
            board[i][j] = num;
            num++;
        }

        limit--;

        if (limit < 0) {
            break;
        }

        for (int k = 0; k < limit; k++) {
            i += move;
            board[i][j] = num;
            num++;
        }

        move = move * (-1);
    }
    
    int answer = 0;
    // 판에서 대각선인 1,1  2,2  3,3  4,4
    for (int i = 0; i < n; i++) {
        answer += board[i][i];
    }
    // 들의 합을 출력한다. 

    return answer;
}

// The following is main function to output testcase.
int main() {

    int n1 = 3;
    int ret1 = solution(n1);
    
    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;
    
    int n2 = 2;
    int ret2 = solution(n2);
    
    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;

    int n3 = 4;
    int ret3 = solution(n3);

    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret3 << " ." << endl;
}