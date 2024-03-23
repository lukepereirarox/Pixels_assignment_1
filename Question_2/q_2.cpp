#include <iostream>

int main()
{
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;
    int a = 0;
    ptr1 = &a;
    ptr2 = ptr1 + 1;
    int size = (char *)ptr2 - (char *)ptr1;
    std::cout << "Size of integer data type is " << size << std::endl;
    return 0;
}
