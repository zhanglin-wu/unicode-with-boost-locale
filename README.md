## C++ Examples for Unicode with Boost.locale

## Overview

The objective of these examples is to demonstrate how to handle unicode (UTF-8, etc.) string conversion and comparison.

## Build and run

#### Linux

```
git clone https://github.com/zhanglin-wu/unicode-with-boost-locale

cd examples

g++ -g -Wall -o string-converter string-converter.cpp -L/opt/boost/lib -lboost_system -lboost_locale -std=c++11

./string-converter
```

#### Docker container (Windows/macOS/Linux)

##### Prerequisites

- [Docker](https://docs.docker.com/get-docker/)
- [Visual Studio Code](https://code.visualstudio.com/)

- [VS Code Extension: Remote - Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers), for connecting with a docker container
- [VS Code Extension: C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools), for editing and debugging C++ code

##### Build and debug C++ program in docker

Open the folder in VS Code, execute the command "Remote-Containers: OpenFolder in Container...", and then wait for it to build and run the docker image.

Once you are inside the docker container, you can use the commans that you would use on a Linux system to build and run the examples.

See more details about how to run C++ programs in a docker container at: [cairomm-pangomm-on-linux-docker](https://github.com/zhanglin-wu/cairomm-pangomm-on-linux-docker).

### References

- [Boost.locale API Reference](https://www.boost.org/doc/libs/1_74_0/libs/locale/doc/html/index.html)
- [Learning Boost C++ Libraries](https://subscription.packtpub.com/book/application_development/9781783551217/1/ch01lvl1sec10/getting-started-with-boost-libraries)
- [Boost.local repository](https://github.com/boostorg/locale)
- [VS Code: Developing inside a Container](https://code.visualstudio.com/docs/remote/containers)