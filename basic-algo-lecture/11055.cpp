#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int s[1001];
	for (int i = 1; i <= n; i++)
		cin >> s[i];
	int d[1001];
	d[1] = s[1];
	for (int i = 2; i <= n; i++)
	{
		d[i] = s[i];
		for (int j = 1; j <= i; j++)
		{
			if (s[i] > s[j])
				d[i] = max(d[j] + s[i], d[i]);
		}
	}
	int ans = d[1];
	for (int i = 2; i <= n; i++)
		ans = max(ans, d[i]);
	cout << ans;
	return 0;
}