#include <iostream>

using namespace std;

int main(int argc, char** argv){
    if (argc > 1){
        
        long long int number;
        for (short i = 1; i < argc; i++){
            number = 0;
            if (argv[i][1] == 'b')  number |= stoull(argv[i], nullptr, 2);
            else if (argv[i][1] == 'x') number |= stoull(argv[i], nullptr, 16);
            else    number |= stoull(argv[i]);
            cout << dec << argv[i] << "  --  ";
            cout << hex;
            if (number < 0)
                cout << '-' << "0x" << abs(number);
            else
                cout << "0x" << number;
            cout << endl;
        }
    }
}