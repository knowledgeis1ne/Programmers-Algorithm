// ���� �迭 numbers�� �Ű������� �־����ϴ�. numbers�� ���� �� �� ���� ���� ���� �� �ִ� �ִ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    for (int i = 0; i < numbers.size(); i++)
        for (int j = 0; j < numbers.size(); j++) {
            if (i == j) continue;
            if (numbers[i] * numbers[j] >= answer)
                answer = numbers[i] * numbers[j];
        }


    return answer;
}