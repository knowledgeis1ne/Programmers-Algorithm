// ���� num1, num2�� �Ű������� �־��� ��,
// num1�� num2�� ���� �������� return �ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = -1;
    answer = num1 % num2;
    return answer;
}