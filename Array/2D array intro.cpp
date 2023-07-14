#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int i,int j ) {
		for(int i=0; i<3; i++) {
			for(int j=0; j<4; j++) {
				if(arr[i][j]==target) {
					return 1;
				}

			}

		}
		return 0;
	}
	
	
	
int main() {
	// create 2d array
	int arr[3][4];


	
//	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

	//another way
//	int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

//	taking input ->row wise
	for(int i=0; i<3; i++) { //i->row
		for(int j=0; j<4; j++) { //j->column
			cin>>arr[i][j];
		}
	}
	/*
	//	taking input ->column wise
		for(int i=0; i<4; i++) { //i->row
			for(int j=0; j<3; j++) { //j->column
				cin>>arr[j][i];
			}
		}
	*/

//	print
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cout << arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Enter the element to search"<<endl;
	int target;
	cin>>target;
	if(isPresent(arr,target,3,4)) {
		cout<<"element found"<<endl;
	} else {
		cout<<"element not found"<<endl;
	}
	return 0;
}