//#include<stdio.h>
//#include<bits/stdc++.h>
#include<iostream>
#include<utility>

using namespace std;

int main(){
/*
	pair <int,int> n;		// same Data Type

	n.first=10;
	n.second=35;

	cout << n.first << " " << n.second << endl;
*/
/*
	pair <int,char> m;			// Different Data Type
	m.first=100;
	m.second='A';
	cout << m.first <<" "<< m.second<< endl;
*/

/*
	pair <int , int > n1 (100,554);				// Pair declare with value initialization
	cout << n1.first << " " << n1.second << endl;

	pair <int,char> m1 (778, 'B');
	cout << m1.first <<" "<< m1.second<< endl;
*/
/*
	pair <int , int > n1 (100,554);
	pair <int, int> n2 (n1);			// copy value from other pair when initialization
	cout << n2.first << " " << n2.second << endl;

*/

	pair <string , pair <int, char> > student;			// Nested Pair
	student= make_pair("Manash",make_pair(7245,'H'));

//	cout << student.first << " " << student.second.first << " " <<  student.second.second << endl;
	cout << student.first << endl << student.second.first << endl <<  student.second.second << endl;

	return 0;
}
