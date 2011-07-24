#include <iostream>
template <class T>
void bubblesort(T * array, int size){
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - i - 1; j++ ){
			if(array[j] > array[j+1]){
				T temp			= array[j];
				array[j]		= array[j+1];
				array[j+1]	= temp;
			}
		}
	}
}

int main(int argc, const char * argv[]){
	int a[12] = {1,45,-123,34,23,94,-1233,-45,9, 11};
	for (int i = 0 ; i < 10; ++i){
		std::cout << a[i] << " ";
	}
	bubblesort(a, 10);
	std::cout << "\nafter" << std::endl;
	for (int i = 0 ; i < 10; ++i){
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}