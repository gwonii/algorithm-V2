
// 3번 문제 문자열 변경하기 


#include <iostream>
#include <vector>

using namespace std;

int main() {

	// A65  Z90  a97  z122

	string input = "I LOVE YOU";
	vector<char> result;

	//65 -> 90  = 25
	//66 -> 89  = 23
	//67 -> 88  = 21 
	//80 -> 75

	int temp;
	int value;

	for (int i = 0; i < input.length(); i++) {

		if (input[i] <= 90 && input[i] >= 65) { // 대문자일 때 
			temp = (int)input[i] - 65;

			value = 90 - temp;

			result.push_back((char)value);
		}
		else {
			result.push_back(' ');
		}

	}

	cout << result[0] << result[1]  << result[2];

	return 0;

}