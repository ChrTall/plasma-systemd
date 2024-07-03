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
#include "systemdprocess.h"

SystemDProcess::SystemDProcess(QObject *parent) : QProcess(parent) {
}

SystemDProcess::~SystemDProcess() {
}

bool SystemDProcess::isActive(const QString &name, bool userunit) {
    QStringList arguments;
    QString program;
    if(!userunit) {
        program = "sudo";
        arguments << "/bin/systemctl";
    } else {
        program = "/bin/systemctl";
        arguments << "--user";
    }
    arguments << "is-active" << name;
    start(program, arguments);
    waitForFinished();
    if(readAll() == "active\n") {
        return true;
    } else {
        return false;
    }
}

void SystemDProcess::start2(const QString &program, const QVariantList &arguments) {
        QStringList args;

        // convert QVariantList from QML to QStringList for QProcess

        for (int i = 0; i < arguments.length(); i++) {
            args << arguments[i].toString();
        }

        start(program, args);
}
