#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 100;

using namespace std;


bool desc(int a, int b) {
    return a > b;
}

int calculate(int price, int discount) {

    int discountPrice = 0;
    int percent = 100 - discount;

    

    discountPrice = price * ((double)percent / 100);

    cout << discountPrice << "\n";
    
    return discountPrice;

}

int main() {
    
    int price1 = 13000;
    int price2 = 88000;
    int price3 = 10000;

    int discount1 = 30;
    int discount2 = 20;


    vector<int> price;
    vector<int> discount;

    price.push_back(price1);
    price.push_back(price2);
    price.push_back(price3);

    discount.push_back(discount1);
    discount.push_back(discount2);

    sort(price.begin(), price.end(), desc);
    sort(discount.begin(), discount.end(), desc);


    int count = price.size();
    int solution = 0;
    int temp;

        if (price.size() > discount.size()) {
            
            for (int i = 0; i < discount.size(); i++) {
            
                temp = calculate(price[i], discount[i]);
                solution += temp;

            
            }

            for (int i = discount.size(); i < price.size(); i++) {
                solution += price[i];

            }

        } else {
            
            for (int i = 0; i < price.size(); i++) {
                solution += calculate(price[i], discount[i]);
            }
        }
    

    cout << solution << "\n";
    
    return 0;
}