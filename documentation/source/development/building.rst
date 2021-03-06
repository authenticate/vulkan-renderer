Building
========

CMake
-----

This project uses out of source builds. Except the documentation, which will create two folders in ``doc``, they are ignored by git.
There are three CMake targets.

- inexor-vulkan-renderer
    The main program and executable.
- inexor-vulkan-renderer-benchmark
    Benchmark the renderer.
- inexor-vulkan-renderer-tests
    Tests the renderer.
- inexor-vulkan-renderer-documentation
    Builds the documentation with Sphinx. Enable target creation with ``-DINEXOR_BUILD_DOC=ON``.

Available CMake options

- INEXOR_BUILD_BENCHMARKS
    Builds inexor-renderer-benchmarks.
    Default: ``OFF``
- INEXOR_BUILD_DOC
    To build the documentation enable it.
    Default: ``OFF``
- INEXOR_BUILD_EXAMPLE
    Builds inexor-renderer-example.
    Default: ``ON``
- INEXOR_BUILD_TESTS
    Builds inexor-renderer tests.
    Default: ``OFF``
- INEXOR_CONAN_PROFILE
    To adjust the conan profile, use ``-DCONNECTOR_CONAN_PROFILE=<name>``. The building type will be overriden by CMake.
    Default: ``default``
- INEXOR_USE_VMA_RECORDING
    Enables or disables VulkanMemoryAllocator's recording feature.
    Default: ``OFF``

.. note::
    When building a VS solution add ``--config Debug/Release`` to define the build type.

.. code-block:: shell

    # executing from project root assumed
    # Ninja generator and Debug type
    cmake -DINEXOR_CONAN_PROFILE=default -G Ninja -B./cmake-build-debug/ -DCMAKE_BUILD_TYPE=Debug ./
    # Ninja generator and Release type
    cmake -G Ninja -B./cmake-build-release/ -DCMAKE_BUILD_TYPE=Release ./
    # Create Visual Studio Solution
    cmake -G "Visual Studio 16 2019" -A x64 -B./cmake-build-debug-vs/ -DCMAKE_BUILD_TYPE=Debug ./
    # Build all targets
    cmake --build ./cmake-build-debug/

Building vulkan-renderer
------------------------

Windows
^^^^^^^

.. note::
    If you use the CMake GUI add `CMAKE_BUILD_TYPE` with value `Debug` or `Release`. `#228 <https://github.com/inexorgame/vulkan-renderer/issues/228>`__.

- Choose any IDE that CMake can generate a project map for. If in doubt use `Visual Studio 2019 <https://visualstudio.microsoft.com/>`__.
- Clone the source code. Free and good tools are `GitHub Desktop <https://desktop.github.com/>`__ or `GitKraken Git GUI <https://www.gitkraken.com/git-client>`__.
- Open CMake and select the root folder which contains ``CMakeLists.txt`` (not just ``src`` folder!).
- You can choose any location for the ``build`` folder.
- Click "Configure" and select ``Visual Studio 16 2019``. Click "Finish".
- CMake will now set up dependencies automatically for you. This might take a while. If this fails, you really should open a ticket!
- Click "Generate". You can now open the Visual Studio project file in your ``build`` folder.
- Please check that the root directory of the repository is set as working directory for debugging. Usually, CMake should take care of this already.
- You are now ready to start debugging! We want master branch to stay stable at all time.

Linux
^^^^^

Install dependencies and tools:

+--------+--------------------------------------+
| Ubuntu | .. code-block:: bash                 |
|        |                                      |
|        |     sudo apt install -y \            |
|        |       libglm-dev \                   |
|        |       libxcb-dri3-0 \                |
|        |       libxcb-present0 \              |
|        |       libpciaccess0 \                |
|        |       libpng-dev \                   |
|        |       libxcb-keysyms1-dev \          |
|        |       libxcb-dri3-dev \              |
|        |       libx11-dev  \                  |
|        |       libmirclient-dev \             |
|        |       libwayland-dev \               |
|        |       libxrandr-dev \                |
|        |       libxcb-ewmh-dev                |
|        |     sudo apt install -y \            |
|        |       cmake \                        |
|        |       ninja-build \                  |
|        |       clang-tidy \                   |
|        |       vulkan-sdk                     |
|        |     pip3 install \                   |
|        |       wheel \                        |
|        |       setuptools \                   |
|        |       conan                          |
+--------+--------------------------------------+
| Gentoo | .. code-block:: bash                 |
|        |                                      |
|        |     emerge \                         |
|        |      dev-util/cmake \                |
|        |      dev-util/conan \                |
|        |      dev-util/vulkan-headers \       |
|        |      dev-util/vulkan-tools \         |
|        |      dev-vcs/git \                   |
|        |      media-libs/vulkan-layers \      |
|        |      media-libs/vulkan-loader        |
|        |                                      |
|        |                                      |
|        | Install ninja build tool (optional): |
|        |                                      |
|        |                                      |
|        | .. code-block:: bash                 |
|        |                                      |
|        |                                      |
|        |     emerge dev-util/ninja            |
+--------+--------------------------------------+
| Other  | Planned. `We would love to see a     |
|        | pull request on this file if you get |
|        | it running on other                  |
|        | distributions.`__                    |
+--------+--------------------------------------+

__ https://github.com/inexorgame/vulkan-renderer/edit/master/documentation/source/development/building.rst

Clone the repository:

.. code-block:: bash

    git clone https://github.com/inexorgame/vulkan-renderer
    cd vulkan-renderer

Configure cmake:

.. note::

    - Only pass ``-GNinja`` if the ninja build tool is installed.

.. code-block:: bash

    cmake .. \
     -Bbuild \
     -DCMAKE_BUILD_TYPE=Debug \
     -GNinja

Build and run:

.. code-block:: bash

    cmake --build build --target inexor-vulkan-renderer-example
    ./build/bin/inexor-vulkan-renderer-example

Mac
^^^

Currently, we do not support Mac because it would require us to use `MoltenVK <https://github.com/KhronosGroup/MoltenVK>`__ to get Vulkan running on Mac OS.

Android
^^^^^^^

We might support Android in the future.
