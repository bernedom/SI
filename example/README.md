<img align="right" src="../SI-logo.jpg">
# SI installation example 

This is an example application to demostrate/test the installation and usage of SI. See the [install section of SI](../README.md#Installing) how to install it.

## Building

```bash
mkdir build
cd build 
cmake .. -DCMAKE_INSTALL_PREFIX:PATH=${HOME}/SI-install
cmake --build . 
```
