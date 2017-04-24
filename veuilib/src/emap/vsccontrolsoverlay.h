/** <!--
 *
 *  Copyright (C) 2017 veyesys support@veyesys.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  If you would like this software to be made available to you under an 
 *  alternate commercial license please email support@veyesys.com 
 *  for more information.
 *
 * -->
 */
#ifndef __VSC_ControlsOverlay_H__
#define __VSC_ControlsOverlay_H__

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QDebug>
#include <QMouseEvent>

class VSCControlsOverlay : public QWidget
{
    Q_OBJECT
public:
    explicit VSCControlsOverlay(QWidget *parent = 0);
    void updateSize();

protected:
    void paintEvent(QPaintEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    QPen pen;
    
signals:
    void exitClicked();
    void exitFullscreenClicked();
    void minimizeClicked();
    
public slots:
};

#endif // __VSC_ControlsOverlay_H__