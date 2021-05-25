#include <iostream>
#include "FordFulkerson.h"
using namespace std;

int main()
{
    cout << "Hello, you are welcome!\n";
    cout << "Please, input the filename: ";
    string filename;
    //filename = "test.txt";
    cin >> filename;
    FordFulkerson alg;
    alg.inputData(filename);
    int res = alg.MaxStream();
    cout <<"Answer:" << res;
}
