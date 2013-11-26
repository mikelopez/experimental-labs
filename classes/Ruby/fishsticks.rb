
class Rectangle
    def initialize(x, y)
        @width = x
        @height = y
    end
    def horizontal
        if @width > @height
            result = true
        else
            result = false
        end
        result
    end
    def square
        if @width == @height
            result = true
        else
            result = false
        end
    end
end

r = Rectangle.new(10, 20)
sq = Rectangle.new(20, 20)
h = Rectangle.new(40, 10)

puts r.horizontal()
puts r.square()

puts sq.horizontal()
puts sq.square()

puts h.horizontal()
puts h.square()

