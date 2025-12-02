/*GrkAccelTable.hpp*/

#ifndef _GRK_ACCEL_TABLE_HPP_
#define _GRK_ACCEL_TABLE_HPP_

#include <string>

class GrkAccelTable
{
   public:
      GrkAccelTable();
      virtual ~GrkAccelTable();

   const GrkAccelTable& GrkAccelConnectWindow(const GrkWindow& window, bool once);

};

#endif
