int[] => permutation int[]

Require:
startArr
stack
endArr

def permutation(int[] sArr):
  int[] endArr;
  Stack s;
  while !sArr.isEmpty():
    if s.isEmpty():
      stack.push(sArr.pop())
    elif s.isPull():
      endArr.append(sArr.pop())
    else
      float r = random(0)
      if r > 0.5:
        s.push(sArr.pop())
      else
        endArr.append(s.pop(item));

  while  !s.isEmpty():
    endArr.append(s.pop(item));

  return endArr;





