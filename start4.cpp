#include <iostream>
using namespace std;

int main(){
// 	   *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

	int n = 20;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++)
				cout<<" ";
		for(int j=0;j<i;j++)
				cout<<"* ";
		cout<<"\n";
	}
	for(int i=n;i>=1;i--){
		for(int j=0;j<n-i;j++)
				cout<<" ";
		for(int j=0;j<i;j++)
				cout<<"* ";
		cout<<"\n";
	}
}