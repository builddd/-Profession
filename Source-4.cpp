#include<iostream>
using namespace std;

void Output(int array[], int number)//��X�Ϊ��禡
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	int Order[12] = { 77,5,5,22,13,55,97,4,796,1,0,9 };//�ŧi�}�C
	cout << "�Ƨǫe���}�C:";
	Output(Order, 12);//��X�}�C

	int min;
	for (int i = 0; i < 12; i++)//�}�C�Ƨ�
	{
		min = Order[i];
		for (int j = i + 1; j < 12; j++)
		{
			if (Order[i] > Order[j])
			{
				min = Order[i];     
				Order[i] = Order[j];//�p���Ʀr���e��
				Order[j] = min;//�j���Ʀr���᭱
			}
		}
	}

	cout << "�Ƨǫ᪺�}�C:";
	Output(Order, 12);
	
}