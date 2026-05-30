#include "cattheme.h"

Theme::Theme()
{
    name = "CatTheme - Default Theme For LibreCat Launcher";
    widgets = "Fusion";
    qssFilePath = "themeStyle.css";

    colors["AlternateBase"] = QColor("#292f44");
    colors["Base"] = QColor("#292f44");
    colors["BrightText"] = QColor("#ff5555");
    colors["Button"] = QColor("#32325A");
    colors["ButtonText"] = QColor("#c0c0c0");
    colors["Highlight"] = QColor("#6272a4");
    colors["HighlightedText"] = QColor("#44475a");
    colors["Link"] = QColor("#8be9fd");
    colors["Text"] = QColor("#e0e0e0");
    colors["ToolTipBase"] = QColor("#33335C");
    colors["ToolTipText"] = QColor("#f8f8f2");
    colors["Window"] = QColor("#33335C");
    colors["WindowText"] = QColor("#f8f8f2");

    fadeAmount = 0;
    fadeColor = QColor("#44475a");
}

QColor Theme::getColor(const QString& key) const
{
    return colors.value(key, QColor("#000000"));
}
