#include <iostream>
#include "Name.h"
using namespace std;


class Alens : public Name {
public:

        Alens(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
        
private:
        string name;
};
