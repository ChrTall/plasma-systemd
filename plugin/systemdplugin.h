/*
 * SPDX-FileCopyrightText: 2017 David Baum <david.baum@naraesk.eu>
 * SPDX-FileCopyrightText: 2023 Christian Tallner <chrtall@gmx.de>
 *
 * This file is part of plasma-yamaha.
 *
 * plasma-systemd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * plasma-systemd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with plasma-codeship.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SYSTEMDPLUGIN_H
#define SYSTEMDPLUGIN_H

#include <QQmlExtensionPlugin>

class QQmlEngine;
class SystemDPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // SYSTEMDPLUGIN_H
