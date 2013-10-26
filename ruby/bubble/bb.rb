# Sample demonstrating a bubble sort in Ruby
# Average O(n2)
#
strs = (0...512).map{ ('a'..'z').to_a[rand(26)] }.join
chars = strs.chars.to_a
chars.each_with_index do |x, index|
    j = 0
    while j < (chars.length - 1) do
        if chars[j] > chars[j+1] then
            chars[j], chars[j+1] = chars[j+1], chars[j]
        end
        j = j+1
    end
end
print chars
