
    // 단위당 가격 만들고 
    // 
//     레시피: 돼지 족 4kg, 양파 50g, 대파 10cm, 마늘 10g, 고추 4g
//  상품 가격: 돼지 족(10kg당) 10000원, 양파(100g) 3000원, 대파(30cm) 1000원, 마늘(50g) 2000원, 고추(10g) 1000원
// 현재 냉장고 상태: 돼지 족 5kg, 양파 100g, 대파 10cm, 마늘 5g, 고추 2g

    //1인분, 2인분, 1.5분
//     준은 1, 2인분을 먹을 수 있으며, 굶지 않습니다.
// 준의 애인은 0, 0.5인분을 먹을 수 있습니다.

// 준의 애인은 매운 음식을 잘 먹지 못하기 때문에, 애인이 먹을 경우 고추를 절반만 넣습니다.
// 0.5 분인 경우 고추는 절반인 2g만 (조건)

// 상품은 제시된 단위별로만 구매 가능합니다.


    // 1개 만들 때 
    //  돼지 족 4kg, 양파 50g, 대파 10cm, 마늘 10g, 고추 4g
    // 현재 있는것
    // 돼지 족 5kg, 양파 100g, 대파 10cm, 마늘 5g, 고추 2g


#include <iostream>
#include <vector>
#include <cmath>

#define PORK 0
#define YANG 1
#define DAE 2
#define MA 3
#define GO 4
#define TOTALSIZE 5

using namespace std;

vector<int> myList;     // 내가 갖고 있는 음식양
vector<int> needList;   // 요리를 위해 필요한 음식양
vector<int> priceList;
vector<int> resultList; // 총 구매해야 하는 음식양

void setting() {

    myList.resize(5,0);       
    needList.resize(5,0);
    priceList.resize(5,0);
    resultList.resize(5,0);

    myList[PORK] = 5;
    myList[YANG] = 100;
    myList[DAE] = 10;
    myList[MA] = 5;
    myList[GO] = 2;

    needList[PORK] = 4;
    needList[YANG] = 50;
    needList[DAE] = 10;
    needList[MA] = 10;
    needList[GO] = 4;

    priceList[PORK] = 10000;
    priceList[YANG] = 3000;
    priceList[DAE] = 1000;
    priceList[MA] = 2000;
    priceList[GO] = 1000;
}

void reset() {
    resultList.clear();
}

int calculate(string portions) {
    reset();

    double input = atof(portions.c_str());
    
    cout << input;
    
}

int main() {

    vector<string> history;

    history.push_back("1.0");
    history.push_back("1.5");
    
    setting();

    int solution = 0;

    double input = atof("1.0");
    
    for (int i = 0; i < TOTALSIZE; i++) {
        if (myList[i] < int(needList[i] * input)) {
            resultList[i]++;
        }
    }

    for(int i = 0; i < TOTALSIZE; i++) {
        if (resultList[i] == 1){
            solution += priceList[i];
        }
    }

    cout << solution;    

    solution = calculate("1.5");

}