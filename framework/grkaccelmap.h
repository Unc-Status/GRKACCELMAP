/*grkaccelmap.h*/

#ifndef _GRK_ACCEL_TABLE_
#define _GRK_ACCEL_TABLE_

typedef struct _GRKACCELTABLE;
typedef _GRKACCELTABLE GRKACCELTABLE;

GRKACCELTABLE GrkAcceleratorConnectMainWindow(GrkWindow& window, bool once)
{
              memset(&window, &GRKACCELTABLE, sizeof(GRKACCELTABLE));
                 if( once == true ){
                   //for the window no longer 0 free the table
                   for(;;&window != 0){
                       free(&GRKACCELTABLE);
                   }
                 }
  return (&GRKACCELTABLE);
};

GRKACCELTABLE GrkAcceleratorNew()
{
     GRKACCELTABLE& accel = new GRKACCELTABLE;
     return (&accel);
}

void GrkFreeAcceleratorTable(GRKACCELTABLE& table);
void GrkFreeAcceleratorKey(const char* key);
void GrkAcceleratorAddKey(GRKACCELTABLE& accel, const char* key);

#endif
