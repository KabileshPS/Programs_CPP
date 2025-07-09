//a         //odd row left to right
//c b       //even right to left
//d e f
//j i h g
//k l m n o
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	char ch='A';//starting char
	for(int i=1; i<=n; i++) {
		int count =i;//1 2 3
		char start=ch;//A
		for(int j=1; j<=i; j++) {
			ch++;
		}
		if(i%2==1) {
			//odd row -> print left to right
			for(int j=0; j<count; j++) {
				cout<<(char)(start+j)<<" ";
			}
		} else {
			for(int j=count-1; j>=0; j--) {
				cout<<(char)(start+j)<<" ";
			}
		}
		cout<<endl;
	}
}