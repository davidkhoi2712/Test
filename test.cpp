#include <stdio.h>
#include <conio.h>
#include <iostream>


using namespace std;

int _rel(int a, int n)
{
	int sum=1;
	if(n==0){
		return 1;
	}
	else {
	for(int i=0; i<n; i++){
		sum *=a;
	}

}	return sum;
}
int main() {
	
	int a, n;
	cin>>a>>n;
	cout<<_rel(a,n);
	getch();
	return 0;
}
