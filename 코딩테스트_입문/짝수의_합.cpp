// ���� n�� �־��� ��, n������ ¦���� ��� ���� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 0; i < (n / 2); i++) {
        answer += (i + 1) * 2;
    }

    return answer;
}