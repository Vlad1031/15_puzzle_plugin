
my_build=build

if [ ! -d "$my_build" ]; then
    mkdir $my_build
fi

cd $my_build

qmake ../Backend
make

qmake ../15_puzzle_qml
make

./15_puzzle_qml
