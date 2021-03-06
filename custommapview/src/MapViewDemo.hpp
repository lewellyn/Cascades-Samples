/* Copyright (c) 2012 Research In Motion Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef MAPVIEWDEMO_HPP
#define MAPVIEWDEMO_HPP

#include <QObject>
#include <QVariant>

namespace bb {
namespace cascades {
class Application;
}
}

class QPoint;

/*!
 * @brief Application pane object
 *
 * Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class MapViewDemo: public QObject
{
    Q_OBJECT

public:
    MapViewDemo(bb::cascades::Application *app);

    Q_INVOKABLE QVariantList worldToPixelInvokable(QObject* mapObject, double latitude, double longitude) const;
    Q_INVOKABLE void updateMarkers(QObject* mapObject, QObject* containerObject) const;

private:
    QPoint worldToPixel(QObject* mapObject, double latitude, double longitude) const;
};

#endif
