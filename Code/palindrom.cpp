#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t = 0;

	scanf("%d", &t);

	while(t--)
	{
		string text;
		cin >> text;

		std::transform(text.begin(), text.end(), text.begin(), ::tolower);

		string rev = text;

		reverse(rev.begin(), rev.end());

		if(text == rev)
			cout << "Yes\n";
		else
			cout << "No\n";

	}

	return 0;
}