/*
��蕶
���{�̌ւ���������Y���Ƃ��āA�܎��܂Ƃ������̂�����܂��B����͂����͌܎��܂���D���ł��B
3 �̕��߂̕��т̒��������ꂼ�� 5,7,5 �ƂȂ�悤�ɂ��̏��Ԃŕ���ł���Ƃ��A���� 3 �̕��߂̕��т͌܎��܂ł���ƌ����܂��B
���ёւ����� 3 �̕��߂̒�����\������ A,B,C ���^������̂ŁA�����̕��߂���ёւ��Č܎��܂ɂł��邩���肵�Ă��������B
*/

#include<iostream>
#include<array>
#include<algorithm>
const int poetry = 3;

int main() {
	std::array<int, poetry> arry;
	int five, seven;
	
	for (int i = 0; i < poetry; i++) {
		std::cin >> arry[i];
	}

	five=std::count(arry.begin(), arry.end(), 5);
	seven = std::count(arry.begin(), arry.end(), 7);

	if (2 == five && 1 == seven) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}

	return 0;

}