#include <iostream>

using namespace std;

void decimal_to_binary(int x) {
	if(x>=1) {
		decimal_to_binary(x/2);
		cout<<x%2;
	}
}

int main() {
	int x;
	cin>>x;
	decimal_to_binary(x);
}