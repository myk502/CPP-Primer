#include<bits/stdc++.h>
using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &fun(int i)
{
	return(i % 2) ? odd : even;
}

int main(void)
{

	return 0;
}
