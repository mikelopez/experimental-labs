# Linear search sample in Ruby

a = *(0..253)
arr = a.map { |a| 5*a }

# search for something close to the end of the array
search_for = 1195
found = nil

arr.each_with_index do |x, index|
    if x == search_for
        found = index
    end
    #puts "arr[%s] = %s" % [index, x]
end

if found
    puts "%s was found at index %s" % [search_for, found]
else
    puts "Nothing found, try a multiple of 5"
end
