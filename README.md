VoltPotCoin Core integration/staging repository
===============================================

## What is VoltPotCoin?
VoltPotCoin is an open source community-driven cryptocurrency initiated by VOLTPOT® ltd. in 2020.
VoltPotCoin (VPC) is intented to be used mainly in the renewable energy and electric mobility sectors as an alternative payment method for services and products.
The White Paper can be found here: https://voltpot.org/white-paper
VOLTPOT® platform and the available marketplace where VoltPotCoin (VPC) can be used for trading products/services are to be found here: https://voltpot.com

Latest releases can be found here: https://github.com/ekkakon/vpcpos/releases/latest

## Compiling from source
More info can be found in [doc folder](doc/README.md)
```
git clone https://github.com/ekkakon/vpcpos.git
```

#### Linux
```
cd vpcpos
chmod +x ./scripts/linux-install.sh
./scripts/linux-install.sh
```

#### Windows 64 cross-compiled with Linux (Ubuntu 18.04)
```
cd vpcpos
chmod +x ./scripts/crosscompile-win64.sh
./scripts/crosscompile-win64.sh
```

#### Windows 32bit cross-compiled with Linux (Ubuntu 18.04)
```
cd vpcpos
chmod +x ./scripts/crosscompile-win32.sh
./scripts/crosscompile-win32.sh
```

## License
VoltPotCoin Core is released under the terms of the MIT license. See [COPYING](https://github.com/ekkakon/vpcpos/blob/main/COPYING) for more information or see https://opensource.org/licenses/MIT.

## Development Process

The main branch is regularly built (see doc/build-*.md for instructions) and tested, but it is not guaranteed to be completely stable. [Tags](https://github.com/ekkakon/vpcpos/tags) are created regularly from release branches to indicate new official, stable release versions of VoltPotCoin Core.

The contribution workflow is described in [CONTRIBUTING.md](https://github.com/ekkakon/vpcpos/blob/main/CONTRIBUTING.md) and useful hints for developers can be found in [doc/developer-notes.md](https://github.com/ekkakon/vpcpos/blob/main/doc/developer-notes.md).

## Testing

Testing and code review is the bottleneck for development; we get more pull requests than we can review and test on short notice. Please be patient and help out by testing other people's pull requests, and remember this is a security-critical project where any mistake might cost people a lot of money.

## Automated Testing

Developers are strongly encouraged to write [unit tests](https://github.com/ekkakon/vpcpos/blob/main/src/test/README.md) for new code, and to submit new unit tests for old code. Unit tests can be compiled and run (assuming they weren't disabled in configure) with: make check. Further details on running and extending unit tests can be found in [/src/test/README.md](https://github.com/ekkakon/vpcpos/blob/main/src/test/README.md).

There are also regression and integration tests, written in Python. These tests can be run (if the test dependencies are installed) with: test/functional/test_runner.py`

The CI (Continuous Integration) systems make sure that every pull request is built for Windows, Linux, and macOS, and that unit/sanity tests are run automatically.

## Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the code. This is especially important for large or high-risk changes. It is useful to add a test plan to the pull request description if testing the changes is not straightforward.

## Translations

Changes to translations as well as new translations can be submitted to VoltPotCoin Core's Transifex page.

Translations are periodically pulled from Transifex and merged into the git repository. See the [translation process](https://github.com/ekkakon/vpcpos/blob/main/doc/translation_process.md) for details on how this works.

Important: We do not accept translation changes as GitHub pull requests because the next pull from Transifex would automatically overwrite them again.
