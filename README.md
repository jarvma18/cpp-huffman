# cpp-huffman

## compress

### inputs:

- file to compress

### outputs:

- compressed file

## decompress

### inputs:

- file to decompress

### outputs:

- decompressed file

## compressed file structure:

### name

- [original_name], no extension

### content

[last zeros][file extension][huffman tree source][compressed content][EOF]