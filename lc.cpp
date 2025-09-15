#include <iostream>
#include <fstream>
#include <filesystem> 
using namespace std;
using namespace std::filesystem; // path

int count_lines(istream& in) {
    // this apporach itterates through the text, close to the one in https://www.gnu.org/software/cflow/manual/html_node/Source-of-wc-command.html
    int count = 0;
    char ch;
    while (in.get(ch)) {
        if (ch == '\n') // wc -l counts newline charcters not lines
            ++count;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        // stdin in case of no argument
        cerr << "input text Please..." << endl;
        cout << count_lines(cin) << endl;
    } 
    else {
        // Argument given, open that file
        path p{argv[1]};
        ifstream file(p, ios::binary);
        if (!file) {
            cerr << "bad filename " << p << endl;
            return 1;
        }
        cout << count_lines(file) << endl;
    }
    return 0;
}