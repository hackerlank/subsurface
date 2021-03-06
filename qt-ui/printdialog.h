#ifndef PRINTDIALOG_H
#define PRINTDIALOG_H

#include <QDialog>
#include <QPrinter>
#include "../display.h"
#include "printoptions.h"
#include "printlayout.h"

// should be based on a custom QPrintDialog class
class PrintDialog : public QDialog {
Q_OBJECT

public:
	static PrintDialog *instance();
	void runDialog();
	struct options printOptions;

private:
	explicit PrintDialog(QWidget *parent = 0, Qt::WindowFlags f = 0);
	PrintOptions *optionsWidget;
	PrintLayout *printLayout;
	QPrinter printer;

private slots:
	void printClicked();
	void onPaintRequested(QPrinter *);
};

#endif
