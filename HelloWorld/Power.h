#include <cmath>

class Power {
private:
    double _a = 0, _b = 0;
public:
    void setA(int a)
    {
        _a = a;
    }
    void setB(int b)
    {
        _b = b;
    }
    void calculate() {
        std::cout << "Result: " << pow(_a, _b);
    };
};
