#include "blobDetection.h"
int main(int argc, char const *argv[])
{
    std::cout<<"Blob Detection Begins !! \n";
    // Check if there are command line arguments
    std::string inputPath;
    std::string outputPath;
    blobDetection::modes mod= (blobDetection::modes)1;
    
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " <argument1> <argument2> ..." << std::endl;
        return 1;  // Return an error code
    }

    // Print the program name
    std::cout << "Program name: " << argv[0] << std::endl;

    // Print each command line argument
    std::cout << "Arguments:" << std::endl;
    for (int i = 1; i < argc; ++i) {
        std::cout << "  Argument " << i << ": " << argv[i] << std::endl;
    }

    return 0;
}
