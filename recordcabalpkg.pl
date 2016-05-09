#!/usr/bin/env perl
use strict;
use warnings;
use File::Basename qw /basename/;
use POSIX qw /strftime/;

my $cabal_path  = "/home/gk/.cabal/lib/x86_64-linux-ghc-7.10.3/";
my $record_file = "/home/gk/cblpkg";
my $date_time   = strftime "%F %I:%M:%S", localtime;

my @libs = <"$cabal_path/*">;
open(FD, '>>', $record_file)
    or die "Open ERROR: $!E";

print FD $date_time, "\n";
print FD "Installed Packages:\n";

for my $lib (@libs) {
    if (-d $lib) {
	print FD "  ". basename($lib). "\n";	
    }
}

print FD "-----------------------------------------------------------------\n\n";

close(FD) or die "Close ERROR: $!";
