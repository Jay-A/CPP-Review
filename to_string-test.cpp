#include <string>
#include <sstream>

template < typename T > std::string to_string( const T& n ) {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

#include <iostream>
using namespace std;

int main()
{
    cout << to_string(12).length() << endl;
    cout << to_string(456.2) << endl;
}
