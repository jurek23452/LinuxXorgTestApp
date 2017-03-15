mkdir build
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP main.cpp -o "build/main.o"
g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP font.cpp -o "build/font.o"
g++  -o "excRun"  "build/main.o" "build/font.o"   -lX11
