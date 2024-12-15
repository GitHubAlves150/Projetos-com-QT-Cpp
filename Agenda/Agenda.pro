QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadastrar_no_banco.cpp \
    fm_editarcontato.cpp \
    fm_pesquisacontatos.cpp \
    fm_principal.cpp \
    main.cpp \
    janela.cpp

HEADERS += \
    cadastrar_no_banco.h \
    fm_editarcontato.h \
    fm_pesquisacontatos.h \
    fm_principal.h \
    janela.h

FORMS += \
    cadastrar_no_banco.ui \
    fm_editarcontato.ui \
    fm_pesquisacontatos.ui \
    fm_principal.ui \
    janela.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    IMG.qrc
