#include <iostream>
#include <boost/filesystem.hpp>

int main()
{
    boost::filesystem::path p("/media/umang/Robro PD/");

    uintmax_t freeSpace = boost::filesystem::space(p).free;
    std::cout << freeSpace << " Free Bytes" << std::endl;
    std::cout << (float)freeSpace / (1 << 20) << " Free MB" << std::endl;
    std::cout << (float)freeSpace / (1 << 30) << " Free GB" << std::endl;

    uintmax_t availableSpace = boost::filesystem::space(p).available;
    std::cout << availableSpace << " Avail Bytes" << std::endl;
    std::cout << (float)availableSpace / (1 << 20) << " Avail MB" << std::endl;
    std::cout << (float)availableSpace / (1 << 30) << " Avail GB" << std::endl;

    uintmax_t totalSpace = boost::filesystem::space(p).capacity;
    std::cout << totalSpace << " Total Bytes" << std::endl;
    std::cout << (float)totalSpace / (1 << 20) << " Total MB" << std::endl;
    std::cout << (float)totalSpace / (1 << 30) << " Total GB" << std::endl;

    return 0;
}
