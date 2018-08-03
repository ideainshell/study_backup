#ifndef TESTONE_H_
#define TESTONE_H_
class testBase
{
public:
        testBase(){}
        virtual ~testBase(){}
        virtual void display() = 0;
};
 
typedef testBase* create_t();
typedef void destroy_t(testBase *p);
#endif

