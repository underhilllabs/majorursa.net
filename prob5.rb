#!/usr/bin/env ruby
def div_by_all n 
  if n%10==0 and n%11==0 and n%12==0 and n%13==0 and n%14==0 and n%15==0 and n%16==0 and n%17==0 and n%18==0 and n%19==0 and n%20==0 then
    return true
  end
  return nil
end

def is_div_all n 
  if n%10==0 and n%11==0 and n%12==0 and n%13==0 and n%14==0 and n%15==0 and n%16==0 and n%17==0 and n%18==0 and n%19==0 and n%20==0  then
    printf "#{n} works!\n"
  else 
    printf "no way man\n"
  end
end

i = 2520
until div_by_all(i) do
  i += 2520
end
is_div_all i
print "found it: #{i}\n"




