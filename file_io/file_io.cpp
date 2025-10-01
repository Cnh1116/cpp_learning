#include <iostream>
#include <fstream>
#include <sys/stat.h>

void ArgumentsValid(int argc, char *argv[])
{
    u_int args_allowed = 1;

    if (args_allowed != (argc - 1))
    {
        std::cout << "USAGE: ./file_io.exe <file_path>";
        exit(1);
    }

    const char *file_path = argv[1];
    struct stat file_data;

    if ((stat(file_path, &file_data)) != 0)
    {
        std::cout << "File path DNE exist." << std::endl;
        exit(1);
    }

    if(file_data.st_mode & S_IFDIR)
    {
        std::cout << "File path is a folder, must be a file." << std::endl;
        exit(1);
    }

}

int main(int argc, char *argv[])
{
    
    ArgumentsValid(argc, argv);


    exit(0);

}