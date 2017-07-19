#ifndef VEC3D_H
#define VEC3D_H
#include <QVector3D>
#include <QString>
#include <QVariant>
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


namespace deliberate {
class Vec3D
{
public:
  Vec3D(const qreal x, const qreal y, const qreal z):m_val(x,y,z){}
  Vec3D(const QVector3D &val): m_val(val) { }
  Vec3D(const Vec3D &old): m_val(old.m_val){ }
  Vec3D():m_val(QVector3D()){}
  ~Vec3D(){}
  qreal x() { return m_val.x(); }
  qreal y() { return m_val.y(); }
  qreal z() { return m_val.z(); }
  void setX(qreal x) { m_val.setX(x); }
  void setY(qreal y) { m_val.setY(y); }
  void setZ(qreal z) { m_val.setZ(z); }

  QString toString() {
      return QString ("(%1,%2,%3)").arg(x()).arg(y()).arg(z());
     }

//  QVariant toVariant();
//  Vec3D(const QVariant & v);

private:

  QVector3D m_val;
};
} // namespace

Q_DECLARE_METATYPE(deliberate::Vec3D)

#endif // VEC3D_H
