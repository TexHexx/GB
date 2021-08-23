#include <iostream>
#include <math.h>

class Power
{
private:
    int a = 0, b = 0;
public:
    void set(int a, int b) 
    {
        this->a = a;
        this->b = b;
    };
    int calculate()
    {
        return pow(a, b);
    }
};

int main()
{
    Power pw;
    pw.set(15, 20);
    std::cout << "Return number: " << pw.calculate();
}
