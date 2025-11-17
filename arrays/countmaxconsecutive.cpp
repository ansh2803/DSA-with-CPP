#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 1, 0, 1, 1, 1};
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 1)
        {
            count = count + 1;
            max_count = max(max_count, count);
                                             /*max(a, b) is a built-in C++ function
                                             that returns the bigger value between a and b.*/
        }
        else
        {
            count = 0;
                                             
        }
    }
    cout << "count" << count << std::endl;
    cout << "maxcount" << max_count << std::endl;
    

    return 0;
}