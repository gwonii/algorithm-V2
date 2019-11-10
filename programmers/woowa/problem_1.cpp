#include <iostream>
#include <vector>

// 거스름돈 문제 
// 일종의 "그리디 알고리즘"이라고 할 수 있다. 



using namespace std;

int main() {

    int quotient = 0;
    vector<int> result;
    result.resize(9,0);

    int input = 50237;
    
    while (input > 0) {
        
        if (input >= 50000) {
            quotient = input / 50000;
            result[0] = quotient;
            input = input % 50000;

        } else if (input >= 10000) {
            quotient = input / 10000;
            result[1] = quotient;
            input = input % 10000;

        } else if (input >= 5000) {
            quotient = input / 5000;
            result[2] = quotient;
            input = input % 5000;
            
        } else if (input >= 1000) {
            quotient = input / 1000;
            result[3] = quotient;
            input = input % 1000;

        } else if (input >= 500) {
            quotient = input / 500;
            result[4] = quotient;
            input = input % 500;

        } else if (input >= 100) {
            quotient = input / 100;
            result[5] = quotient;
            input = input % 100;
        } else if (input >= 50) {
            quotient = input / 50;
            result[6] = quotient;
            input = input % 50;

        } else if (input >= 10) {
            quotient = input / 10;
            result[7] = input / 10;
            input = input % 10;

        } else {
            quotient = input / 1;
            result[8] = quotient;
            input = input % 1;
        }

    }

    cout << "[" << result[0] << ", " << result[1] << ", " << result[2] << ", " << result[3] 
                << ", " << result[4] << ", " << result[5] << ", " << result[6] << ", " << result[7]
                << ", " << result[8] << "]";


    return 0;
}

