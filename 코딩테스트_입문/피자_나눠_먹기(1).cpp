// �Ӿ��̳� ���ڰ��Դ� ���ڸ� �ϰ� �������� �߶� �ݴϴ�. ���ڸ� �������� ����� �� n�� �־��� ��, ��� ����� ���ڸ� �� ���� �̻� �Ա� ���� �ʿ��� ������ ���� return �ϴ� solution �Լ��� �ϼ��غ�����.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    if (n % 7 == 0) {
        answer = n / 7;
    }
    else {
        answer = n / 7 + 1;
    }

    return answer;
}