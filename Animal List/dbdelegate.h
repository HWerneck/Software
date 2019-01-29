class DBDelegate : public QStyledItemDelegate
{
    public:
    DBDelegate(QTableView* tableView);

    protected:
    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;

    private:
    QPen pen;
    QTableView* view;
};
