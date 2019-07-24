/***********************************************************************
*
* Copyright (c) 2012-2019 Barbara Geller
* Copyright (c) 2012-2019 Ansel Sermersheim
*
* Copyright (C) 2015 The Qt Company Ltd.
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

#ifndef DIRECTSHOWAUDIOENDPOINTCONTROL_H
#define DIRECTSHOWAUDIOENDPOINTCONTROL_H

#include "qaudiooutputselectorcontrol.h"

#include <dshow.h>

class DirectShowPlayerService;

QT_USE_NAMESPACE

class DirectShowAudioEndpointControl : public QAudioOutputSelectorControl
{
   CS_OBJECT(DirectShowAudioEndpointControl)
 public:
   DirectShowAudioEndpointControl(DirectShowPlayerService *service, QObject *parent = nullptr);
   ~DirectShowAudioEndpointControl();

   QList<QString> availableOutputs() const;

   QString outputDescription(const QString &name) const;

   QString defaultOutput() const;
   QString activeOutput() const;

   void setActiveOutput(const QString &name);

 private:
   void updateEndpoints();

   DirectShowPlayerService *m_service;
   IBindCtx *m_bindContext;
   ICreateDevEnum *m_deviceEnumerator;

   QMap<QString, IMoniker *> m_devices;
   QString m_defaultEndpoint;
   QString m_activeEndpoint;
};

#endif
