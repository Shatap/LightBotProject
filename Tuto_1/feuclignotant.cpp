#include "feuclignotant.h"

FeuClignotant::FeuClignotant()
{

}

FeuClignotant::FeuClignotant(int delVert, int delOrange, int delRouge)
    :_delVert{delVert},_delOrange{delOrange},_delRouge{delRouge}
{

      _o=new Minuterie({100., 300., 200., 200.}, _delVert);
      _v=new Minuterie({200., 300., 200., 200.}, _delOrange);
      _r= new Minuterie({300., 300., 200., 200.}, _delRouge);



}

Minuterie FeuClignotant::getFeuVert()
{
    return *_v;
}

Minuterie FeuClignotant::getFeuOrange()
{
    return *_o;
}


Minuterie FeuClignotant::getFeuRouge()
{
    return *_r;
}

FeuClignotant::~FeuClignotant()
{


}


