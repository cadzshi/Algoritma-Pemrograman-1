from turtle import*

t = Turtle()
t.speed(3)
def flower():
    for i in range(600):
        t.speed(3)
        t.circle(190 - i, 90)
        t.left(90)
        t.circle(190 - i, 90)
        t.left(18)

flower()
mainloop()