class Circle{
    double x,y,r;
    
    public Circle( double x,double y, double r){
        this.x = x;
        this.y = y;
        this.r = r;
    }
    
    public static Circle BiggerCircle(Circle c1, Circle c2){
        if (c1.r == c2.r){
            return c1;
        }
        return c2;
    }
}


class HelloWorld {
    public static void main(String[] args) {
        Circle c1= new Circle(1,2,3);
        Circle c2 = new Circle(2,3,5);
        Circle a = Circle.BiggerCircle(c1, c2);
        System.out.print(a.r);
    }
}
