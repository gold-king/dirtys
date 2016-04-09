#!/usr/bin/env python
from os.path import basename, isdir
from os      import listdir
from glob    import glob

cabal_path  = '/home/gk/.cabal/lib/x86_64-linux-ghc-7.10.3/*'
record_file = '/home/gk/cblpkg'

fd = open(record_file, 'w+')
print('##################################################', file=fd)
[print(basename(ff), file=fd) for ff in glob(cabal_path) if isdir(ff)]
print('##################################################', file=fd)
fd.close()