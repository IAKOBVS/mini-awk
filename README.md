# mini-awk
A useless awk that prints the nth space-seperated string from stdin
## Installation
```
gcc mini-awk.c -o /path/to/bins/mini-awk
```
## Usage:
```
mini-awk <nth string>
```
e.g.,
```
echo " hello world " | mini-awk 2
world
```
