/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    RenderArea *renderArea;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnBackground;
    QPushButton *btnLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnHuygens;
    QPushButton *btnHypo;
    QPushButton *btnLine;
    QPushButton *btnCircle;
    QPushButton *btnEllipse;
    QPushButton *btnFancy;
    QPushButton *btnStarfish;
    QPushButton *btnCloud;
    QPushButton *btnCloud2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(337, 435);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));

        verticalLayout_2->addWidget(renderArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnBackground = new QPushButton(centralWidget);
        btnBackground->setObjectName(QStringLiteral("btnBackground"));

        horizontalLayout_4->addWidget(btnBackground);

        btnLineColor = new QPushButton(centralWidget);
        btnLineColor->setObjectName(QStringLiteral("btnLineColor"));

        horizontalLayout_4->addWidget(btnLineColor);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnAstroid = new QPushButton(centralWidget);
        btnAstroid->setObjectName(QStringLiteral("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnHuygens = new QPushButton(centralWidget);
        btnHuygens->setObjectName(QStringLiteral("btnHuygens"));

        verticalLayout->addWidget(btnHuygens);

        btnHypo = new QPushButton(centralWidget);
        btnHypo->setObjectName(QStringLiteral("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnLine = new QPushButton(centralWidget);
        btnLine->setObjectName(QStringLiteral("btnLine"));

        verticalLayout->addWidget(btnLine);

        btnCircle = new QPushButton(centralWidget);
        btnCircle->setObjectName(QStringLiteral("btnCircle"));

        verticalLayout->addWidget(btnCircle);

        btnEllipse = new QPushButton(centralWidget);
        btnEllipse->setObjectName(QStringLiteral("btnEllipse"));

        verticalLayout->addWidget(btnEllipse);

        btnFancy = new QPushButton(centralWidget);
        btnFancy->setObjectName(QStringLiteral("btnFancy"));

        verticalLayout->addWidget(btnFancy);

        btnStarfish = new QPushButton(centralWidget);
        btnStarfish->setObjectName(QStringLiteral("btnStarfish"));

        verticalLayout->addWidget(btnStarfish);

        btnCloud = new QPushButton(centralWidget);
        btnCloud->setObjectName(QStringLiteral("btnCloud"));

        verticalLayout->addWidget(btnCloud);

        btnCloud2 = new QPushButton(centralWidget);
        btnCloud2->setObjectName(QStringLiteral("btnCloud2"));

        verticalLayout->addWidget(btnCloud2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(centralWidget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setMaximum(200);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinInterval = new QDoubleSpinBox(centralWidget);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMaximumSize(QSize(60, 16777215));
        spinInterval->setMaximum(100);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(centralWidget);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnBackground->setText(QApplication::translate("MainWindow", "Background", 0));
        btnLineColor->setText(QApplication::translate("MainWindow", "Line Color", 0));
        btnAstroid->setText(QApplication::translate("MainWindow", "Astroid", 0));
        btnHuygens->setText(QApplication::translate("MainWindow", "Huygens", 0));
        btnHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", 0));
        btnLine->setText(QApplication::translate("MainWindow", "Line", 0));
        btnCircle->setText(QApplication::translate("MainWindow", "Circle", 0));
        btnEllipse->setText(QApplication::translate("MainWindow", "Ellipse", 0));
        btnFancy->setText(QApplication::translate("MainWindow", "Fancy", 0));
        btnStarfish->setText(QApplication::translate("MainWindow", "Starfish", 0));
        btnCloud->setText(QApplication::translate("MainWindow", "Cloud 1", 0));
        btnCloud2->setText(QApplication::translate("MainWindow", "Cloud 2", 0));
        label->setText(QApplication::translate("MainWindow", "Scale:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Interval Length:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Step Count:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
