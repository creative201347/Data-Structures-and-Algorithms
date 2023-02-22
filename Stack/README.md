# Stack
**It is a linear data structure that follows a particular order in which the operations are performed. To implement the stack, it is required to maintain the pointer to the `top of the stack`, which is the last element to be inserted because we can access the elements only on the top of the stack. `LIFO( Last In First Out )`strategy states that the element that is inserted last will come out first.**

## Basic Operations on Stack

- **push()** to insert an element into the stack.
- **pop()** to remove an element from the stack.
- **top()** returns the top element of the stack.
- **isEmpty()** returns true if stack is empty else false.
- **size()** returns the size of stack.


```ts
begin
 if stack is full
    return
 endif
else  
 increment top
 stack[top] assign value
end else
end procedure
```

```js
begin
 if stack is empty
    return
 endif
else
 store value of stack[top]
 decrement top
 return value
end else
end procedure
```

## Applications of the stack:
- Infix to Postfix /Prefix conversion
- Redo-undo features at many places like editors, photoshop.
- Forward and backward features in web browsers.
- Used in many algorithms like `Tower of Hanoi`, `tree traversals`.
- Stack also helps in implementing function call in computers. The last called function is always completed first.