#include "replace.hpp"
int     exit_error(int err)
{
    if (err == 1)
        std::cout << "WRONG NUMBER OF ARGUMENTS";
    else if (err == 2)
        std::cout << "FILE CAN'T BE OPEN FOR READING";
    else if (err == 3)
        std::cout << "FILE CAN'T BE OPEN FOR WRITING";
    std::cout << std::endl;
    return (-1);
}

void    replace(std::string filename, std::string s1, std::string s2)
{
    std::string read_file_content;
    std::string buff;
    std::string result;
    int n;
    int         pos;
    std::ifstream read_file(filename);
    if (!read_file)
        exit(exit_error(2));
    while (std::getline (read_file, buff))
        read_file_content += buff + "\n";
    pos = 0;
    n = 0;
    result = read_file_content;
    while (s1.length() > 0 && (pos = read_file_content.find(s1, pos)) != -1){
        result = result.substr(0, pos + n * (s2.length() - s1.length())) + s2
            + read_file_content.substr(pos + s1.length(), read_file_content.length());
        pos += s1.length();
        n++;
    }
    std::ofstream write_file(filename + ".replace");
    if (!write_file)
        exit(exit_error(3));
    write_file << result;
}

int     main(int argc, char **argv)
{
    if (argc != 4)
        exit(exit_error(1));
    replace(argv[1], argv[2], argv[3]);
    return (0);
}