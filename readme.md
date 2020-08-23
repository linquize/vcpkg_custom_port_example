vcpkg custom port example
=======================

`git clone --recursive` this repository. There is a `vcpkg` submodoule.

### Windows with Visual Studio

System Requirement: MSVC 2019.6
- Desktop development with C++
- MSVC v142 - VS 2019 C++ x64/x86 build tools
- Windows 10 SDK
- C++ CMake tools for Windows

1. Copy `libexample1`, `libexample2` and `libexample3` to `vcpkg/ports`.
2. Open in Visual Studio 2019.
3. It will run CMake configure.
4. It will build `vcpkg.exe` if not yet.
5. It will build `libexample1`, `libexample2` and `libexample3` if out-of-date.
6. Then build the project.


## Linux

System Requirement:
- g++ 9+
- cmake 3.13+

Ubuntu
```bash
apt-get update && apt-get install -y tar zip unzip curl git g++ cmake ninja-build
```

OpenSUSE
```bash
zypper install -y tar gzip bzip2 xz zip unzip curl git gcc-c++ cmake ninja
```

Alpine
```bash
apk add tar zip unzip curl git g++ cmake ninja
export VCPKG_FORCE_SYSTEM_BINARIES=1
cd vcpkg
./bootstrap-vcpkg.sh -useSystemBinaries
```

Then use cmake to build
```bash
cp -pr libexample1 vcpkg/ports/
cp -pr libexample2 vcpkg/ports/
cp -pr libexample3 vcpkg/ports/
cmake -S . -B out/build -G Ninja
cmake --build out/build
```