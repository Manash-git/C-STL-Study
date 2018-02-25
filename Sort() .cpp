//#include<stdio.h>
//#include<iostream>
#include<bits/stdc++.h>
//#include<conio.h>


using namespace std;

int main(){

	int arr[]={5,9,4,6,4,98,22,5,1};

	sort(arr,arr+9); 		// sort(arr+0/arr , arr + no of value in the array )
							// Here no of values are 9

	for (int i=0;i<9;i++) {
	    printf("%d  ",arr[i]);
	}

	printf("\n\n");
	///getchar();
	return 0;

}
