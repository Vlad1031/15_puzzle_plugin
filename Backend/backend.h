#ifndef BACKEND_H
#define BACKEND_H

#include <QAbstractListModel>
#include <QList>
using namespace std;

class Backend : public QAbstractListModel
{
    Q_OBJECT
    Q_DISABLE_COPY(Backend)

public:
    explicit Backend(QObject *parent = nullptr);
    ~Backend() override;

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;

    Q_INVOKABLE void shaffle();
    Q_INVOKABLE bool BoardValid() const;
    int FindZero() const;
    Q_INVOKABLE bool neighboring(int from, int to);
    Q_INVOKABLE bool move(int from);
    Q_INVOKABLE bool win();
private:
    QList<int> m_board;
};

#endif // BACKEND_H
