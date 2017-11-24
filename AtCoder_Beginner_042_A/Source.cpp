/*
問題文
日本の誇る美しいリズムとして、五七五というものがあります。いろはちゃんは五七五が大好きです。
3 つの文節の並びの長さがそれぞれ 5,7,5 となるようにこの順番で並んでいるとき、その 3 つの文節の並びは五七五であると言います。
並び替えたい 3 つの文節の長さを表す整数 A,B,C が与えられるので、それらの文節を並び替えて五七五にできるか判定してください。
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