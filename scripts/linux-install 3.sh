#!/bin/bash
echo ""
echo "Dev-dependencies will now be installed for Ubuntu 18.04"
echo ""

sudo apt-get update && sudo apt-get upgrade -y

sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils python3 libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-test-dev libboost-thread-dev libboost-all-dev libboost-program-options-dev libminiupnpc-dev libzmq3-dev libprotobuf-dev protobuf-compiler unzip software-properties-common cmake -y

echo ""
echo "Installing Berkeley DB"
sudo add-apt-repository ppa:bitcoin/bitcoin -y

sudo apt-get update && sudo apt-get install libdb4.8-dev libdb4.8++-dev -y

echo ""
echo "Compiling..."
./autogen.sh && ./compile && make

echo ""
echo "Installation is now complete"
