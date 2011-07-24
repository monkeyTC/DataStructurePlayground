#include <iostream>
using namespace std;
void insert_sort(int num, int * arr){
	for(int i = 1; i < num; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--; 
		}
		arr[j+1] = key;
	}
}
int main(int argc, char* argv[]){
	int arr[10] = {12,331,0,23123,-123,23,1,13,67,87};
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	insert_sort(10, arr);
	for(int i = 0; i <10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}