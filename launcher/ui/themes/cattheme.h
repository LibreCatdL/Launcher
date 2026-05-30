#pragma once

#include <QString>
#include <QMap>
#include <QColor>

class Theme {
public:
    Theme();

    QString name;
    QString widgets;
    QString qssFilePath;

    QMap<QString, QColor> colors;

    int fadeAmount;
    QColor fadeColor;

    QColor getColor(const QString& key) const;
};
