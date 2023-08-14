// 문자열 my_string과 문자 letter이 매개변수로 주어집니다. my_string에서 letter를 제거한 문자열을 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] == letter[0])
            continue;
        else
            answer.push_back(my_string[i]);
    }

    return answer;
}