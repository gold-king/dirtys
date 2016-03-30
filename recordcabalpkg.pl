#!/usr/bin/env perl
use strict;
use warnings;
use File::Basename qw /basename/;

my $cabal_path  = "/home/ucombinator/.cabal/lib/x86_64-linux-ghc-7.10.3/";
my $record_file = "/home/ucombinator/cblpkg";

my @libs = <"$cabal_path/*">;
open(FD, '+>', $record_file)
    or die "Open ERROR: $!E";

print FD "--------------------------------------------------\n";

for my $lib (@libs) {
    if (-d $lib) {
	print FD basename($lib). "\n";
	
    }
}

print FD "--------------------------------------------------\n";

close(FD) or die "Close ERROR: $!";