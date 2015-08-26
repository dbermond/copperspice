/***********************************************************************
*
* Copyright (c) 2012-2015 Barbara Geller
* Copyright (c) 2012-2015 Ansel Sermersheim
* Copyright (c) 2012-2014 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
*
* This file is part of CopperSpice.
*
* CopperSpice is free software: you can redistribute it and/or 
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with CopperSpice.  If not, see 
* <http://www.gnu.org/licenses/>.
*
***********************************************************************/

#ifndef QMacCOCOAVIEWCONTAINER_MAC_H
#define QMacCOCOAVIEWCONTAINER_MAC_H

#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class QMacCocoaViewContainerPrivate;

class Q_GUI_EXPORT QMacCocoaViewContainer : public QWidget
{
   GUI_CS_OBJECT(QMacCocoaViewContainer)

 public:
   QMacCocoaViewContainer(void *cocoaViewToWrap, QWidget *parent = 0);
   virtual ~QMacCocoaViewContainer();

   void setCocoaView(void *cocoaViewToWrap);
   void *cocoaView() const;

 private:
   Q_DECLARE_PRIVATE(QMacCocoaViewContainer)
};

QT_END_NAMESPACE

#endif // QCOCOAVIEWCONTAINER_H
