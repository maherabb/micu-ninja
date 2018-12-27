#### Examples of using target_sources instead of setting variables for object libraries

1. Build libfonts and librw without target_sources  
mkdir build & cd build  
cmake ../ -DTARGET_SOURCES=OFF  
make

2. Build libfonts and librw with target_sources
mkdir build & cd build  
cmake ../ -DTARGET_SOURCES=ON  
make

Defined variables:
  * TARGET_SOURCES
  * TESTING
  * WINDOWS
  * MAC
