#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	while(num--)
	{
		int n = 0;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		int p = (2<<n)-1;
		cout<< p<<endl;

	}
}