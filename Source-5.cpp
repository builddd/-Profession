#include<iostream>
using namespace std;

void Output(int array[], int number)//��X�Ϊ��禡
{
	for (int i = 0; i < number; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void Intersection(int array[], int arrayI[])//��X�涰���G���禡
{
	int c[10] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 10; j++)//�N���G��J�}�Cc���j��
		{
			if (array[i] == arrayI[j]) //�p�G�Ʀr�ۦP
			{
				c[num] = array[i];
				num++;
			}
		}
	}

	for (int k = 0; k < num; k++)//�ư����ƼƦr���j��
		{
			for (int l = k + 1; l < num; l++)
			{
				if (c[k] == c[l]) //�p�G�Ʀr�ۦP
				{
					for (int m = l + 1; m < num; m++)
					{
						c[m - 1] = c[m];//�������ƼƦr
					}
					num--;    //�}�C����-1
					l--;    //�A���ˬd�����I
				}
			}
		}

		int min;
		for (int i = 0; i < num; i++)//�}�C�Ƨ�
		{
			for (int j = i + 1; j < num; j++)
			{
				if (c[i] > c[j])
				{
					min = c[i];
					c[i] = c[j];//�p���Ʀr���e��
					c[j] = min;//�j���Ʀr���᭱
				}
			}
	}
	cout << "�}�Cc:";
	Output(c, num); //��X�}�Cc
}

void Difference(int array[], int arrayI[])//��X�t�����G���禡
{
	int d[10] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)
	{
		int same = 0;
		for (int j = 0; j < 10; j++)//�N���G��J�}�Cd���j��
		{
			if (array[i] == arrayI[j]) //�p�G�Ʀr�ۦP
				same++;
		}

		if (same == 0)
		{
			d[num] = array[i];
			num++;
		}
	}

		for (int k = 0; k < num; k++)//�ư����ƼƦr���j��
		{
			for (int l = k + 1; l < num; l++)
			{
				if (d[k] == d[l]) //�p�G�Ʀr�ۦP
				{
					for (int m = l + 1; m < num; m++)
					{
						d[m - 1] = d[m];//�������ƼƦr
					}
					num--;    //�}�C����-1
					l--;    //�A���ˬd�����I
				}
			}
		}

	int min;
	for (int i = 0; i < num; i++)//�}�C�Ƨ�
	{
		for (int j = i + 1; j < num; j++)
		{
			if (d[i] > d[j])
			{
				min = d[i];
				d[i] = d[j];//�p���Ʀr���e��
				d[j] = min;//�j���Ʀr���᭱
			}
		}
	}
	cout << "�}�Cd:";
	Output(d, num); //��X�}�Cd
}

void Union(int array[], int arrayI[])//��X�p�����G���禡
{
	int e[22] = {};
	int num = 0;

	for (int i = 0; i < 12; i++)//��}�Ca��������J�}�Ce
	{
			e[num] = array[i];
			num++;
	}
	for (int j = 0; j < 10; j++)//��}�Cb��������J�}�Ce
	{
		e[num] = arrayI[j];
		num++;
	}

	
	for (int k = 0; k < num; k++)//�ư����ƼƦr���j��
	{
		for (int l = k + 1; l < num; l++)
		{
			if (e[k] == e[l]) //�p�G�Ʀr�ۦP
			{
				for (int m = l + 1; m < num; m++)
				{
					e[m - 1] = e[m];//�������ƼƦr
				}
				num--;    //�}�C����-1
				l--;    //�A���ˬd�����I
			}
		}
	}

	int min;
	for (int i = 0; i < num; i++)//�}�C�Ƨ�
	{
		for (int j = i + 1; j < num; j++)
		{
			if (e[i] > e[j])
			{
				min = e[i];
				e[i] = e[j];//�p���Ʀr���e��
				e[j] = min;//�j���Ʀr���᭱
			}
		}
	}
	
	cout << "�}�Ce:";
	Output(e, num); //��X�}�Ce
}

int main()
{
	int a[12] = { 77,5,5,22,13,55,97,4,796,1,0,9 };//�}�Ca
	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };//�}�Cb
	cout << "�}�Ca:";
	Output(a, 12);//��X�}�Ca

	cout << "�}�Cb:";
	Output(b, 10);//��X�}�Cb

	Intersection(a, b);//�p��a��b���涰���G

	Difference(a, b);//�p��a��b���t�����G

	Union(a, b);//�p��a��b���p�����G
}