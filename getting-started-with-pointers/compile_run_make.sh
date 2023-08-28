# ~/Coding/cpp/nokia-trainings/functions-1 ./compile_run_make.sh ~/Coding/cpp/nokia-trainings/functions-1/vid01 vid01
#
# OR
#
# ~/Coding/cpp/nokia-trainings/functions-1 ./compile_run_make.sh ~/Coding/cpp/nokia-trainings/functions-1/vid01 vid01 | c++filt -t
# c++filt -t: decode low-level name into user-level names (used for typeid(...).name decoding)

_pwd=$pwd
clear && cd $1 && mkdir -p build && cmake -S ./src -B ./build/ && cd ./build/ && make && cd ../ && clear && ./build/$2
cd $_pwd
