#include "vec3d.h"
#include <QDebug>
#include <QVariant>
using namespace deliberate;
int
main (int argc, char *argv[])
{
  Vec3D v1(5.1,6.2,7.3);
  qDebug() << v1.x() << v1.y() << v1.z();

  QVariant vv = v1.toString();
  qDebug() <<  v1.toString() << " vv is " << vv;
  Vec3D v2 = Vec3D::fromString(vv.toString());
  qDebug() << v2.toString();
  return 0;
}
