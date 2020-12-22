#include<iostream>
#include<iomanip>
#include<vector> 
int main()
{
	int n = 15, mx = 1;
	std::vector<int>v, v1;
	std::vector<std::vector<int>>vv;
	std::cout << "n=15\n";

	for (int i = 1; i <= n; ++i)
	{
		if (i == 1) {
			v.push_back(1); vv.push_back(v);
		}
		else
		{
			v1.push_back(1);
			for (int j = 1; j < v.size(); ++j)
			{
				v1.push_back(v[j] + v[j - 1]);
			}
			v1.push_back(1);

			for (int j = 0; j < v1.size(); ++j)
			{
				if (mx < v1[j]) mx = v1[j];
			}

			v.clear();
			v = v1;
			v1.clear();
			vv.push_back(v);
		}
	}
	int k = 1;
	while (mx > 0)
	{
		k++;
		mx /= 10;
	}
	for (int i = 0; i < vv.size(); ++i)
	{
		for (int j = 0; j < vv[i].size(); ++j)
		{
			std::cout << std::setw(k) << vv[i][j];
		}
		std::cout << std::endl;
	}
}