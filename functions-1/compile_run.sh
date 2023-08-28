# ~/Coding/cpp/nokia-trainings/functions-1 ./compile_run ~/Coding/cpp/nokia-trainings/functions-1/vid01 vid01

_pwd=$pwd
clear && cd $1 && cmake -S ./src -B ./build/ && cd ./build/ && make && cd ../ && ./build/$2
cd $_pwd