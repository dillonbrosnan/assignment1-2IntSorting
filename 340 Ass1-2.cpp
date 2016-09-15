#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

vector <int> readData(vector <int> &vect){
	bool foo1 = true;
	do{
		string str1 = "";
		string str2;
		int	 i;
		stringstream ss;
		bool foo2 = true;
		cout << "Enter a list of numbers: " << endl;
		getline(cin, str1);
		ss << str1;
		while (getline(ss, str2, ' ' )){
			if(stringstream(str2) >> i){
				vect.push_back(i);
			}
		}
		if(vect.size() != 0){
			foo1 = false;
		}else{
			cout << "Not a valid entry. Please enter a list of numbers." << endl;
		}
	}while(foo1); 
	/*do-while checks for atleast one int that has been pushed into vector. if 
	string entered does not contain a int value. user will be prompted again*/
	
	
	return vect;
}
vector <int> selectionSort(vector <int> &vect){
	for(int i = 0; i < vect.size()-1; i++){
		for(int j = i+1; j < vect.size(); j++){
			if(vect[j] < vect[i]){
				swap(vect[j], vect[i]);
			}
		}
	}return vect;
}void printVector (const vector <int> &vect){
	for(int i = 0; i < vect.size(); i++){
		cout << vect[i] << endl;
	}
}

int main(){
	vector <int> vect; //creates vector
	readData(vect); //reads data
	selectionSort(vect); //sorts data
	printVector(vect); //prints data
	
}
