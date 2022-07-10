#include <iostream>
using namespace std;

//練習問題1. 出力結果が42になるように、参照を使ってproblem1関数を修正してくダサい
void problem1(){

	int i = 0;
	int j = i;

	j = 42;

	cout << i << endl;
}

//練習問題2. エラーにならないようにrを修正してください
void problem2(){

	const int i = 42;

	int& r = i;
}

//練習問題3. 配列を逆順にするreverse()関数を定義してください。reverse()関数は配列とその配列の長さを受け取る。
型名 reverse(引数リスト){

}


int main()
{
	problem1();

	problem2();
	
	int array[] = {0,1,2,3,4};

	reverse(array, 5); //引数は配列とその長さ

	cout << array[0] << endl;
	cout << array[1] << endl;
	cout << array[2] << endl;
	cout << array[3] << endl;
	cout << array[4] << endl;
}
