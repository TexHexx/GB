#define ARRAY_LENGTH 10

class Stack
{
private:
	double _stackArray[ARRAY_LENGTH];
	int _stackLength = 0;
public:
	void reset() {
		while (_stackLength > 0)
		{
			_stackArray[_stackLength--] = 0;
		}
	};

	bool push(double element) {
		if (_stackLength >= ARRAY_LENGTH)
			return false;

		_stackArray[_stackLength++] = element;
		return true;
	};

	double pop() {
		if (_stackLength < 0) {
			std::cout << "No elements to pop" << std::endl;
		};
		return _stackArray[_stackLength--];
	};

	void print() {
		std::cout << "( ";
		for (int i = 0; i < _stackLength; i++)
		{
			std::cout << _stackArray[i] << " ";
		}
		std::cout << ")" << std::endl;
	};
};