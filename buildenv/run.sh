docker run --rm -it -v "$(pwd)":/root/env myos-buildenv bash
echo "build done!"
sleep 3
qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso