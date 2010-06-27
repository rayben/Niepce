#ifndef DATA_LIBRARY_H
#define DATA_LIBRARY_H

#include "qdjango\QDjangoModel.h"
#include "qdjango\QDjango.h"

class Library : public QDjangoModel
{
    Q_OBJECT
    Q_PROPERTY(QString path READ path WRITE setPath)

public:
    QString path() const;
    void setPath(const QString &path);

private:
    QString _path;
};

#endif // DATA_LIBRARY_H
