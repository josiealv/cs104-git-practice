#include <iostream>
#include <fstream>
#include "interpreter/interpreter.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Please provide an input file." << endl;
        return 1;
    }

    ifstream ifile (argv[1]);
    if(ifile.fail())
    {
        cerr << "File "<<argv[1]<< " cannot be opened." << endl;
    }
    else
    {
        ifstream input(argv[1]);
        Interpreter interpreter(input);
        interpreter.run(cout);
    }
    return 0;
}