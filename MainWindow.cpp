#include "MainWindow.h"
#include "Dialog.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent)
{
	auto *button = new QPushButton("Click me", this);

	setCentralWidget(button);

	connect(button, &QPushButton::clicked, this, &MainWindow::onClicked);
}

void MainWindow::onClicked()
{
	Dialog().exec();
}
