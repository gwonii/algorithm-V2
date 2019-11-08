#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (int i = 0; i < completion.size(); i++) {
        
        if(participant[i] == completion[i]) {
            continue;
        }
        else if (participant[i] != completion[i]) {
            return participant[i];
        }
    }

    answer = participant[participant.size() - 1];
    
    return answer;
}

int main() {

    vector<string> participant;
    vector<string> completion;

    participant.push_back("leo");
    participant.push_back("kiki");
    participant.push_back("eden");
    
    completion.push_back("eden");
    completion.push_back("kiki");
    

    solution(participant, completion);


    return 0;
}