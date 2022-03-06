encoded_string = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸弰㑣〷㘰摽"
for i in range(len(encoded_string)):
   print(chr(ord(encoded_string[i])>>8))
   print(chr((ord(encoded_string[i]))-((ord(encoded_string[i])>>8)<<8)))