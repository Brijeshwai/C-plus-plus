#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

   
    int i2;
    double d2;
    string s2;

    
    string tmp;

    getline(cin, tmp);
    i2 = stoi(tmp);

    getline(cin, tmp);
    d2 = stod(tmp);

    getline(cin, s2);

    
    printf("%i\n", i + i2);

    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + d2);

    
    
    cout << s + s2 << endl;

    return 0;
}
