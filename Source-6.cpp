#include<iostream>
using namespace std;

void Output(int array[], int number)//��X�Ϊ��禡
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void twoSum(int array[], int number,int numberI)//��X���ת��禡
{
	for (int i = 0; i < number; i++) 
	{
		for (int j = i+1; j < number; j++)
		{
			if ((array[i] + array[j]) == numberI)//�p�G��Ӥ����[�`=����
				cout << "["<<i<<","<<j<<"]";//��X���G
		}
	}
	cout << endl;
}

int main()
{
	int nums[103] = { };//�}�Cnums
	int element = 0;
	int target =-200;
	cout << "��J�}�Cnums:";
	
	for (int i = 0; i < 103; i++)//��J�}�C����
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

	cout << "��J���target:";
	while (not (target >= -109 && target <= 109))
	{
		int num;
		cin >> num;
		if (num >= -109 && num <= 109)
			target = num;
	}

	cout << "�}�Cnums:";
	Output(nums, element);//��X�}�Cnums
	cout << "���target:"<< target<<endl;
	twoSum(nums, element, target);//��X����
}