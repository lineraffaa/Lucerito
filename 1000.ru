class Greeter
    def initialize(n)
        @n = n.capitalize
    end 

    def salute
        puts "Hello #{@n}!"
    end
    m = Greeter.new("world")
  
    m.salute

end