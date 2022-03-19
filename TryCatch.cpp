#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    try
    {
        if (x == 5)
            cout << "Yes";
        else
            throw invalid_argument ("NO");

    }
    catch(invalid_argument& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;
}