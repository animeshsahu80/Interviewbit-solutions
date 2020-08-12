int Solution::solve(vector<int> &v, int k) {
    map<int, int>m;
	int ans = 0, curr = 0;
	m[0] = 1;
	for (int a : v)
	{
		curr ^= a;
		if (m[k ^ curr])
			ans += m[curr ^ k];
		m[curr]++;
	}
	return ans;
}