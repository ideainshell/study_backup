#include<stdio.h>
#include "testone.h"
 
class test1:public testBase
{
public:
        void display()
        {
                printf("display in test1\n");
        }
};
 
extern "C" testBase* create()
{
        return new test1;
} 
 
extern "C" void destroy(testBase *p)
{
        delete p;
}
