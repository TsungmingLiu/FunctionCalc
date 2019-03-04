// in base.hpp:
#include <map>
#include <utility>      // std::pair
#include <iostream>

class Base{
    private:
        Base();
    public:
        Base(std::string x){};
        virtual void init() = 0;
        virtual void exec() = 0;
};

struct BaseFactory {
    typedef std::map<std::string, Base*> map_type;

    static Base * createInstance(std::string const& s) {
        map_type::iterator it = getMap()->find(s);
        if(it == getMap()->end())
            return 0;
        return it->second;
    }

protected:
    static map_type * getMap() {
        // never delete'ed. (exist until program termination)
        // because we can't guarantee correct destruction order 
        if(!map) { map = new map_type; } 
        return map; 
    }

private:
    static map_type * map;
};

template<typename T>
struct DerivedRegister : BaseFactory { 
    DerivedRegister(std::string const& s) {
        getMap()->insert(std::make_pair(s, new T));
    }
};