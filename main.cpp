#include <iostream>
#include <memory>

int main()
{
    unsigned n{5};   // array size
    auto pnumbers { std::make_unique<int[]>(n) };    // array of n elements

    // change and output all elements to the console
    for (unsigned i {}; i < n; i++)
    {
        pnumbers[i] = i+1;
        std::cout << "pnumbers[" << i <<"] = " << pnumbers[i] << std::endl;
    }
}
