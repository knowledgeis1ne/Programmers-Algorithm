// 정수가 들어 있는 배열 num_list가 매개변수로 주어집니다. num_list의 원소의 순서를 거꾸로 뒤집은 배열을 return하도록 solution 함수를 완성해주세요.

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    for (int i = 0; i < num_list.size(); i++) {
        answer.push_back(num_list.at(num_list.size() - i - 1));
    }

    return answer;
}