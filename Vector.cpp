//#include<stdio.h>
#include<iostream>
#include<vector>
#include<conio.h>
//#include<bits/stdc++.h>

using namespace std;

int main(){

	vector <int> arr;
/*
	for (int i=1;i<=10;i++) {
	    arr.push_back(i);
	}
*/
	arr.assign(10,255);  // to assign first 10 value = 255



	for (int i=0;i!=arr.size();i++) {
	    cout << arr[i] << " ";

	}
	printf("\n\n");

//	cout<< arr.max_size()<< endl;		// Max value taken by vector
//	cout<< arr.capacity()<< endl;		// Capacity/ space taken by arr vector
//	cout<< arr.empty()<< endl;			// Boolean fn 0 = arr isn't empty; 1 = arr is empty




	getchar();
	return 0;
}
