#include <iostream>

namespace primero {
    int x = 1;
}

namespace segundo {
    int x = 2;
}

int main()
{
    using namespace primero;
    using namespace std;
    
    
    cout<<x<<std::endl;
    return 0;
}
