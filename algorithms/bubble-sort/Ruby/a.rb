class Array
    def swap!(a, b)
        self[a], self[b] = self[b], self[a]
    end
end       

l = [1,2,3,4,5]
puts l
l.swap!(2,3)
puts "Swapping\n"
puts l

