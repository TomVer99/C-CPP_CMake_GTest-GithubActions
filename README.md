# C(++) W/ CMake and Google Test using GitHub actions Template

![version](https://img.shields.io/github/v/release/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Release&style=flat-square)

![Maintained](https://img.shields.io/maintenance/yes/2022?label=Maintained&style=flat-square)
![Issues](https://img.shields.io/github/issues-raw/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Issues&style=flat-square)
[![Build](https://img.shields.io/endpoint.svg?url=https%3A%2F%2Factions-badge.atrox.dev%2Fatrox%2Fsync-dotenv%2Fbadge&label=Build&style=flat-square)](https://actions-badge.atrox.dev/TomVer99/repoName/Build)
[![Test](https://img.shields.io/endpoint.svg?url=https%3A%2F%2Factions-badge.atrox.dev%2Fatrox%2Fsync-dotenv%2Fbadge&label=Test&style=flat-square)](https://actions-badge.atrox.dev/TomVer99/C-CPP_CMake_GTest-GithubActions/Test)

![license](https://img.shields.io/github/license/TomVer99/C-CPP_CMake_GTest-GithubActions?color=blue&label=License&style=flat-square)

This template repository is a starting point for C/C++ projects using CMake and Google Test. It also includes a GitHub Actions workflow to build and test the project.

## Usage

To use this template, click on the "Use this template" button on the top right of the repository page. Then go through the steps to create your own repository. After this you should edit the CMake files described in [CMake](#CMake) and possibly other things listed down below.

**License**

This project is licensed under the MIT License. However, your project may desire a different license. To change the license, edit the [LICENSE](LICENSE) file.

**gitignore**

The [.gitignore](.gitignore) file provided should be sufficient for most projects. However, you may want to add/remove files to the ignore list.

### Building/Testing

___

#### VSCode

To run the project in VSCode, you need to install the [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools) extension. Then you can set your 'build type' (test or release) located on the status bar and build the project. You can also run the tests from the extension using CTest.

Both buttons should be located next to each other on the status bar.

___

<!-- #### Command line

<span style="color:red">**Not tested**</span>

<span style="color:red">Commands listed may be incorrect / missing</span>

To build the project, run the following commands:

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release

cmake --build build --config Release
```

If you want to run tests:

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug

cmake --build build --config Debug

ctest -C Debug
```

___ -->

### CMake

#### Top CMake

In the main [`CMakeLists`](CMakeLists.txt) file, you can set the following variables:

| Variable | Description | Default |
| --- | --- | --- |
| `ProjectName` | The name of the project | `CHANGE_ME` |
| `ProjectRunName` | The name of the executable | `CHANGE_ME_Run` |
| `ProjectTestName` | The name of the test executable | `CHANGE_ME_Test` |

The `ProjectRunName` and `ProjectTestName` will automatically be the same as `ProjectName` postfixed with `_Run` and `_Test` respectively.

#### Src CMake

In the [`CMakeLists`](src/CMakeLists.txt) file located in the `src` folder, you add your files to the `Sources` and `Headers` variables.

#### Test CMake

In the [`CMakeLists`](test/CMakeLists.txt) file located in the `test` folder, you add your test files to the `Sources` variable.

## Requirements

* CMake
* C/C++ Compiler
