QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fm_gestaocolaboradores.cpp \
    fm_gestaoestoque.cpp \
    fm_gestaovendas.cpp \
    fm_login_user.cpp \
    fm_nova_venda.cpp \
    main.cpp \
    fm_main.cpp

HEADERS += \
    Conexao.h \
    fm_gestaocolaboradores.h \
    fm_gestaoestoque.h \
    fm_gestaovendas.h \
    fm_login_user.h \
    fm_main.h \
    fm_nova_venda.h

FORMS += \
    fm_gestaocolaboradores.ui \
    fm_gestaoestoque.ui \
    fm_gestaovendas.ui \
    fm_login_user.ui \
    fm_main.ui \
    fm_nova_venda.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    mystyle.qss \
    style.qss

RESOURCES += \
    Arquivos_de_recursos.qrc \
    Arquivos_de_recursos.qrc \
    Arquivos_de_recursos.qrc \
    Arquivos_de_recursos.qrc \
    RecursosFile.qrc \
    RecursosFile.qrc
