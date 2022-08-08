# シノプシス Black Duck 解析チェック

BDBA (black duck binary analysis) オプション実行用サンプル

## 1. normal-example

通常の cmake によるサンプル

### 明示的にリンクしているもの

- stdc++
- pthread … コード内では使用せず
- Qt5 … Core, Gui, Widgets, Concurrent を指定、ただし使っているのは Core のみ
- CUDA
- Torch
- OpenSSL

## 2. conan-example

conan パッケージマネージャを使ったサンプル

### 明示的にリンクしているもの

- stdc++
- pthread … コード内では使用せず
- Qt5 (conan で指定)
- CUDA 
- Torch
- OpenSSL (conan で指定)
