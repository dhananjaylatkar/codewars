def alphabet_position(text):
    pos = []
    for l in text:
      if ord(l) >= 65 and ord(l) <= 90:
        pos.append(str(ord(l) - 64))
      elif ord(l) >= 97 and ord(l) <= 122:
        pos.append(str(ord(l) - 96))
      else:
        continue
    return " ".join(pos)

print(alphabet_position("The sunset sets at twelve o' clock."))
print(alphabet_position("The narwhal bacons at midnight."))
