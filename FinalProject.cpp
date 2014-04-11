#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main(int argc, char * const argv[])
{
    int c;
    string filename;
    while ((c = getopt(argc, argv, "hf:")) != -1)
    {
        switch (c)
        {
            case 'h':
                cout << "Usage: ./final -f filename" << endl;
                return 0;
            case 'f':
                filename = optarg;
                break;
            case '?':
                cerr << "Invalid usage" << endl;
                return EXIT_FAILURE;
            case ':':
                cerr << "Invalid usage" << endl;
                return EXIT_FAILURE;
            default:
                cerr << "Invalid usage" << endl;
                return EXIT_FAILURE;
        }
    }







    


    return 0;
}
