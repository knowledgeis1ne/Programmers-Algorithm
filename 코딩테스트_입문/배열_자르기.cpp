// ���� �迭 numbers�� ���� num1, num2�� �Ű������� �־��� ��, numbers�� num1�� ° �ε������� num2��° �ε������� �ڸ� ���� �迭�� return �ϵ��� solution �Լ��� �ϼ��غ�����.

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++) {
        if (i < num1) continue;
        else if (i >= num1 && i <= num2)
            answer.push_back(numbers[i]);
        else if (i > num2) continue;
    }

    return answer;
}