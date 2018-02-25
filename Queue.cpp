//#include<stdio.h>
//#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std;

void show( queue <string> temp){		// Print queue by using function
	while (!temp.empty())
	{
	    cout<< temp.front() << endl;
	    temp.pop();
	}
}

void show_num( queue <int> temp){		// Print queue by using function
	while (!temp.empty())
	{
	    cout<< temp.front() << endl;
	    temp.pop();
	}
}


int main(){

	queue <string> q;

	q.push("Manash");		// Manual value input to a queue
	q.push("Kumar");
	q.push("Mondal");

/*
	q.pop();

	cout<< q.size() << endl;
	cout<< q.front() << endl;
	cout<< q.back() << endl;

*/
/*
    ### why use function for traversing/ printing a queue??

    Ans :: To remain the original queue unchanged. pop() will effect the main queue and we will loss data. So
		   by using function we make a copy of our queue and print.
*/
	show(q);	// Function Parameter passing
	printf("\n");

	queue <int> num;

	for (int i=0;i<20;i++) {	// Value push using loop
	    num.push(i);
	}

	show_num(num);		// Function Parameter passing

	return 0;
}
