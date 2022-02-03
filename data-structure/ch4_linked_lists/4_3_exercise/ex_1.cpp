template<class T>class chain; //forward declaration

template<class T>
class chainNode{
public:
	friend class chain<T>;
private:
	T data;
	chainNode<T> *link;
};


template<class T>
class chain{
public:
	chain(){
		first = 0;
	};
private:
	chainNode<T> *first;

};

class chainIterator{
public:

	//constructor
	chainIterator(chainNode<T>* startNode = 0){
		current = startNode;
	}
	T& operator*() const{
		return current->data;
	}

	T* operator->() const{
		return &current->data;
	}

	chainIterator& operator++(){
		current=current->link;
		return *this;
	}
	chainIterator operator++(int){
		chainIterator old = *this;
		current= current->link;
		return old;
	}


	//type 
	chainIterator& operator<<(){
		while (current++){
			std::cout<<current->data;
			current = current->link;
		}
		
	}


private:
	chainNode<T>* current;
};


