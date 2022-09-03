// Copyright (c) 2019 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLVPCWIDGET_H
#define COINCONTROLVPCWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlVpcWidget;
}

class CoinControlVpcWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlVpcWidget(QWidget *parent = nullptr);
    ~CoinControlVpcWidget();

private:
    Ui::CoinControlVpcWidget *ui;
};

#endif // COINCONTROLVPCWIDGET_H
