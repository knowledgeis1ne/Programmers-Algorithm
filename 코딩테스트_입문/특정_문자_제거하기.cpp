// ���ڿ� my_string�� ���� letter�� �Ű������� �־����ϴ�. my_string���� letter�� ������ ���ڿ��� return�ϵ��� solution �Լ��� �ϼ����ּ���.

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