#include <iostream>
int main()
{
    int testy;
    std::cin>>testy;
    while(testy--)
    {
        std::string word;
        std::cin >>word;
        for(int i=0;i<(word.size()/2);++i)
        {
            std::cout << word[i];
        }
        std::cout<<std::endl;
    }
    return 0;
}
