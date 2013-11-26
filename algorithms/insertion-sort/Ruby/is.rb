# Sample demonstrating a insertion sort in Ruby
# Average O(n2) comparisons / swaps
#
strs = (0...8).map{ ('a'..'z').to_a[rand(26)] }.join
chars = strs.chars.to_a

print "|"
for i in chars do
    print "  %s  |" % i
end
print "\n\n"

for i in 1..(chars.length-1) do
    j = i
    puts "CHECKING INDEX %s AND %s" % [j, (j-1)]
    while j > 0 and chars[j] < chars[j-1] do
        puts "j > 0 and index %s less than index %s" % [j, (j-1)]
        chars[j], chars[j-1] = chars[j-1], chars[j]
        puts "SWAPPED"
        j = j-1
        puts "j is now %s" % j
    end
end
print chars
