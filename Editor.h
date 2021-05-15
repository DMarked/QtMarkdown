//
// Created by pikachu on 2021/3/19.
//

#ifndef QTMARKDOWNPARSER_EDITOR_H
#define QTMARKDOWNPARSER_EDITOR_H
#include "QtMarkdown_global.h"
#include <QScrollArea>
class EditorWidget;
class QTMARKDOWNSHARED_EXPORT Editor: public QScrollArea {
    Q_OBJECT
public:
    explicit Editor(QWidget *parent = nullptr);
    void loadFile(const QString& path);
    void reload();
    void setLinkClickedCallback(std::function<bool (QString)> fn);
private:
    EditorWidget *m_editorWidget;
};


#endif //QTMARKDOWNPARSER_EDITOR_H
