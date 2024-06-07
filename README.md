# C(++) W/ CMake and Google Test using GitHub actions Template

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%2300599C.svg?style=for-the-badge&logo=cmake&logoColor=white)
![GitHub Actions](https://img.shields.io/badge/github%20actions-%2300599C.svg?style=for-the-badge&logo=githubactions&logoColor=white)
![Google Test](https://img.shields.io/badge/google%20test-%2300599C.svg?style=for-the-badge&logo=google&logoColor=white)
![lcov](https://img.shields.io/badge/lcov-%2300599C.svg?style=for-the-badge&logo=gnu&logoColor=white)

---

![Release](https://img.shields.io/github/v/release/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Release&style=flat-square)
![GitHub commits since latest release](https://img.shields.io/github/commits-since/TomVer99/C-CPP_CMake_GTest-GithubActions/latest?style=flat-square)

![Maintained](https://img.shields.io/maintenance/yes/2024?label=Maintained&style=flat-square)
![Issues](https://img.shields.io/github/issues-raw/TomVer99/C-CPP_CMake_GTest-GithubActions?label=Issues&style=flat-square)
![GitHub Actions Workflow Status](https://img.shields.io/github/actions/workflow/status/TomVer99/C-CPP_CMake_GTest-GithubActions/CI.yml?style=flat-square&label=CI)
![GitHub Actions Workflow Status](https://img.shields.io/github/actions/workflow/status/TomVer99/C-CPP_CMake_GTest-GithubActions/Code-Hygiene.yml?style=flat-square&label=Code-Hygiene)

![license](https://img.shields.io/github/license/TomVer99/C-CPP_CMake_GTest-GithubActions?color=blue&label=License&style=flat-square)

## Description

This template is meant to be used as a starting point for C/C++ projects using CMake and Google Test.

It includes:

* CMake setup for building a library and an executable
* Google Test setup for unit testing
* GitHub Actions setup for CI
  * Only runs on PRs
* GitHub Actions setup for Code Hygiene based on the Google C++ Style Guide
  * Brackets on newlines
* Automatic Labeling of Pull Requests
* Code coverage analysis
  * Fails under 90%
  * Only counts /src/ files

## Requirements

* CMake
* GCC
* lcov
