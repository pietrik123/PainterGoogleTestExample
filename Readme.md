# General information

Simple example of using Google Mocks with Google unit tests.

# Prerequisite

Requires installed git.

# Build and run

## Visual Studio

Open Folder and select the project directory. Hit "Select folder".

In project explorer open main CMakeLists.txt file.

The IDE will ask to generate CMake cache. Hit "Generate".

From top menu choose Build -> Build all... .

You may need to adjust CMake presets for your VS version. In CMakePresets.json,
for windows-base configuration please update `"generator": "Visual Studio 17 2022"`
section with relevant generator name.

Run exe files from the cmd line or VS IDE top bar.

## Linux

In project directory:
```
mkdir build
cd build
cmake ..
make
```

Run binaries from the cmd line.


