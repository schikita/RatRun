#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <utility>
#include <iomanip>

using namespace std;

template <typename T>
class Container {
    private:
        vector<T> data;

    public:
    void fill(T start, T end) {
        for (size_t i = start; i <= end; i++)
        {
            data.push_back(i);
        }         
    }

    void print() const {
        for (const T& i : data)
        {
            cout << i << " ";
        }
        
    }
};

int main()
{
    Container<int> v1;
    v1.fill(1, 10);

    v1.print();

    return 0;
}