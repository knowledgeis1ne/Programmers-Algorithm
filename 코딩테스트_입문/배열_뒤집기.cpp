// ������ ��� �ִ� �迭 num_list�� �Ű������� �־����ϴ�. num_list�� ������ ������ �Ųٷ� ������ �迭�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

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