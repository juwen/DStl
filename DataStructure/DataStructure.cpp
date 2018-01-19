// DataStructure.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include "Util.h"
#include "Deque.h"
#include "List.h"
#include "Vector.h"
#include <algorithm>
#include <ctime>
#include "Map.h"
#include "Map-List.h"
#include "Algorithm.h"
#include <map>
using namespace std;
using namespace ds;

const int maxn = 1e6;
template <typename M>
void test()
{
	M m;
	clock_t beg = clock();
	for (int i=0;i<maxn;++i)
		m.insert({ i, 2 * i + 1 });
	for (int i = 0; i < maxn/2; ++i)
		m[i + 1] = m[i];
	for (int i = 0; i < maxn/2; ++i)
		m.erase(i);
	cout << clock() - beg << endl;
	cout << m.size() << endl;
	//cout << m[6e4] << endl;
}
int main()
{	
	int a[5];
	for (int i = 0; i < 5; ++i)
		a[i] = i;
	do
	{
		print(a);
	} while (ds::next_permutation(a, a + 5));
	getchar();
}

