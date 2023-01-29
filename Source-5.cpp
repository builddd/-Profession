#include<iostream>
using namespace std;

void Output(int array[], int number)//輸出用的函式
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void Intersection(int array[], int arrayI[])//輸出交集結果的函式
{
	int c[10] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)//將結果放入陣列c的迴圈
		{
			if (array[i] == arrayI[j]) //如果數字相同
			{
				c[num] = array[i];
				num++;
			}
		}
	}

	for (int k = 0; k < num; k++)//排除重複數字的迴圈
		{
			for (int l = k + 1; l < num; l++)
			{
				if (c[k] == c[l]) //如果數字相同
				{
					for (int m = l + 1; m < num; m++)
					{
						c[m - 1] = c[m];//移除重複數字
					}
					num--;    //陣列長度-1
					l--;    //再次檢查重複點
				}
			}
		}

		int min;
		for (int i = 0; i < num; i++)//陣列排序
		{
			for (int j = i + 1; j < num; j++)
			{
				if (c[i] > c[j])
				{
					min = c[i];
					c[i] = c[j];//小的數字放到前面
					c[j] = min;//大的數字放到後面
				}
			}
	}
	cout << "陣列c:";
	Output(c, num); //輸出陣列c
}

void Difference(int array[], int arrayI[])//輸出差集結果的函式
{
	int d[10] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)
	{
		int same = 0;
		for (int j = 0; j < 10; j++)//將結果放入陣列d的迴圈
		{
			if (array[i] == arrayI[j]) //如果數字相同
				same++;
		}

		if (same == 0)
		{
			d[num] = array[i];
			num++;
		}
	}

		for (int k = 0; k < num; k++)//排除重複數字的迴圈
		{
			for (int l = k + 1; l < num; l++)
			{
				if (d[k] == d[l]) //如果數字相同
				{
					for (int m = l + 1; m < num; m++)
					{
						d[m - 1] = d[m];//移除重複數字
					}
					num--;    //陣列長度-1
					l--;    //再次檢查重複點
				}
			}
		}

	int min;
	for (int i = 0; i < num; i++)//陣列排序
	{
		for (int j = i + 1; j < num; j++)
		{
			if (d[i] > d[j])
			{
				min = d[i];
				d[i] = d[j];//小的數字放到前面
				d[j] = min;//大的數字放到後面
			}
		}
	}
	cout << "陣列d:";
	Output(d, num); //輸出陣列d
}

void Union(int array[], int arrayI[])//輸出聯集結果的函式
{
	int e[22] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)//把陣列a的元素放入陣列e
	{
			e[num] = array[i];
			num++;
	}
	for (int j = 0; j < 10; j++)//把陣列b的元素放入陣列e
	{
		e[num] = arrayI[j];
		num++;
	}

	
	for (int k = 0; k < num; k++)//排除重複數字的迴圈
	{
		for (int l = k + 1; l < num; l++)
		{
			if (e[k] == e[l]) //如果數字相同
			{
				for (int m = l + 1; m < num; m++)
				{
					e[m - 1] = e[m];//移除重複數字
				}
				num--;    //陣列長度-1
				l--;    //再次檢查重複點
			}
		}
	}

	int min;
	for (int i = 0; i < num; i++)//陣列排序
	{
		for (int j = i + 1; j < num; j++)
		{
			if (e[i] > e[j])
			{
				min = e[i];
				e[i] = e[j];//小的數字放到前面
				e[j] = min;//大的數字放到後面
			}
		}
	}
	
	cout << "陣列e:";
	Output(e, num); //輸出陣列e
}

int main()
{
	int a[12] = { 77,5,5,22,13,55,97,4,796,1,0,9 };//陣列a
	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };//陣列b
	cout << "陣列a:";
	Output(a, 12);//輸出陣列a

	cout << "陣列b:";
	Output(b, 10);//輸出陣列b

	Intersection(a, b);//計算a跟b的交集結果

	Difference(a, b);//計算a跟b的差集結果

	Union(a, b);//計算a跟b的聯集結果
}