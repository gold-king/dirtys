#!/usr/bin/env perl

print "Include library directory: \n";

for my $path (@INC) {
    print "$path\n";
}

print "------------------------------\n";
for my $k (keys %INC) {
    print "$k => $INC{$k}";
}
print "Signal: \n". join(' ', sort(keys(%SIG)));
