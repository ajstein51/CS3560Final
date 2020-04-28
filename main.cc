/**
 * AJ Stein
 * 
 * Not even close to enough time to finish. Do not even have part b close to done, for some reason this simple program is giving me a brain block.
 * 
 */ 
#include <fstream>
#include <string>
#include <climits>
#include <stack>
#include <sstream>
#include <iostream>
#include <queue>
#include <vector>
#include <queue>
using namespace std;
// Functions:
    int countLine(ifstream &file);
    int countChar(string pname);

int main(int argc, char** argv){
    ifstream file("input.txt");
    
    int count = countLine(file);
    cout << "\nHere are how many lines are in the file: " << count << endl;
    file.close();
    return 0;
}


int countLine(ifstream &file){
    int count;
    string pname;
    while(getline(file, pname))
        count++;

    return count;
    
}