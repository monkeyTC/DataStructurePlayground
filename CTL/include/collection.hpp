namespace CTL{
template <class T> class Collection{
public:
	// must be implement
	virtual T 		pop() 									= 0;
	virtual bool	push(T node) 						= 0;
	virtual bool 	has(T element) 		const = 0;
	
	// already implemented
	int		maxSize()					const;
	int 	getSize()					const;
	Collection& operator= (const Collection& col);
	
	// constructor
	Collection(int maxSize = 20);
	Collection(const Collection& col);
	
	// Destructor
	virtual ~Collection()					= 0; 
private:
	T 		* head;
	int 		maxSize;
	int 		length;
};

} // end of namespace CTL