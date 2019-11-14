// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long changeMethod(string ret) {

    long long result = 0;


    // 그리고 각 인덱스별로 0확인하기
    // 0이라면 1로 변환하기 
    for (int i = 0; i < ret.length(); i++) {
        if (ret[i] == '0') {
            ret[i] = '1';
        }
    }

    // 다시 string -> long long 으로 변환하기
    result = stoll(ret);

    // 변환된 값 리턴하기
    return result;
}


long long solution(long long num) {
    // Write code here.
    num++;
    long long answer = 0;
    // num string으로 바꾸기 

    string ret = to_string(num);
    
    answer = changeMethod(ret);

    return answer;
}

// The following is main function to output testcase.
int main() {
    long long num = 9949999;
    long long ret = solution(num);

    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}