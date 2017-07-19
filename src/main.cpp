#include "vec3d.h"
#include <QDebug>
#include <QVariant>
using namespace deliberate;
int
main (int argc, char *argv[])
{
  Vec3D v1(5,6,7);
  qDebug() << v1.x() << v1.y() << v1.z();

  QVariant vv;
  vv.setValue(v1);
  qDebug() << vv;
  qDebug() << "type id is " << QMetaTypeId<deliberate::Vec3D>();
  return 0;
}
