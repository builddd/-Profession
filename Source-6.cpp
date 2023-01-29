#include<iostream>
using namespace std;

void Output(int array[], int number)//輸出用的函式
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void twoSum(int array[], int number,int numberI)//輸出答案的函式
{
	for (int i = 0; i < number; i++) 
	{
		for (int j = i+1; j < number; j++)
		{
			if ((array[i] + array[j]) == numberI)//如果兩個元素加總=答案
				cout << "["<<i<<","<<j<<"]";//輸出結果
		}
	}
	cout << endl;
}

int main()
{
	int nums[103] = { };//陣列nums
	int element = 0;
	int target =-200;
	cout << "輸入陣列nums:";
	
	for (int i = 0; i < 103; i++)//輸入陣列元素
	{
		int num;
		cin >> num;
		if (num >= -109 && num <= 109)
		{
			nums[i] = num;
			element++;
		}
		else
			break;
	}

	cout << "輸入整數target:";
	while (not (target >= -109 && target <= 109))
	{
		int num;
		cin >> num;
		if (num >= -109 && num <= 109)
			target = num;
	}

	cout << "陣列nums:";
	Output(nums, element);//輸出陣列nums
	cout << "整數target:"<< target<<endl;
	twoSum(nums, element, target);//輸出答案
}