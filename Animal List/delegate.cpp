QLineDelegate::QLineDelegate(QTableView* tableView)
{
    int gridHint = tableView->style()->styleHint(QStyle::SH_Table_GridLineColor, new QStyleOptionViewItemV4());
    QColor gridColor = static_cast<QRgb>(gridHint);
    pen = QPen(gridColor, 0, tableView->gridStyle());
    view = tableView;
}

void QLineDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option,const QModelIndex& index)const
{
    QStyledItemDelegate::paint(painter, option, index);
    QPen oldPen = painter->pen();
    painter->setPen(pen);

    //draw verticalLine
    //painter->drawLine(option.rect.topRight(), option.rect.bottomRight());

    //draw horizontalLine
    painter->drawLine(option.rect.bottomLeft(), option.rect.bottomRight());
	
    //above code, line have breakpoint, the following code can solve it well 
    QPoint p1 = QPoint(itemOption.rect.bottomLeft().x()-1,itemOption.rect.bottomLeft().y());
    QPoint p2 = QPoint(itemOption.rect.bottomRight().x()+1,itemOption.rect.bottomRight().y());
    painter->drawLine(p1, p2);
    painter->setPen(oldPen);
}
