# Sample demonstrating a bubble sort in Ruby
chars = (0...50).map{ ('a'..'z').to_a[rand(26)] }.join


for i in chars:
    while j < (chars.length - 1) do
        if chars[j] > chars[j+1] then
            chars[j], chars[j+1] = chars[j+1], chars[j]
        end
        j = j+1
    end
