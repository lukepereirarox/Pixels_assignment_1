#include <iostream>
int oneD[9];
int twoD[3][4];
namespace one
{
    void enter()
    {
        std::cout << "Enter Elements of 1D array: \n";
        int e;
        for (int i = 0; i < 9; i++)
        {
            std::cin >> oneD[i];
        }
    }
    void print()
    {
        std::cout << "Elements of 1D Array at Index which is a multiple of 3: \n";

        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0)
                std::cout << oneD[j] << std::endl;
        }
    }
}

namespace two
{
    void enter()
    {
        std::cout << "Enter Elements of 2D array: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                std::cin >> twoD[i][j];
            }
        }
    }
    void print()
    {
        std::cout << "Elements of 2D Array at Index which is a multiple of 3: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (j % 3 == 0)
                    std::cout << twoD[i][j] << std::endl;
            }
        }
    }
}

int main()
{
    two::enter();
    one::enter();
    two::print();
    one::print();
    return 0;
}