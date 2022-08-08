
### PREPARE

```
mkdir build/
cd build/
conan install -c tools.system.package_manager:mode=install -c tools.system.package_manager:sudo=True ..
cd ..
```

### BUILD

```
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH="${TORCH_HOME};${CUDA_HOME}" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build
make -j$(nproc) -C build
```
### RUN

```
./build/bin/bdba-example2
```
