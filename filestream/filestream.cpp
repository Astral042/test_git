#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("test.txt");
    cout << "Writing something to file" << endl;
    cin.getline(data, 100);

    outfile << data << endl;

    outfile.close();

    ifstream infile;
    infile.open("text.txt");

    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
    return 0;
}