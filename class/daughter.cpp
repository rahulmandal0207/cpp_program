#include "mother.cpp"

class Daughter : public Mother
{
public:
    Daughter()
    {
        cout << "Daughter cons..." << endl;
    }
    ~Daughter()
    {
        cout << "Daughter dist..." << endl;
    }
};
