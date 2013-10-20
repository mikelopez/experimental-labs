/* Very basic function example */

#include <iostream>
#include <sstream>
#include <string>
#include <locale>
using namespace std;

// 26 letters in the alphabet.
const int N = 26;
const char alpha[] = "abcdefghijklmnopqrstuvwxyz";

string nametonum(string person_name) {
    // spell your name with numbers
    // by getting the index number
    // and adding +1 since we are 
    // using N-1
    string number_name;
    for (int i = 0; i < person_name.size(); i++) {
        for (int c = 0; c < N; c++) {
            if (person_name[i] == alpha[c]) {
                int plusone = (c + 1);
                string str_c;
                stringstream convert;
                convert << plusone;
                str_c = convert.str();
                number_name.append(str_c);
                cout << "...Appending " << (str_c) << endl;
            }
        }
    }
    return number_name;
}

int main() {
    string fname;
    string lname;

    string num_fname;
    string num_lname;

    cout << "Enter your first name (lowercase): ";
    cin >> fname;
    cout << endl;
    cout << "Enter your last name (lowercase): ";
    cin >> lname;
    cout << "String size " << fname.size() << " and " << lname.size() <<endl;
    cout << "First name: " << fname << " Last name: " << lname << endl;
    //return (your_name);
    //
    num_fname = nametonum(fname);
    num_lname = nametonum(lname);

    cout << "Your Name (First & Last): " << num_fname << " " << num_lname << endl;
    return 0;
}

