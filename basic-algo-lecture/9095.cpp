#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int d[20];
	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 4; i < 20; i++)
	{
		d[i] = d[i - 3] + d[i - 2] + d[i - 1];
	}
	while (t--)
	{
		int n;
		cin >> n;
		cout << d[n] << "\n";
	}

	return 0;
}