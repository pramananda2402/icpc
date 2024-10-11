class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def getArea(p1, p2, p3,p4, p0,w,h):
    res = 0
    l,r = 0, 10**5
    def call_modulus(p1, p2, p3):
        return p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)

    # callculate modulus first m1 , m2 , m3 , m4
    m1 = call_modulus(p1, p2, p0)
    m2 = call_modulus(p2, p3, p0)
    m3 = call_modulus(p3, p4, p0)
    m4 = call_modulus(p4, p1, p0)
    def outside_rec(x):
        m11 = call_modulus(p1, p2, Point(p0.x - x*w, p0.y - x*h))
        if m11 * m1 < 0:
            return True

        m22 = call_modulus(p2, p3, Point(p0.x - x*w, p0.y - x*h))
        if m22 * m2 < 0:
            return True

        m33 = call_modulus(p3, p4, Point(p0.x - x*w, p0.y - x*h))
        if m33 * m3 < 0:
            return True

        m44 = call_modulus(p4, p1, Point(p0.x - x*w, p0.y - x*h))
        if m44 * m4 < 0:
            return True

        return False
        


    


    while l <= r: 
        m = (l+r)//2
        if outside_rec(m):
            r = m - 1
        else:
            l = m + 1
        
        
    l -= 1 

    res = 4 * l * l * w *h    
        
        
    return res 



p1=Point(0,0)
p2=Point(6,0)
p3=Point(8,4)
p4=Point(2,4)
p0=Point(4,2)
w=1
h=1
print(getArea(p1, p2, p3,p4, p0,w,h))
