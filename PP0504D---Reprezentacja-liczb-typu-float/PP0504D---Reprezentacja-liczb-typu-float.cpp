#include<iostream>
void printfloat(float liczba)
{
    for (int i = sizeof liczba-1; i>=0; --i){
        printf("%x ",(((const unsigned char*)&liczba)[i]));
    }
}

int main()
{
   
    int test;
    std::cin>>test;
    for(int i=0;i <test;++i)
    {
        printfloat();
    }

}
