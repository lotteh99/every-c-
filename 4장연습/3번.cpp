#include<iostream>
using namespace std;

int main()
{
	char str[100]{0}; // ������ str ������ 100���� ���� 0���� �ʱ�ȭ

	int cnt = 0;// a�� ����

	cin.getline(str, 100); // ������ ������ ���� �Է�

	//strlen : string.length() ����
	//str�� �������̱� ������ strlen �Լ��� ���ڿ��� ������ȯ
	//���ڿ� str�� int������ ���� ��ȯ
	for (int i = 0; i < (int)strlen(str); i++) // 0���� str�� �Է°� ���� ����
	{
		if (str[i] == 'a') // �Է��� ���ڿ��� ���� �� a�� ���� ��
			cnt++; // a�� ã���� ���ڸ� �ø���
	}
	cout << "���� a��" << cnt << "�� �ֽ��ϴ�";
}