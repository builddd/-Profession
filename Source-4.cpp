#include<iostream>
using namespace std;

void Output(int array[], int number)//輸出用的函式
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int Order[12] = { 77,5,5,22,13,55,97,4,796,1,0,9 };//宣告陣列
	cout << "排序前的陣列:";
	Output(Order, 12);//輸出陣列

	int min;
	for (int i = 0; i < 12; i++)//陣列排序
	{
		min = Order[i];
		for (int j = i + 1; j < 12; j++)
		{
			if (Order[i] > Order[j])
			{
				min = Order[i];     
				Order[i] = Order[j];//小的數字放到前面
				Order[j] = min;//大的數字放到後面
			}
		}
	}

	cout << "排序後的陣列:";
	Output(Order, 12);
	
}