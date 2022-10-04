# C(++) W/ CMake and Google Test using GitHub actions Template

![version](https://img.shields.io/github/v/release/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Release&style=flat-square)

![Maintained](https://img.shields.io/maintenance/yes/2022?label=Maintained&style=flat-square)
![Issues](https://img.shields.io/github/issues-raw/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Issues&style=flat-square)
[![Build](https://img.shields.io/endpoint.svg?url=https%3A%2F%2Factions-badge.atrox.dev%2Fatrox%2Fsync-dotenv%2Fbadge&label=Build&style=flat-square)](https://actions-badge.atrox.dev/TomVer99/repoName/Build)
[![Test](https://img.shields.io/endpoint.svg?url=https%3A%2F%2Factions-badge.atrox.dev%2Fatrox%2Fsync-dotenv%2Fbadge&label=Test&style=flat-square)](https://actions-badge.atrox.dev/TomVer99/C-CPP_CMake_GTest-GithubActions/Test)

![license](https://img.shields.io/github/license/TomVer99/C-CPP_CMake_GTest-GithubActions?color=blue&label=License&style=flat-square)

This template repository is a starting point for C/C++ projects using CMake and Google Test. It also includes a GitHub Actions workflow to build and test the project.

## Usage

To use this template, click on the "Use this template" button on the top right of the repository page. Then go through the steps to create your own repository. After this you should edit the CMake files described in [CMake](#CMake).

### CMake

#### Top CMake

In the main `CMakeLists.txt` file, you can set the following variables:

| Variable | Description | Default |
| --- | --- | --- |
| `ProjectName` | The name of the project | `CHANGE_ME` |
| `ProjectRunName` | The name of the executable | `CHANGE_ME_Run` |
| `ProjectTestName` | The name of the test executable | `CHANGE_ME_Test` |

The `ProjectRunName` and `ProjectTestName` will automatically be the same as `ProjectName` postfixed with `_Run` and `_Test` respectively.

#### Src CMake

In the `CMakeLists.txt` file located in the `src` folder, you add your files to the `Sources` and `Headers` variables.

#### Test CMake

In the `CMakeLists.txt` file located in the `test` folder, you add your test files to the `Sources` variable.

## Requirements

* CMake
* C/C++ Compiler
