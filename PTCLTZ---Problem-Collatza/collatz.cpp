#include <iostream>
bool IsEven(int x)
{
    return (x % 2) == 0;
}
int GetNextTerm(int xn)
{
    if (IsEven(xn))
    {
        return xn / 2;
    }
    else
    {
        return 3 * xn + 1;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    int n,s;
    int counter;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        counter = 0;
        std::cin >> s;
        while (s != 1)
        {
            s = GetNextTerm(s);
            ++counter;
        }
        std::cout << counter << "\n";
    }
    std::cout << std::endl;
    return 0;
}
