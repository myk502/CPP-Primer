#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(void)
{
	for(int i = 0; i < 10; i++)
		a[i] = i;
	auto it = a + 2;
	cout << *begin(it) << endl;
	return 0;
}
