#include<iostream>
using namespace std;
int main()
{
int a[10] = {0,1,2,3,4,5,6,7,8,9};//皚
int odd_number = 0;//计羆㎝
int even_number = 0;//案计羆㎝

int odd[10] = {};//计皚
int o = 0;
int even[10] = {};//案计皚
int e = 0;

for (int i = 0; i < 10; i++)
{
	if (a[i] % 2 == 1) //狦琌计
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

int minus = odd_number - even_number;//计-案计挡狦
cout << "计羆㎝=" << odd_number<<endl;
cout << "案计羆㎝=" << even_number <<endl;
cout << "计羆㎝ - 案计羆㎝=" << minus << endl;

cout << "计皚=";//块皚
for (int i = 0; i <o ; i++) {
	cout << odd[i]<<" ";
	}
cout << endl;

cout << "案计皚=";
for (int i = 0; i < e; i++) {
	cout << even[i] << " ";
}
cout << endl;
}