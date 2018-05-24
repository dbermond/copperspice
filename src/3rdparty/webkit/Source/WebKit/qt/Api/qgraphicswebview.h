/*
    Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef QGraphicsWebView_h
#define QGraphicsWebView_h

#include "qwebkitglobal.h"
#include "qwebpage.h"
#include <qurl.h>
#include <qevent.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qpainter.h>
#include <qnetworkaccessmanager.h>

#if !defined(QT_NO_GRAPHICSVIEW)

class QWebPage;
class QWebHistory;
class QWebSettings;

class QGraphicsWebViewPrivate;

class QWEBKIT_EXPORT QGraphicsWebView : public QGraphicsWidget
{
    WEB_CS_OBJECT(QGraphicsWebView)

    WEB_CS_PROPERTY_READ(title, title)
    WEB_CS_PROPERTY_NOTIFY(title, titleChanged)
    WEB_CS_PROPERTY_READ(icon, icon)
    WEB_CS_PROPERTY_NOTIFY(icon, iconChanged)
    WEB_CS_PROPERTY_READ(zoomFactor, zoomFactor)
    WEB_CS_PROPERTY_WRITE(zoomFactor, setZoomFactor)

    WEB_CS_PROPERTY_READ(url, url)
    WEB_CS_PROPERTY_WRITE(url, setUrl)
    WEB_CS_PROPERTY_NOTIFY(url, urlChanged)

    WEB_CS_PROPERTY_READ(modified, isModified)
    WEB_CS_PROPERTY_READ(resizesToContents, resizesToContents)
    WEB_CS_PROPERTY_WRITE(resizesToContents, setResizesToContents)
    WEB_CS_PROPERTY_READ(tiledBackingStoreFrozen, isTiledBackingStoreFrozen)
    WEB_CS_PROPERTY_WRITE(tiledBackingStoreFrozen, setTiledBackingStoreFrozen)

    WEB_CS_PROPERTY_READ(renderHints, renderHints)
    WEB_CS_PROPERTY_WRITE(renderHints, setRenderHints)

public:
    explicit QGraphicsWebView(QGraphicsItem* parent = 0);
    ~QGraphicsWebView();

    QWebPage* page() const;
    void setPage(QWebPage*);

    QUrl url() const;
    void setUrl(const QUrl&);

    QString title() const;
    QIcon icon() const;

    qreal zoomFactor() const;
    void setZoomFactor(qreal);

    bool isModified() const;

    void load(const QUrl& url);
    void load(const QNetworkRequest& request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation,
             const QByteArray& body = QByteArray());

    void setHtml(const QString& html, const QUrl& baseUrl = QUrl());
    // FIXME: Consider rename to setHtml?
    void setContent(const QByteArray& data, const QString& mimeType = QString(), const QUrl& baseUrl = QUrl());

    QWebHistory* history() const;
    QWebSettings* settings() const;

    QAction* pageAction(QWebPage::WebAction action) const;
    void triggerPageAction(QWebPage::WebAction action, bool checked = false);

    bool findText(const QString& subString, QWebPage::FindFlags options = 0);

    bool resizesToContents() const;
    void setResizesToContents(bool enabled);

    bool isTiledBackingStoreFrozen() const;
    void setTiledBackingStoreFrozen(bool frozen);

    void setGeometry(const QRectF& rect) override;
    void updateGeometry() override;
    void paint(QPainter*, const QStyleOptionGraphicsItem* options, QWidget* widget = 0) override;
    QVariant itemChange(GraphicsItemChange change, const QVariant& value) override;
    bool event(QEvent*) override;

    QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override;

    QVariant inputMethodQuery(Qt::InputMethodQuery query) const override;

    QPainter::RenderHints renderHints() const;
    void setRenderHints(QPainter::RenderHints);
    void setRenderHint(QPainter::RenderHint, bool enabled = true);

public :
    WEB_CS_SLOT_1(Public, void stop())
    WEB_CS_SLOT_2(stop)
    WEB_CS_SLOT_1(Public, void back())
    WEB_CS_SLOT_2(back)
    WEB_CS_SLOT_1(Public, void forward())
    WEB_CS_SLOT_2(forward)
    WEB_CS_SLOT_1(Public, void reload())
    WEB_CS_SLOT_2(reload)

    WEB_CS_SIGNAL_1(Public, void loadStarted())
    WEB_CS_SIGNAL_2(loadStarted)
    WEB_CS_SIGNAL_1(Public, void loadFinished(bool un_named_arg1))
    WEB_CS_SIGNAL_2(loadFinished,un_named_arg1)

    WEB_CS_SIGNAL_1(Public, void loadProgress(int progress))
    WEB_CS_SIGNAL_2(loadProgress,progress)
    WEB_CS_SIGNAL_1(Public, void urlChanged(const QUrl & un_named_arg1))
    WEB_CS_SIGNAL_2(urlChanged,un_named_arg1)
    WEB_CS_SIGNAL_1(Public, void titleChanged(const QString & un_named_arg1))
    WEB_CS_SIGNAL_2(titleChanged,un_named_arg1)
    WEB_CS_SIGNAL_1(Public, void iconChanged())
    WEB_CS_SIGNAL_2(iconChanged)
    WEB_CS_SIGNAL_1(Public, void statusBarMessage(const QString & message))
    WEB_CS_SIGNAL_2(statusBarMessage,message)
    WEB_CS_SIGNAL_1(Public, void linkClicked(const QUrl & un_named_arg1))
    WEB_CS_SIGNAL_2(linkClicked,un_named_arg1)

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent*) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent*) override;
    void hoverMoveEvent(QGraphicsSceneHoverEvent*) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent*) override;

#ifndef QT_NO_WHEELEVENT
    void wheelEvent(QGraphicsSceneWheelEvent*) override;
#endif

    void keyPressEvent(QKeyEvent*) override;
    void keyReleaseEvent(QKeyEvent*) override;

#ifndef QT_NO_CONTEXTMENU
    void contextMenuEvent(QGraphicsSceneContextMenuEvent*) override;
#endif

    void dragEnterEvent(QGraphicsSceneDragDropEvent*) override;
    void dragLeaveEvent(QGraphicsSceneDragDropEvent*) override;
    void dragMoveEvent(QGraphicsSceneDragDropEvent*) override;
    void dropEvent(QGraphicsSceneDragDropEvent*) override;
    void focusInEvent(QFocusEvent*) override;
    void focusOutEvent(QFocusEvent*) override;
    void inputMethodEvent(QInputMethodEvent*) override;
    bool focusNextPrevChild(bool next) override;

    bool sceneEvent(QEvent*) override;

private:
    WEB_CS_SLOT_1(Private, void _q_doLoadFinished(bool success))
    WEB_CS_SLOT_2(_q_doLoadFinished)

    WEB_CS_SLOT_1(Private, void _q_pageDestroyed())
    WEB_CS_SLOT_2(_q_pageDestroyed)

    // we don't want to change the moc based on USE() macro, so this function is here
    // but will be empty if ACCLERATED_COMPOSITING is disabled
    WEB_CS_SLOT_1(Private, void syncLayers())
    WEB_CS_SLOT_2(syncLayers)

    WEB_CS_SLOT_1(Private, void _q_contentsSizeChanged(const QSize & un_named_arg1))
    WEB_CS_SLOT_2(_q_contentsSizeChanged)

    WEB_CS_SLOT_1(Private, void _q_scaleChanged())
    WEB_CS_SLOT_2(_q_scaleChanged)

    QGraphicsWebViewPrivate* const d;
    friend class QGraphicsWebViewPrivate;
};

#endif // QT_NO_GRAPHICSVIEW

#endif // QGraphicsWebView_h
