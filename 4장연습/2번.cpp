#include <iostream>
#include <string>

using namespace std;

int main() {
	int* arr = new int[5]; // arr ������ 5���� ������ �Ҵ�
	float average = 0.0; // ��հ� �ʱ�ȭ

	cout << "���� 5�� �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i]; // 0,1,2,3 ���� ������ �Է�
		average += arr[i]; // �Է��� ���� ��տ� ������
	}

	average /= 5; // ��ձ��ϱ�
	cout << "��� " << average << endl; // ��� ���

	return 0;
}