#include <iostream>
using namespace std;
template <class T> void merge(T * array, T * helper, int begin, int mid , int end){
	for(int i = begin; i <= end; i++){
		helper[i] = array[i];
	}
	int index1 = begin;
	int index2 = mid + 1;
	for(int i = begin; i <= end; i++){
		if(index1  > mid)
			array[i] = helper[index2++];
		else if (index2 > end) 
			array[i] = helper[index1++];
		else if(helper[index1] < helper[index2])
			array[i] = helper[index1++];
		else array[i] = helper[index2++];
	}
}

template <class T> void divide_sort(T * array, T * helper, int begin, int end){
	if(begin < end){
		int mid = ( begin + end ) / 2;
		divide_sort(array, helper, begin, mid);
		divide_sort(array, helper, mid + 1, end);
		merge(array, helper, begin, mid, end);
	}
}

template <class T> void merge_sort(T * array, int size){
	T * helper = new T [size];
	divide_sort(array, helper, 0 , size - 1);
	delete [] helper;
}

int main(int argc, char* argv[]){
	int arr[10] = {12,331,0,23123,-123,23,1,13,67,87};
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	merge_sort(arr, 10);
	for(int i = 0; i <10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

/*
void merge(T * array. T * array_helper, int begin, int middle, int end){
	
}

void merge_sort(T * array, T * array_helper, int begin, int end){
	int middle = ( begin + end ) / 2;
	if(begin < end) {
		merge_sort(array, array_helper , begin, middle);
		merge_sort(array, array_helper,middle+1, end);
		merge(array, array_helper, begin, middle, end);
	}
}

*/