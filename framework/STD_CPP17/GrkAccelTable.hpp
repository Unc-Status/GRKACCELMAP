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
   const void GrkAccelConnectKey(const GrkAccelTable& table, const std::string& key);
   const GrkAccelTable& GrkAccelDisconnectTable(const GrkWindow& window);
   virtual void accelSignal() = 0;//*signals if key press happened*

};

#endif
