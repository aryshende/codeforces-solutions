#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, cnt0 = 0, cnt1 = 0;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '0')
		{
			cnt0++;
		}
		else
		{
			cnt1++;
		}
	}

	if (cnt0 == cnt1)
	{
		cout << 0 << endl;
	}
	else if (cnt0 > cnt1)
	{
		cout << n - (2 * cnt1) << endl;
	}
	else
	{
		cout << n - (2 * cnt0) << endl;
	}

	return 0;
}