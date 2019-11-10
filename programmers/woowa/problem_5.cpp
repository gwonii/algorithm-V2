// 간단한 3 6 9 게임 
// ex) 입력값이 13이라면, 3 6 9 13 총 4번의 박수 
// 그렇다면 결과값은 4
// 메소드를 나눌 수 있다면, 
// 1. 해당 값이 박수가 몇 번인지 확인하는 메소드 
// 2. 

#include <iostream>
#include <vector>

using namespace std;

bool checker(int num) {

    if (num == 3 || num == 6 || num == 9) {
        return true;
    } else {
        return false;
    }

}

int clap(int num) { \

    // 해당 숫자의 박수 횟수 
    // 1 ~ 9 , 10 ~ 99 , 100 ~ 999
    // 각 자릿수 나눠서 

    int count = 0;
    int temp = 0;

    while( num != 0) {
        temp = num % 10;
        
        if (checker(temp)) {
            count++;
        } 
        
        num = num / 10;
    }

    return count;
}

int main() {

    
    int input = 33;
    int totalClap = 0;

    for (int i = 1; i <= input; i++) {

        totalClap += clap(i);    // 박수 횟수
    }

    cout << totalClap;

    return 0;
}