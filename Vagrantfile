#!/usr/bin/env ruby

$script = <<-'SCRIPT'
set -xe
export DEBIAN_FRONTEND=noninteractive
apt-get -qq update

# Install dependencies
apt-get install git cmake g++ binutils-dev

# Clone and build LLVM
git clone https://github.com/lmrs2/llvm.git -b ctchoose_38 --single-branch --depth 1
cd llvm/tools
git clone https://github.com/lmrs2/clang.git -b ctchoose_38 --single-branch --depth 1
cd ..
mkdir build
cd build
cmake -DLLVM_BINUTILS_INCDIR=/usr/include -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=Debug -DLLVM_TARGETS_TO_BUILD="X86" ../
cmake --build .
sudo make install

SCRIPT

$msg = <<~MSG
---------------------------------------------
LLVM has been installed.

Get ssh access to the VM with:
     vagrant ssh

The files in the current directory can be found
in the /vagrant directory
---------------------------------------------
MSG

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/trusty64"

  config.vm.post_up_message = $msg
end
