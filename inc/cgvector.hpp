#include "cgtypedefs.hpp"

namespace cgpp
{

template <class T>
class vec_base 
{
private:
public:
    unsigned int size() = 0;
    T& operator[](unsigned int index) = 0;
};

};
