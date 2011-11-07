#ifndef GLIB_APP_H
#define GLIB_APP_H

#include "ut.h"

/////////////////////////////////////////////////
// Application
class TApp{
private:
  TCRef CRef;
private:
  PNotify Notify;
public:
  TApp(const PNotify& _Notify=NULL): Notify(_Notify){}
  virtual ~TApp(){}
  TApp(TSIn&){Fail;}
  static TPt<TApp> Load(TSIn&){Fail; return NULL;}
  void Save(TSOut&){Fail;}

  TApp& operator=(const TApp&){Fail; return *this;}

  friend class TPt<TApp>;
};
typedef TPt<TApp> PApp;


#endif
