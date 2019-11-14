#include <string>
#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

vector<bool> solution(vector<string> infos, vector<string> actions) {
    vector<bool> answer;
    
   int loginFlag = 0;
   int addFlag = 0;

   for (int action = 0; action < actions.size(); action++) {
      int firstTok = 0;
      int secondTok = 0;
      int thirdTok = 0;

      for (int checker = 0; checker < actions[action].size(); checker++) {
         if (actions[action][checker] == ' ') {
   
            if (secondTok == 0) {
               secondTok = checker;
            }
            else {
               thirdTok = checker;
            }
         }
      }

      string firstWord = actions[action].substr(firstTok, secondTok);
      string secondWord;
      string thirdWord;

      if (secondTok == 0) {
         firstWord = actions[action];
      }
      else if (thirdTok == 0) {
         firstWord = actions[action].substr(firstTok, secondTok);
         secondWord = actions[action].substr(secondTok + 1);
      }
      else {
         firstWord = actions[action].substr(firstTok, secondTok);
         secondWord = actions[action].substr(secondTok+1, thirdTok-secondTok-1);
         thirdWord = actions[action].substr(thirdTok+1);
      }

      
      if (firstWord.compare("LOGIN")==0) {

         if (loginFlag == 1) {
            answer.push_back(false);
            
         }
         else {
            for (int info = 0; info < infos.size(); info++) {
               string id;
               string psswd;
               int first_t = 0;
               int second_t = 0;


               for (int checker = 0; checker < infos[info].size(); checker++) {

                  if (infos[info][checker] == ' ') {
                     second_t = checker;
                  }

               }

               id = infos[info].substr(first_t, second_t);
               psswd = infos[info].substr(second_t + 1);

               if (id.compare(secondWord) == 0 && psswd.compare(thirdWord) == 0) {
                  loginFlag = 1;
                  answer.push_back(true);

                  
               }
            }
            if (loginFlag == 0) {
               answer.push_back(false);
               
            }
         }
      }
      else if (firstWord.compare("ADD")==0) {
         if (loginFlag == 1) {
            answer.push_back(true);
            addFlag = 1;
         }
         else {
            answer.push_back(false);
         }
         
      }
      else if (firstWord.compare("ORDER")==0) {
         if (addFlag == 1) {
            answer.push_back(true);
            addFlag = 0;
         }
         else {
            answer.push_back(false);
         }
      }
     
   }
    
    return answer;
}