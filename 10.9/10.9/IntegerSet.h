#ifndef INTEGER_SET_H
#define INTEGER_SET_H

static const int MAX_SIZE = 101;

class IntegerSet {
public:
	IntegerSet();
	IntegerSet unionOfIntegerSets(const IntegerSet& other);
	IntegerSet intersectionOfIntegerSets(const IntegerSet& other);
	void emptySet();
	void inputSet();
	void insertElement(const int number);
	void deleteElement(const int number);
	void setPrint(void) const;
	bool isEqualTo(const IntegerSet& other) const;
	bool validEntry(const int number) const;
private:
	int _set[MAX_SIZE]; 
	
};


#endif
