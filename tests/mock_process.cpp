#include <cassert>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        // deliberately will crash if argument 1 missing
        assert(false);
    }
    // Exit immediately if only 1 argument
    else if (argc == 2)
    {
        return atoi(argv[1]);
    }

    // If more than 1 argument, run until get EOF from input
    std::string s;
    std::getline(std::cin, s, '\0');

    // Crash on demand
    if (s == "crash")
    {
        assert(false);
    }

    // Print out what was supplied by stdin
    std::cout << s;
    return atoi(argv[1]);
}
