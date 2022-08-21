VoltPotCoin Core version *v2.0.1* is now available from:  <https://github.com/ekkakon/vpcpos/releases>

This is a new revision version release, including various bug fixes and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github: <https://github.com/ekkakon/vpcpos/issues>


Recommended Update
==============

VoltPotCoin Core v2.0.1 is NOT a mandatory update, and user can choose to stay with v2.0.0/v2.0.1 if they wish. However, v2.0.2 does contain minor bug fixes and performance improvements to address feedback from the v1.3.0/v1.3.1 versions.

How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/VoltPotCoin-Qt (on Mac) or voltpotcoind/voltpotcoin-qt (on Linux).


Compatibility
==============

VoltPotCoin Core is extensively tested on multiple operating systems using the Linux kernel, macOS 10.10+, and Windows 7 and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support), No attempt is made to prevent installing or running the software on Windows XP, you can still do so at your own risk but be aware that there are known instabilities and issues. Please do not report issues about Windows XP to the issue tracker.

Apple released it's last Mountain Lion update August 13, 2015, and officially ended support on [December 14, 2015](http://news.fnal.gov/2015/10/mac-os-x-mountain-lion-10-8-end-of-life-december-14/). VoltPotCoin Core software starting with v3.2.0 will no longer run on MacOS versions prior to Yosemite (10.10). Please do not report issues about MacOS versions prior to Yosemite to the issue tracker.

VoltPotCoin Core should also work on most other Unix-like systems but is not frequently tested on them.


Notable Changes
==============

Bug Fixes
--------------

#### Double counting of delegated values

Fixed a bug where the values/amounts for cold staking delegations was being double counted in the UI's available/total balance calculation.

#### Incorrect sorting for transaction loading

Fixed a bug where The 20,000 limit for loading wallet transactions was incorrectly sorting these transactions, resulting in the **first** 20,000 transactions to be loaded instead of the **most recent** 20,000 transactions.

#### No information shown for spent cold stake delegations

Fixed a bug where the transaction record for spent cold stake delegations was showing as "No information".

GUI Changes
--------------

#### Add latest block height to top bar

The top bar's sync status button now shows the latest block height (number) when hovering over the button.

#### Coin Control copy functions

The coin control screen now allows for copying the various values to the OS clipboard

*v2.0.1* Change log
==============

Detailed release notes follow. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.

### Core

### GUI

### Wallet Code

### Documentation

### RPC Interface

## Credits

Thanks to everyone who directly contributed to this release:


As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/voltpotcoin-project-translations/), the QA team during Testing and the Node hosts supporting our Testnet.
