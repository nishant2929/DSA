class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	   
	}
	
	int peek() {
        Iterator it= *this; //no function defines for peek so we create a function for it.
        return it.next();
	}
	
	int next() {
	    return Iterator ::next(); //calling next function
	}
	
	bool hasNext() const {
	   return Iterator:: hasNext(); //calling hasnext function
	}
};