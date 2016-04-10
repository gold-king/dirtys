#!/usr/bin/env perl

print "ENV: \n";

for my $key (sort(keys %ENV)) {
    printf "%24s: %s\n",$key, $ENV{$key};
}

print "\nINC: \n";

for my $path (@INC) {
    print "$path\n";
}

print "\nSIG: \n";
print join(' ', sort(keys(%SIG)));

print "\nThe PID: $$\n";
print "The UID: $<\n";