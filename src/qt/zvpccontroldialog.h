// Copyright (c) 2017-2020 The PIVX developers
// Copyright (c) 2020-2022 The VoltPotCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZVPCCONTROLDIALOG_H
#define ZVPCCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zvpc/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZVpcControlDialog;
}

class CZVpcControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZVpcControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZVpcControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZVpcControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZVpcControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZVpcControlDialog(QWidget *parent);
    ~ZVpcControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZVpcControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZVpcControlWidgetItem;

private Q_SLOTS:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZVPCCONTROLDIALOG_H
