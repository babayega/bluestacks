#include <iostream>
#include "dtl-master/dtl/dtl.hpp"
#include <fstream>

int main()
{
    std::string temp_str, file1_cont, file2_cont;
    std::ifstream file1("/home/babayega/ClionProjects/bluestacks/hello.txt");
    while (std::getline(file1, temp_str))
        file1_cont += temp_str;
    std::ifstream file2("/home/babayega/ClionProjects/bluestacks/hello1.txt");
    while (std::getline(file2, temp_str))
        file2_cont += temp_str;
    dtl::Diff<char , std::string > d(file1_cont,file2_cont);
    d.compose();
    std::cout<<"\n"<<d.getEditDistance();

    return 0;
}