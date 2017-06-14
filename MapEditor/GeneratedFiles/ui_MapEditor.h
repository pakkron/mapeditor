/********************************************************************************
** Form generated from reading UI file 'MapEditor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPEDITOR_H
#define UI_MAPEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapEditorClass
{
public:
    QWidget *centralWidget;
    QLabel *labelMessage;
    QGroupBox *groupBoxMapEditor;
    QGroupBox *groupBoxBlocks;
    QRadioButton *radioBtnBushes;
    QRadioButton *radioBtnWater;
    QRadioButton *radioBtnIce;
    QRadioButton *radioBtnArmorFull;
    QRadioButton *radioBtnArmorLeft;
    QRadioButton *radioBtnArmorRight;
    QRadioButton *radioBtnArmorTop;
    QRadioButton *radioBtnArmorBottom;
    QRadioButton *radioBtnBrickFull;
    QRadioButton *radioBtnBrickTop;
    QRadioButton *radioBtnBrickLeft;
    QRadioButton *radioBtnBrickRight;
    QRadioButton *radioBtnBrickBottom;
    QGroupBox *groupBox;
    QLineEdit *lineEditBlockName;
    QLabel *labelBlockName;
    QLineEdit *lineEditBlockPath;
    QLabel *labelBlockPath;
    QCheckBox *checkBoxPassability;
    QCheckBox *checkBoxUnderTank;
    QPushButton *pushButtonPath;
    QPushButton *pushButtonCreateBlock;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MapEditorClass)
    {
        if (MapEditorClass->objectName().isEmpty())
            MapEditorClass->setObjectName(QStringLiteral("MapEditorClass"));
        MapEditorClass->resize(856, 490);
        centralWidget = new QWidget(MapEditorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelMessage = new QLabel(centralWidget);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setGeometry(QRect(10, 420, 191, 16));
        groupBoxMapEditor = new QGroupBox(centralWidget);
        groupBoxMapEditor->setObjectName(QStringLiteral("groupBoxMapEditor"));
        groupBoxMapEditor->setGeometry(QRect(10, 10, 531, 401));
        groupBoxBlocks = new QGroupBox(groupBoxMapEditor);
        groupBoxBlocks->setObjectName(QStringLiteral("groupBoxBlocks"));
        groupBoxBlocks->setGeometry(QRect(10, 20, 511, 371));
        radioBtnBushes = new QRadioButton(groupBoxBlocks);
        radioBtnBushes->setObjectName(QStringLiteral("radioBtnBushes"));
        radioBtnBushes->setGeometry(QRect(20, 10, 91, 81));
        radioBtnBushes->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/blocks/bushes.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBushes->setIcon(icon);
        radioBtnBushes->setIconSize(QSize(64, 64));
        radioBtnWater = new QRadioButton(groupBoxBlocks);
        radioBtnWater->setObjectName(QStringLiteral("radioBtnWater"));
        radioBtnWater->setGeometry(QRect(210, 10, 91, 81));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/blocks/water.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnWater->setIcon(icon1);
        radioBtnWater->setIconSize(QSize(64, 64));
        radioBtnIce = new QRadioButton(groupBoxBlocks);
        radioBtnIce->setObjectName(QStringLiteral("radioBtnIce"));
        radioBtnIce->setGeometry(QRect(390, 10, 91, 81));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/blocks/ice.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnIce->setIcon(icon2);
        radioBtnIce->setIconSize(QSize(64, 64));
        radioBtnArmorFull = new QRadioButton(groupBoxBlocks);
        radioBtnArmorFull->setObjectName(QStringLiteral("radioBtnArmorFull"));
        radioBtnArmorFull->setGeometry(QRect(330, 110, 91, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/blocks/armor_full.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnArmorFull->setIcon(icon3);
        radioBtnArmorFull->setIconSize(QSize(64, 64));
        radioBtnArmorLeft = new QRadioButton(groupBoxBlocks);
        radioBtnArmorLeft->setObjectName(QStringLiteral("radioBtnArmorLeft"));
        radioBtnArmorLeft->setGeometry(QRect(270, 190, 91, 81));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/blocks/armor_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnArmorLeft->setIcon(icon4);
        radioBtnArmorLeft->setIconSize(QSize(64, 64));
        radioBtnArmorRight = new QRadioButton(groupBoxBlocks);
        radioBtnArmorRight->setObjectName(QStringLiteral("radioBtnArmorRight"));
        radioBtnArmorRight->setGeometry(QRect(390, 190, 91, 81));
        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/blocks/armor_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnArmorRight->setIcon(icon5);
        radioBtnArmorRight->setIconSize(QSize(64, 64));
        radioBtnArmorTop = new QRadioButton(groupBoxBlocks);
        radioBtnArmorTop->setObjectName(QStringLiteral("radioBtnArmorTop"));
        radioBtnArmorTop->setGeometry(QRect(390, 270, 91, 81));
        QIcon icon6;
        icon6.addFile(QStringLiteral("Resources/blocks/armor_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnArmorTop->setIcon(icon6);
        radioBtnArmorTop->setIconSize(QSize(64, 64));
        radioBtnArmorBottom = new QRadioButton(groupBoxBlocks);
        radioBtnArmorBottom->setObjectName(QStringLiteral("radioBtnArmorBottom"));
        radioBtnArmorBottom->setGeometry(QRect(270, 270, 91, 81));
        QIcon icon7;
        icon7.addFile(QStringLiteral("Resources/blocks/armor_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnArmorBottom->setIcon(icon7);
        radioBtnArmorBottom->setIconSize(QSize(64, 64));
        radioBtnBrickFull = new QRadioButton(groupBoxBlocks);
        radioBtnBrickFull->setObjectName(QStringLiteral("radioBtnBrickFull"));
        radioBtnBrickFull->setGeometry(QRect(80, 110, 91, 81));
        QIcon icon8;
        icon8.addFile(QStringLiteral("Resources/blocks/brick_full.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBrickFull->setIcon(icon8);
        radioBtnBrickFull->setIconSize(QSize(64, 64));
        radioBtnBrickTop = new QRadioButton(groupBoxBlocks);
        radioBtnBrickTop->setObjectName(QStringLiteral("radioBtnBrickTop"));
        radioBtnBrickTop->setGeometry(QRect(140, 270, 91, 81));
        QIcon icon9;
        icon9.addFile(QStringLiteral("Resources/blocks/brick_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBrickTop->setIcon(icon9);
        radioBtnBrickTop->setIconSize(QSize(64, 64));
        radioBtnBrickLeft = new QRadioButton(groupBoxBlocks);
        radioBtnBrickLeft->setObjectName(QStringLiteral("radioBtnBrickLeft"));
        radioBtnBrickLeft->setGeometry(QRect(20, 190, 91, 81));
        QIcon icon10;
        icon10.addFile(QStringLiteral("Resources/blocks/brick_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBrickLeft->setIcon(icon10);
        radioBtnBrickLeft->setIconSize(QSize(64, 64));
        radioBtnBrickRight = new QRadioButton(groupBoxBlocks);
        radioBtnBrickRight->setObjectName(QStringLiteral("radioBtnBrickRight"));
        radioBtnBrickRight->setGeometry(QRect(140, 190, 91, 81));
        QIcon icon11;
        icon11.addFile(QStringLiteral("Resources/blocks/brick_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBrickRight->setIcon(icon11);
        radioBtnBrickRight->setIconSize(QSize(64, 64));
        radioBtnBrickBottom = new QRadioButton(groupBoxBlocks);
        radioBtnBrickBottom->setObjectName(QStringLiteral("radioBtnBrickBottom"));
        radioBtnBrickBottom->setGeometry(QRect(20, 270, 91, 81));
        QIcon icon12;
        icon12.addFile(QStringLiteral("Resources/blocks/brick_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioBtnBrickBottom->setIcon(icon12);
        radioBtnBrickBottom->setIconSize(QSize(64, 64));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(550, 10, 291, 211));
        lineEditBlockName = new QLineEdit(groupBox);
        lineEditBlockName->setObjectName(QStringLiteral("lineEditBlockName"));
        lineEditBlockName->setGeometry(QRect(90, 20, 113, 20));
        labelBlockName = new QLabel(groupBox);
        labelBlockName->setObjectName(QStringLiteral("labelBlockName"));
        labelBlockName->setGeometry(QRect(10, 20, 61, 21));
        lineEditBlockPath = new QLineEdit(groupBox);
        lineEditBlockPath->setObjectName(QStringLiteral("lineEditBlockPath"));
        lineEditBlockPath->setGeometry(QRect(90, 50, 113, 20));
        labelBlockPath = new QLabel(groupBox);
        labelBlockPath->setObjectName(QStringLiteral("labelBlockPath"));
        labelBlockPath->setGeometry(QRect(10, 50, 71, 21));
        checkBoxPassability = new QCheckBox(groupBox);
        checkBoxPassability->setObjectName(QStringLiteral("checkBoxPassability"));
        checkBoxPassability->setGeometry(QRect(200, 110, 81, 17));
        checkBoxUnderTank = new QCheckBox(groupBox);
        checkBoxUnderTank->setObjectName(QStringLiteral("checkBoxUnderTank"));
        checkBoxUnderTank->setGeometry(QRect(200, 130, 91, 17));
        pushButtonPath = new QPushButton(groupBox);
        pushButtonPath->setObjectName(QStringLiteral("pushButtonPath"));
        pushButtonPath->setGeometry(QRect(210, 50, 75, 21));
        pushButtonCreateBlock = new QPushButton(groupBox);
        pushButtonCreateBlock->setObjectName(QStringLiteral("pushButtonCreateBlock"));
        pushButtonCreateBlock->setGeometry(QRect(90, 170, 111, 23));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 90, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 110, 82, 17));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 130, 82, 17));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(100, 110, 82, 17));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(100, 130, 82, 17));
        MapEditorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MapEditorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 856, 21));
        MapEditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MapEditorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MapEditorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MapEditorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MapEditorClass->setStatusBar(statusBar);

        retranslateUi(MapEditorClass);

        QMetaObject::connectSlotsByName(MapEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *MapEditorClass)
    {
        MapEditorClass->setWindowTitle(QApplication::translate("MapEditorClass", "MapEditor", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("MapEditorClass", "label", Q_NULLPTR));
        groupBoxMapEditor->setTitle(QApplication::translate("MapEditorClass", "Map editor", Q_NULLPTR));
        groupBoxBlocks->setTitle(QApplication::translate("MapEditorClass", "Blocks", Q_NULLPTR));
        radioBtnBushes->setText(QString());
        radioBtnBushes->setShortcut(QString());
        radioBtnWater->setText(QString());
        radioBtnIce->setText(QString());
        radioBtnArmorFull->setText(QString());
        radioBtnArmorLeft->setText(QString());
        radioBtnArmorRight->setText(QString());
        radioBtnArmorTop->setText(QString());
        radioBtnArmorBottom->setText(QString());
        radioBtnBrickFull->setText(QString());
        radioBtnBrickTop->setText(QString());
        radioBtnBrickLeft->setText(QString());
        radioBtnBrickRight->setText(QString());
        radioBtnBrickBottom->setText(QString());
        groupBox->setTitle(QApplication::translate("MapEditorClass", "Block editor", Q_NULLPTR));
        labelBlockName->setText(QApplication::translate("MapEditorClass", "Block name", Q_NULLPTR));
        labelBlockPath->setText(QApplication::translate("MapEditorClass", "Texture path", Q_NULLPTR));
        checkBoxPassability->setText(QApplication::translate("MapEditorClass", "Is passable", Q_NULLPTR));
        checkBoxUnderTank->setText(QApplication::translate("MapEditorClass", "Is under tank", Q_NULLPTR));
        pushButtonPath->setText(QApplication::translate("MapEditorClass", "Set path", Q_NULLPTR));
        pushButtonCreateBlock->setText(QApplication::translate("MapEditorClass", "Create block", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MapEditorClass", "full", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MapEditorClass", "left", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MapEditorClass", "bottom", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MapEditorClass", "right", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MapEditorClass", "top", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapEditorClass: public Ui_MapEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDITOR_H
