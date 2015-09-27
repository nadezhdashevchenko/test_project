#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "td_string.h"

static const int16_t Magic_Signature =
    0x5444;

typedef struct _td_string_wrapper
{
    size_t length;
    int16_t magic;
} td_string_wrapper;

td_string td_string_create()
{

}

td_string td_string_create_with_string(td_string string)
{
    
}

void td_string_delete(td_string string)
{
    
}

size_t td_string_get_length(td_string string)
{
    
}

td_string td_string_combine(td_string string, td_string another_string)
{
    
  
}
