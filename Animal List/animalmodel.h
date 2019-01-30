class AnimalModel : public QAbstractTableModel
{
	Q_OBJECT
	
public:
	AnimalModel(QObject *parent = 0);
	int rowCount(const QModelIndex &parent) const;
	int columnCount(const QModelIndex &parent) const;
	QVariant data(const QModelIndex &index, int role) const;
	QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
	QStringList animal_names;
	QVector<QIcon> animal_types;
};
