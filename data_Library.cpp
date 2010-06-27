#include "data_Library.h"

QString Library::path() const
{
    return _path;
}

void Library::setPath(const QString &path)
{
    _path = path;
}
