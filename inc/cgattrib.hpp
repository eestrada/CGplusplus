#if !defined(CGATTRIB_HPP)
#define CGATTRIB_HPP
#include "cgtypedefs.hpp"
#include <string>

namespace cgpp
{
    class cgattrib
    {
        protected:
            std::string name;
            std::string type;
            uint64 length;
            
            /* Reduce duplicate code by putting constructor code in a function. */
            virtual void construct(std::string attrname, std::string attrtype)
            {
                this->name = attrname;
                this->type = attrtype;
            }

        public:
            cgattrib()
            {
                this->construct("", "");
            }
            
            cgattrib(std::string attrname)
            {
                this->construct(name, "");
            }
            
            ~cgattrib(){}
            
            /* Return this attribute's name. */
            virtual std::string getName(void) = 0;

            /* Return this attribute's data type(e.g. int, float, string, etc.). */
            virtual std::string getType(void) = 0;

            virtual uint64 getLength(void) = 0;

    };
}

#endif
