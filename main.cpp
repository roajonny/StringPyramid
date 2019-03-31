#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//Trying the make my code more lightweight instead of using namespace std
int main()
{
    size_t level{ 0 };
    string input;
    int j{ 1 };
    cout << "Enter a string: ";
    getline(cin, input);
    while(level < input.length()) {
        size_t spaces{ input.length() - j }; //number of spaces needed
        for(size_t i{ 0 }; i < spaces; i++) {
            cout << " ";
        }
        if(level == 0) {                    //if level is 0, uses that as index and prints index of input string
            cout << input.at(level) << endl;
        } else {
            for(size_t j{ 0 }; j < level; j++) {    
                cout << input.at(j);                //else uses the index before level to print until that index
            }
            for(size_t k{ level }; k > 0; k--) {
                cout << input.at(k);                //then uses level index to start printing backwards
            }
            cout << input.at(0) << endl;            //this prints the last character (first of input) when printing backwards
        }
        level++;
        j++;
    }

    return 0;
}
