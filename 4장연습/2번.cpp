#include <iostream>
#include <string>

using namespace std;

int main() {
	int* arr = new int[5]; // arr 변수명에 5개의 공간을 할당
	float average = 0.0; // 평균값 초기화

	cout << "정수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i]; // 0,1,2,3 까지 공간을 입력
		average += arr[i]; // 입력한 값을 평균에 더해줌
	}

	average /= 5; // 평균구하기
	cout << "평균 " << average << endl; // 평균 출력

	return 0;
}