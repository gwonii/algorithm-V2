// 책을 놓고 게임 시작

// 왼쪽 페이지 각 자리수 더하거나 곱하기 
// 오른쪽 페이지 각 자리수 더하거나 곱하기 
// 그 값 중 가장 큰 값이 자신의 점수로 갖는다. 



#include <iostream>
#include <vector>

using namespace std;

int calculate(int input) { 
    
    
    // 한 쪽면의 페이지 값을 받고 
    // 각 자릿수의 합과 곱을 한 후 큰 값을 리턴한다. 

    vector<int> value;
    int temp;

    int plus = 0;
    int multi = 1;

    while(input != 0) {
        
        temp = input % 10;
        
        value.push_back(temp);

        input = input / 10;
    }    
    

    for(int i = 0; i < value.size(); i++) {
        plus += value[i];
        multi *= value[i];
    }

    if (plus >= multi) {
        return plus;
    } else {
        return multi;
    }
    

}

int main() {

    vector<int> fobi;
    vector<int> crong;

    int fobiLeft;
    int fobiRight;
    int crongLeft;
    int crongRight;

    int fobiValue;
    int crongValue;


    fobi.push_back(131);
    fobi.push_back(132);
    
    crong.push_back(211);
    crong.push_back(212);

    fobiLeft = calculate(fobi[0]);
    fobiRight = calculate(fobi[1]);

    if (fobiLeft >= fobiRight) {
        fobiValue = fobiLeft;
    } else {
        fobiValue = fobiRight;
    }


    crongLeft = calculate(crong[0]);
    crongRight = calculate(crong[1]);

    if (crongLeft >= crongRight) {
        crongValue = crongLeft;
    } else {
        crongValue = crongRight;
    }

    // cout << fobiValue << "\n" << crongValue;
    
    if (fobiValue > crongValue) {
        cout << 1;
    } else if (fobiValue < crongValue) {
        cout << -1;
    } else {
        cout << 0;
    }

    return 0;

}