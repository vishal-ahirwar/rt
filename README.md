# rt

`rt` is a simple command-line tool written in C++ that executes a given command and measures the time taken for its execution. It is built using CMake and supports both Debug and Release builds.

## Features

- Executes a given command and measures the time taken.
- Displays version information and usage instructions.
- Supports both Debug and Release builds.

## Requirements

- CMake 3.6 or higher
- GCC or compatible C++ compiler
- Ninja build system (optional)

## Building the Project

To build the project, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/rt.git
    cd rt
    aura build
    ```

## Usage

To use the [rt](http://_vscodecontentref_/0) tool, run the following command:
```sh
./rt <command>

## Example
rt g++ main.cc -o app
This will compile main.cc and display the time taken for the compilation.

License
This project is licensed under the MIT License. See the LICENSE file for details.
