#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> answer(25);


   for (int i = 11; i < size(logs);i = i+20) {
      int hour = (logs[i]-'0') * 10 + (logs[i + 1] - '0') + 9;
      answer[hour]++;
   }


   vector<int> solution(string logs) {
   vector<int> answer(25);


   for (int i = 11; i < size(logs); i = i + 20) {
      int hour = (logs[i] - '0') * 10 + (logs[i + 1] - '0') + 9;
      answer[hour]++;
   }

   return answer;
}
    
}