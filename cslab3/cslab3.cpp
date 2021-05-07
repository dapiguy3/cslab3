//Devlyn Coulter
//CSIS111 Lab 3

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
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
	avg = sum / (sizeof(third_array) / sizeof(third_array[0]));
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
	//push new value to beginning:
	first_vector.insert(first_vector.begin(), 61);
	//generate reverse vector:
	vector<int> second_vector;
	for (int i = 5; i > 0; i--) {
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


void part_c() {
	fstream data_file; //initiate file stream
	data_file.open("a.txt", ios::in); //open the file

	string current_output; 
	vector<int> output_vector_a;
	int output_array_a[3][4];
	int counter = 0;
	//reads every line of data.txt and pushes it to output_vector
	//i couldn't figure out how do do all of this in one loop,
	//so it's done in two. 
	while (getline(data_file, current_output)) {
		output_vector_a.push_back(stoi(current_output));
	}
	data_file.close();
	//slot numbers into array
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			output_array_a[y][x] = output_vector_a[counter];
			counter++;
		}
	}

	//let's do it for file b
	data_file.open("b.txt", ios::in);
	string current_output_b = "";
	vector<int> output_vector_b;
	int output_array_b[3][4];
	counter = 0;
	while (getline(data_file, current_output_b)) {
		output_vector_b.push_back(stoi(current_output_b));
	}
	data_file.close();
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			output_array_b[y][x] = output_vector_b[counter];
			counter++;
		}
	}

	//compare arrays a and b to make array c
	int output_array_c[3][4];
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (output_array_a[y][x] >= output_array_b[y][x]) {
				output_array_c[y][x] = output_array_a[y][x];
			}
			else {
				output_array_c[y][x] = output_array_b[y][x];
			}
		}
	}

	//output the arrays
	cout << "\noutputting array a: \n";
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << output_array_a[y][x] << "\t";
		}
		cout << "\n";
	}
	cout << "\noutputting array b: \n";
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << output_array_b[y][x] << "\t";
		}
		cout << "\n";
	}
	cout << "\noutputting array c: \n";
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			cout << output_array_c[y][x] << "\t";
		}
		cout << "\n";
	}

	
}




int main() {
	part_c();
}