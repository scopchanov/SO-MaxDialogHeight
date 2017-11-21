#include "Dialog.h"
#include <QScrollArea>
#include <QVBoxLayout>
#include <QLabel>

Dialog::Dialog(QWidget *parent) :
	QDialog(parent)
{
	auto *layoutMain = new QVBoxLayout(this);
	auto *layoutBody = new QVBoxLayout();
	auto *scrollArea = new QScrollArea(this);
	auto *widget = new QWidget(this);
	auto *label = new QLabel("Lorem ipsum dolor sit amet, consetetur sadipscing elitr,"
							 " sed diam nonumy eirmod tempor invidunt ut labore et dolore"
							 " magna aliquyam erat, sed diam voluptua. At vero eos et accusam"
							 " et justo duo dolores et ea rebum. Stet clita kasd gubergren,"
							 " no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem"
							 " ipsum dolor sit amet, consetetur sadipscing elitr, sed diam"
							 " nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam"
							 " erat, sed diam voluptua. At vero eos et accusam et justo duo"
							 " dolores et ea rebum. Stet clita kasd gubergren, no sea takimata"
							 " sanctus est Lorem ipsum dolor sit amet.", this);

	label->setWordWrap(true);
	label->setFixedSize(300, 200);

	layoutBody->addWidget(label);

	widget->setLayout(layoutBody);

	scrollArea->setFrameStyle(QFrame::NoFrame);
	scrollArea->setAlignment(Qt::AlignLeft | Qt::AlignTop);
	scrollArea->setWidgetResizable(true);
	scrollArea->setWidget(widget);

	layoutMain->addWidget(scrollArea);
	layoutMain->setContentsMargins(0, 0, 0, 0);
	layoutMain->setSpacing(0);

	setMaximumHeight(widget->sizeHint().height());
}
