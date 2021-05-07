//Devlyn Coulter
//CSIS111 Lab 3

#include <iostream>
#include <vector>
using namespace std;

/* part A:
* 1d hard coded array
* 1d user entered elements
* 1d hard coded array then displays sum and average
* 2d hard-coded array
*/

void part_a() {
	cout << "hard-coded array: \n";
	//create array
	int first_array[5] = { 1,2,3,4,5 };
	//output array
	for (int i = 0; i < 5; i++) {
		cout << first_array[i] << endl;
	}

	cout << "user-defined array: \n";
	//create array
	int second_array[5];
	//assign values
	cout << "enter 5 numbers: \n";
	for (int i = 0; i < 5; i++) {
		cin >> second_array[i];
	}
	//output array
	cout << "\narray: \n";
	for (int i = 0; i < 5; i++) {
		cout << first_array[i] << endl;
	}

	cout << "hard-coded array with sum and average: \n";
	//create array
	int third_array[5] = { 1,2,3,4,5 };
	int sum = 0;
	int avg = 0;
	//get sum,average
	for (int i = 0; i < 5; i++) {
		sum += third_array[i];
	}
	avg = sum / (sizeof(third_array)/sizeof(third_array[0]));
	//output array,sum,average
	cout << "array: \n";
	for (int i = 0; i < 5; i++) {
		cout << third_array[i] << endl;
	}
	cout << "sum: " << sum << endl;
	cout << "average: " << avg << endl;

	//create array
	int fourth_array[2][3] = { 1,2,3,4,5,6 };
	//output array
	cout << "2d hard-coded array: \n";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << fourth_array[i][j] << " ";
		}
		cout << "\n";
	}

}

void part_b() {
	//generate vector
	vector<int> first_vector;
	for (int i = 0; i < 5; i++) {
		first_vector.push_back(i);
	}
	//generate reverse vector:
	vector<int> second_vector;
	for (int i = 5; i < 0; i--) {
		second_vector.push_back(i);
	}
	//output vector:
	cout << "\n vector : \n";
	for (int i = 0; i < 5; i++) {
		cout << first_vector[i] << " ";
	}
	//output reverse vector:
	cout << "\n reverse vector: \n";
	for (int i = 0; i < 5; i++) {
		cout << second_vector[i] << " ";
	}
}
int main() {
	part_a();
}