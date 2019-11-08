#include <iostream>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;


    // 총 n개라고 했을 때 
    for (int i = 0; i < phone_book.size(); i++) {
        for(int j = i + 1; j < phone_book.size(); j++) {
            
            if (phone_book[i].size() > phone_book[j].size() ) {
                if (phone_book[i].substr(0, phone_book[j].size()) == phone_book[j]) {
                    answer = false;
                    break;
                }
            } else if (phone_book[i].size() < phone_book[j].size()) {
                if (phone_book[i] == phone_book[j].substr(0, phone_book[i].size())) {
                    answer = false;
                    break;
                }
            } else {
                 if (phone_book[i] == phone_book[j]) {
                    answer = false;
                    break;
                }
            }
        }   

        if (answer == false) {
            break;
        }
    }

    return answer;
}

int main() {

    vector<string> phone_book;
    phone_book.push_back("119");
    phone_book.push_back("11928374");
    phone_book.push_back("4423");

    solution(phone_book);
    
    return 0;
}

// 각각의 전화번호 전체 비교하기 
// 전화번호가 n개라고 했을 때 