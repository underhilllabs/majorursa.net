  def div_by_upto_20(n)
    2.upto(20) do |i|
      if n%i > 0 then
          return nil
      end
    end
    return true
  end

  start = 1
  2.upto(20) do |i|
    start *= i
  end
  lowest = start
  puts "starting at #{start}"
  start.downto(20) do |j|
    if div_by_upto_20(j)==true then 
      puts "found one #{j}"
      lowest = j
    end
  end
  puts "lowest is #{lowest}"
