// add your code as appropriate 
#include <iostream>
#include <string>
#include "reservoir.h"


int main(){
    std::cout << "Testing get_east_storage" << std::endl;
    std::cout << get_east_storage("01/01/2018") << std::endl;
    std::cout << get_east_storage("03/15/2018") << std::endl;
    std::cout << get_east_storage("07/19/2018") << std::endl;
    std::cout << get_east_storage("12/30/2018") << std::endl;
    std::cout << "Testing get_min_east" << std::endl;
    std::cout << get_min_east() << std::endl;
    std::cout << "Testing get_max_east" << std::endl;
    std::cout << get_max_east() << std::endl;
    std::cout << "Testing compare_basins" << std::endl;
    std::cout << compare_basins("01/01/2018") << std::endl;//West
    std::cout << compare_basins("12/30/2018") << std::endl; //West
    std::cout << compare_basins("07/26/2018") << std::endl; //East
    std::cout << compare_basins("test_equal") << std::endl; //added entry test_equal at the end of the data sheet to test equal elevations
    
    return 0;
}
