#if !defined(CGATTRIB_HPP)
#define CGATTRIB_HPP
#include "cgtypedefs.hpp"
#include <string>

namespace cgpp
{

enum attrtype{null, bl, i8, ui8, i16, ui16, i32, ui32, i64, ui64, f16, f32, f64};

    class attr_base
    {
        protected:
            std::string name;
            attrtype type;
            uint64 length;
            
            /* Reduce duplicate code by putting constructor code in a function. */
            virtual void construct(const std::string &attrname, attrtype atype)
            {
                this->name = attrname;
                this->type = atype;
                this->length = 0;
            }

        public:
            attr_base()
            {
                this->construct("", null);
            }
            
            attr_base(std::string name)
            {
                this->construct(name, null);
            }
            
            ~attr_base(){}
            
            /* Return this attribute's name. */
            virtual std::string getName(void) = 0;

            /* Return this attribute's data type(e.g. int, float, string, etc.). */
            virtual std::string getType(void) = 0;

            virtual uint64 getLength(void) = 0;

    };
}

#endif
