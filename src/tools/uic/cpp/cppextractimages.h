/***********************************************************************
*
* Copyright (c) 2012-2021 Barbara Geller
* Copyright (c) 2012-2021 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

#ifndef CPPEXTRACTIMAGES_H
#define CPPEXTRACTIMAGES_H

#include "treewalker.h"
#include <QDir>

QT_BEGIN_NAMESPACE

class QTextStream;
class Driver;
class Uic;

struct Option;

namespace CPP {

class ExtractImages : public TreeWalker
{
 public:
   ExtractImages(const Option &opt);

   void acceptUI(DomUI *node) override;
   void acceptImages(DomImages *images) override;
   void acceptImage(DomImage *image) override;

 private:
   QTextStream *m_output;
   const Option &m_option;
   QDir m_imagesDir;
};

} // namespace CPP

QT_END_NAMESPACE

#endif // CPPEXTRACTIMAGES_H
