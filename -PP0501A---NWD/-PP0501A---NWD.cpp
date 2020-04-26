#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        std::cin >> a >> b;
        while (a != b)
        {
            if (a > b)
            {
                 a -= b;
            }
            else
            {
                 b -= a;
            }
           
        } std::cout << a << "\n";
        std::cout << std::endl;
    }
    return 0;
}

