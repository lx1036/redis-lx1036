
#include <stdlib.h>
#include "adlist.h"
#include "zmalloc.h"


list *listCreate(void){
    if ((list = zmalloc(sizeof(*list))) == NULL) return NULL;


}
