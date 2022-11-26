#include<iostream>
#include<math.h>
using namespace std;

int check(int n) {
	int a = n;
	if(n%2==0){
        while(n%2==0){
            n/=2;
        }
    }
    else{
        for(int i=3; i<=sqrt(n); i++){
            if(n%i==0){
                n=n/i;
                break;
            }
        }
    }
    if(n==a) return 1;
    return n;
}
int main() {
	int t;
	cin >> t;
	for (; t--;) {
		int n;
		cin >> n;
		int uoc = check(n);
		cout << uoc << endl;
	}
}