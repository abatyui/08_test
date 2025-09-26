
#include <iostream>
#include <vector>

void Insertion_sort(int *list, int len_a)
{
    int count = 0;
    int a, j;

    for (int i = 1; i < len_a; ++i)
    {

        a = *(list + i);
        j = i - 1;
        while (j >= 0 && *(list + j) > a)
        {
            count++;
            *(list + j + 1) = *(list + j);
            j = j - 1;
        }
        *(list + j + 1) = a;
        if (j >= 0)
        {
            count++;
        }
    }

    std::cout << count << std::endl;
}
