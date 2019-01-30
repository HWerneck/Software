#include "dbbutton.cpp"

DBButton::DBButton(QWidget *parent) :
	QPushButton(parent)
{
}

DBButton::~DBButton()
{
}

void PushButton::paintEvent(QPaintEvent *event)
{
  /*QPushButton::paintEvent(event);
 
  QPixmap pixmap("image.png");
  QPoint point = (event->rect()).center();
  point.setX(point.x() - pixmap.rect().center().x());
  point.setY(point.y() - pixmap.rect().center().y());
 
  QPainter painter(this);
  painter.drawPixmap(point, pixmap);*/
}
