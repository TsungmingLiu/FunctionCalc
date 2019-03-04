// in Rule.hpp:
#include <map>
#include <utility>      // std::pair
#include <iostream>

// Rule Class of Rules
class Rule{
        const std::string ruleName;
    public:
        Rule(std::string name): ruleName(name) { };
        std::string getName() { return ruleName; }
        virtual void exec(std::string) = 0;
};

struct RuleFactory {
        typedef std::map<std::string, Rule*> map_type;

        static Rule * createInstance(std::string const& s) {
            map_type::iterator it = getMap()->find(s);
            if(it == getMap()->end())
                // SHOULD THROW EXCEPTION HERE
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

        void addEntry(Rule* rule){
            (*getMap())[ rule->getName() ] = rule;
        }

    private:
        static map_type * map;
};

// Register Helper
template<typename T>
struct DerivedRegister: RuleFactory { 
    DerivedRegister(std::string const& s) {
        getMap()->insert(std::make_pair(s, new T));
    }

    DerivedRegister(){
        addEntry(new T);
    }
};