#include "include/vec3d.h"

/****************************************************************
 * This file is distributed under the following license:
 *
 * Copyright (C) 2017, Bernd Stramm

This is free software: you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as
published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Affero General Public License for more details.

You should have received a copy of the GNU Affero General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

 ****************************************************************/

#include <QString>
#include <QDebug>
#include <stdio.h>

namespace deliberate {

Vec3D Vec3D::fromString(const QString &s)
{
  qreal qx, qy, qz;
  char pat[256]="(deliberate::Vec3D %lf,%lf,%lf)";
  int convs = sscanf (s.toLocal8Bit().data(),pat,&qx,&qy,&qz);
  if (convs != 3) {
    qDebug() << "convs is " << convs;
    return Vec3D();
  } else {
    qDebug() << "convs is " << convs;
    return Vec3D(qx,qy,qz);
  }
}

} // namespace

