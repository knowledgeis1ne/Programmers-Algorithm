// ������ 0�� �ʰ� 90�� �̸��� ����, 90���� ����, 90�� �ʰ� 180�� �̸��� �а� 180���� ������ �з��մϴ�. �� angle�� �Ű������� �־��� �� ������ �� 1, ������ �� 2, �а��� �� 3, ���� �� 4�� return�ϵ��� solution �Լ��� �ϼ����ּ���.

#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    if (0 < angle && angle < 90) answer = 1;
    else if (angle == 90) answer = 2;
    else if (90 < angle && angle < 180) answer = 3;
    else if (angle == 180) answer = 4;
    return answer;
}