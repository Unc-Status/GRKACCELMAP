/*grkaccelmap.h*/

#ifndef _GRK_ACCEL_TABLE_
#define _GRK_ACCEL_TABLE_

typedef struct _GRKACCELTABLE;
typedef _GRKACCELTABLE GRKACCELTABLE;

GRKACCELTABLE GrkAcceleratorConnectMainWindow(GrkWindow& window, bool once);

void GrkAcceleratorAddKey(GRKACCELTABLE& accel, const char* key);

#endif
