#include <iostream>
using namespace std;
class MyBoolean {
private:
    bool value;
public:
    MyBoolean(bool val) : value(val) {}
    bool operator!() {
        return !value;
    }
    bool getValue() const {
        return value;
    }
};

int main() {
    bool inputValue;
    cout << "Enter a boolean value (1 for true, 0 for false): ";
    cin >> inputValue;
    MyBoolean myBool(inputValue);

    MyBoolean result = !myBool;

    cout << "Original boolean value: " << myBool.getValue() << endl;
    cout << "Logical NOT (!) Result: " << result.getValue() << endl;

    return 0;
}
