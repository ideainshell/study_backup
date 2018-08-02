#include<stdio.h>
#include"testone.h"
#include<dlfcn.h>
 
int main()
{
        void *handle;
        char *error;
        handle = dlopen("../libsotest.so", RTLD_LAZY);
        if (!handle)
        {
                printf("%s\n", dlerror());
                return -1;
        }
        create_t* create = (create_t *)dlsym(handle, "create");
        if ( (error = dlerror()) != NULL)
        {
                printf("%s\n", error);
                return -1;
        }
        destroy_t* destroy = (destroy_t *)dlsym(handle, "destroy");
        if ( (error = dlerror()) != NULL)
        {
                printf("%s\n", error);
                return -1;
        }
        testBase *test = create();
        test->display();
        destroy(test);
 
        dlclose(handle);
        return 0;
}
