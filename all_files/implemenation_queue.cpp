#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> Q;

	cout << std::boolalpha <<Q.empty() <<endl;
	for (int i = 1; i <= 5; ++i)
		Q.push(i);
	// 1,2,3,4,5
	cout << "front = " << Q.front()	 << ", back = " << Q.back() <<endl;
	cout << "Size =" << Q.size() <<endl;

	Q.pop();
	Q.pop();
	// 3,4,5
	cout << "front = " << Q.front()	 << ", back = " << Q.back() <<endl;
	cout << "Size =" << Q.size() <<endl;
	cout << std::boolalpha <<Q.empty() <<endl;

	return 0;
}
