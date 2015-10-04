#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMainWindow>
#include <QModelIndex>
#include <QMenu>

#include "ui_mainwindow.h"
#include "actiongroups.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
	Q_OBJECT
public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	QDir scriptsDir;
	QFileInfo currentFileInfo;
	QFile currentFile;

    ActionGroup actionGroup;
    CheckGroup checkGroup;
    CompositeGroup compositeGroup;

signals:

public slots:
	void updateBehaviors();

private slots:
	void insertChildBehavior();
	void openFileDialog();
	void openDirDialog();
	//bool insertColumn(const QModelIndex &parent = QModelIndex());
	//void insertRow();
	//bool removeColumn(const QModelIndex &parent = QModelIndex());
	//void removeRow();
};

#endif // MAINWINDOW_H