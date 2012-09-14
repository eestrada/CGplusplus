#if !defined(CGATTRIB_HPP)
#define CGATTRIB_HPP
#include <string>

namespace cgpp
{
    class cgppattrib
    {
        public:
            cgppattrib(){}
            ~cgppattrib(){}
            
            /*Return this attribute's name.*/
            virtual std::string getName(void) = 0;

            /*Return this attribute's data type(e.g. int, float, etc.).*/
            virtual std::string getType(void) = 0;

            /*Returns value at index i as a string.*/
            virtual std::string operator[](int i) = 0;
    };
}

#endif