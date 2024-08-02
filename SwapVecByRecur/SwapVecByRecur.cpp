#include <iostream>
#include <vector>

void swapvec(std::vector<int>& vec, int* b)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                int t = vec[i];
                vec[i] = b[j];
                b[j] = t;
            }
        }
    }
}

int main()
{
    std::vector<int> a = { 1,2,3,4 };

    int b[] = { 2,4,6,8 };


    swapvec(a, b);
    std::cout << "Vec: ";
    for (int i = 0; i < 4; ++i)
    {
        std::cout << a[i] << " ";
    }

    std::cout << "\n" << "Arr: ";
    for (int i = 0; i < 4; ++i)
    {
        std::cout << b[i] << " ";
    }

    return 0;
}