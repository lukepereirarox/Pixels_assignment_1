#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size, d, s, l, count = 0;
    cout << "Enter size: ";
    cin >> size;
    vector<int> data = {};
    cout << "Enter elements with spaces between them and hit enter:\n";
    while (cin >> d && count < size)
    {
        count++;
        data.push_back(d);

        if (cin.peek() == '\n')
            break;
    }
    s = data[0];
    l = data[0];
    for (int x : data)
    {
        if (x < s)
            s = x;
        if (x > l)
            l = x;
    }
    cout << "largest: " << l << endl;
    cout << "smallest:" << s << endl;
    return 0;
}