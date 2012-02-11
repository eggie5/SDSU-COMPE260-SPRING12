
n=3

#i need 3x3 array

(1..n).each do |i|
  (1..n).each do |j|
    val=n*((i+j-1+(n/2).floor)%n) + ((i+2*j-2)%n)+1
    puts "#{i},#{j} #{val}"
  end
end