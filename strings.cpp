#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    
    //ifstream f("exemplu.txt");
    string first_line,second_line;
    getline(cin,first_line);
    getline(cin,second_line);
    
    
    size_t found = -1;
    
    do {
        found = second_line.find(first_line,found+1);
        if(second_line[found+2] == '-' || second_line[found+2] == '_' || second_line[found+2] == '?' || second_line[found+2] == '!' || second_line[found+2] == ':'  || second_line[found+2] == ',' || second_line[found+2] == '.' )
        {
            
            second_line.erase(found,2);
        }
    } while (found != string::npos);
    cout<<second_line<<"\n";
    
}
