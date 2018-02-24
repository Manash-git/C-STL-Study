//#include<stdio.h>
//#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){

	vector <int> arr;
	vector <int> :: iterator i;
	vector <int> :: reverse_iterator ri;

	for (int i=1;i<=10;i++) {		// Value push
	    arr.push_back(i);
	}

	i= arr.begin();			// begin() return 1
	cout << *i << endl;
//	arr.insert(i+2,15);		// to insert a new value in this position ; Here i+2 = 1+2 = 3 and 15 is value
	arr.erase(i+6);			// Delete a value from the arr i+6 = 7


	for (i=arr.begin() ; i!= arr.end() ; i++) {
	    cout << *i <<" ";			// iterator works as like pointer that's why use *i
	}
	printf("\n\n");
/*	for (ri=arr.rbegin() ; ri!= arr.rend() ; ri++) {
	    cout << *ri << " ";
	}
*/
	getchar();
	return 0;
}
