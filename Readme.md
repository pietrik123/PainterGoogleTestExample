# General information

Simple example of using Google Mocks with Google unit tests.

# Build

## Visual Studio

Open Folder and select the project directory. Hit "Select folder".

In project explorer open main CMakeLists.txt file.

The IDE will ask to generate CMake cache. Hit "Generate".

From top menu choose Build -> Build all... .

You may need to adjust CMake presets for your VS version. In CMakePresets.json,
for windows-base configuration please update `"generator": "Visual Studio 17 2022"`
section with relevant generator name.


