class QLineDelegate : public QStyledItemDelegate
{
    public:
    QLineDelegate(QTableView* tableView);

    protected:
    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;

    private:
    QPen pen;
    QTableView* view;
};
