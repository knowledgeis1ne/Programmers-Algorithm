// ���� num1�� num2�� �Ű������� �־��� ��, num1�� num2�� ���� ���� 1,000�� ���� �� ���� �κ��� return �ϵ��� soltuion �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = (int)(((float)num1 / (float)num2) * 1000);
    return answer;
}