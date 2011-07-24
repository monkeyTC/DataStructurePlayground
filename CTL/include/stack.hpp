#include <CTL/collection.hpp>

template <class T> class Stack : Collection{
public:
	// @Override
	T 		pop();
	bool 	push(T node);
	bool 	has(T element);
	
	// constructor
	Stack(int maxSize = 20);
	Stack(const Collection& col);
	
	// @Override destructor
	~Stack();
};