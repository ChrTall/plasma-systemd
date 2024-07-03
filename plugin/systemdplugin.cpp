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

#include <QtQml>
#include "systemdplugin.h"
#include "systemdprocess.h"

void SystemDPlugin::registerTypes(const char *uri) {
    qmlRegisterType<Process>("Process", 1, 0, "Process");
}
