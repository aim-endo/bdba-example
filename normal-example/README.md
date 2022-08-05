
### BUILD

```
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH="${TORCH_HOME};${CUDA_HOME};${QT5_HOME}" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -S . -B build
make -j$(nproc) -C build
```
### RUN

```
./build/bdba-example1
```
