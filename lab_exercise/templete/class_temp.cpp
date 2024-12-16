#include <iostream>
using namespace std;

// CLASS BASED TEMPLATE
template <typename T1, typename T2>
class Pair {
private:
    T1 x;  
    T2 y;

public:

    Pair(T1 x, T2 y) {
        this->x = x;
        this->y = y;
    }

    void getData() {
        cout << "x: " << this->x << " , y: " << this->y << endl;
    }
};

int main() {
    Pair<int, double> obj(5, 7.2);
    obj.getData();

    return 0;
}