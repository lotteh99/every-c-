#include<iostream>
using namespace std;

int main()
{
	char str[100]{0}; // 문자형 str 변수에 100공간 생성 0으로 초기화

	int cnt = 0;// a의 갯수

	cin.getline(str, 100); // 공백을 포함한 문자 입력

	//strlen : string.length() 약자
	//str은 문자형이기 때문에 strlen 함수로 문자열로 강제변환
	//문자열 str을 int형으로 강제 변환
	for (int i = 0; i < (int)strlen(str); i++) // 0부터 str의 입력값 길이 까지
	{
		if (str[i] == 'a') // 입력한 문자열의 길이 중 a가 있을 때
			cnt++; // a를 찾으면 숫자를 올린다
	}
	cout << "문자 a는" << cnt << "개 있습니다";
}