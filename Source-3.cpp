#include<iostream>
using namespace std;

void Output(int array[],int number)//輸出陣列
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };//陣列
	int odd_number = 0;//奇數總和
	int even_number = 0;//偶數總和

	int odd[10] = {};//奇數陣列
	int o = 0;
	int even[10] = {};//偶數陣列
	int e = 0;

	for (int i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 1) //如果是奇數
		{
			odd_number += a[i];
			odd[o] = a[i];
			o++;
		}
		else
		{
			even_number += a[i];
			even[e] = a[i];
			e++;
		}
	}

	int minus = odd_number - even_number;//奇數-偶數後的結果
	cout << "奇數總和=" << odd_number << endl;
	cout << "偶數總和=" << even_number << endl;
	cout << "奇數總和 - 偶數總和=" << minus << endl;

	cout << "奇數值陣列=";//輸出奇數值陣列
	Output(odd, o);

	cout << "偶數值陣列=";//輸出偶數值陣列
	Output(even, e);

}
