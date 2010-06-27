HEADERS += ui_preferences.h \
    preferencesform.h \
    niepcemain.h \
    librariesform.h \
    data_Library.h \
    qdjango/QDjangoWhere.h \
    qdjango/QDjangoScript.h \
    qdjango/QDjangoQuerySet_p.h \
    qdjango/QDjangoQuerySet.h \
    qdjango/QDjangoModel.h \
    qdjango/QDjango_p.h \
    qdjango/QDjango.h \
    filewatcher.h
SOURCES += preferencesform.cpp \
    niepcemain.cpp \
    main.cpp \
    librariesform.cpp \
    data_Library.cpp \
    qdjango/QDjangoWhere.cpp \
    qdjango/QDjangoQuerySet.cpp \
    qdjango/QDjangoModel.cpp \
    qdjango/QDjango.cpp \
    filewatcher.cpp
FORMS += preferencesform.ui \
    niepcemain.ui \
    librariesform.ui
QT += sql
QT += script
