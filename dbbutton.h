#ifndef DBBUTTON_H
#define DBBUTTON_H

#include <QPushButton>

class DBButton : public QPushButton
{
	Q_OBJECT

public:
	DBButton(QWidget *parent = 0);
	~DBButton();
	void paintEvent(QPaintEvent *event);
	
private:
	
};

#endif // DBBUTTON_H
