#include <iostream>
using namespace std;

template <class T> 
int binarySearch(T * array, T obj, int begin, int end){
	if(begin > end) return -1;
	int mid = (begin + end) / 2;
	if(array[mid] == obj) return mid;
	return array[mid] < obj ? binarySearch(array, obj, mid + 1, end) : 
	binarySearch(array, obj, begin, mid - 1);
}


template <class T> 
int binarySearch2(T * array, T obj, int begin, int end){
	if(begin > end) return end;
	int mid = (begin + end) / 2;
	if(array[mid] == obj) return mid;
	return array[mid] < obj ? binarySearch(array, obj, mid + 1, end) : 
	binarySearch(array, obj, begin, mid - 1);
}

template <class T>
void findRange(T * array, T obj, int size){
	int loc = binarySearch(array, obj, 0, size - 1);
	
}

int main(int argc, char * argv[]){
	//int test_int[10] = {2,3,7,9,12,123,457,787,11111};
	//return binarySearch(test_int, 12, 0, 8);
	char test_char[20] = {'A','A','B','B','B','B','B','B','B','B','C','C','E','E','E','F','F'};
	int loc = binar
}