package practice_kunal_yt;

class Parent
{
	public Parent()
	{
		System.out.println("Non paramet Parent constructor");
	}
	public Parent(int x)
	{
		System.out.println("paramet Parent constructor x = "+x);
	}
}
class Child extends Parent
{
	public Child()
	{
		System.out.println("Non paramt Child constructor");	
	}
	public Child(int y)
	{
		System.out.println("Paramt Child constructor y = "+y);	
	}
	public Child(int x,int y) //**********************
	{
		super(y);            //***********************
		System.out.println(" 2 Paramt Child constructor "+ x);
		//super(y);    Error hai...ise yha baad me ni likh skte hain
	}
}

class GrandChild extends Child
{
	public GrandChild()
	{
		System.out.println("GrandChild constructor");	
	}
}
public class bari_sir_constructor {
	
	public static void main(String[] args)
	{
	   /* Parent p = new Parent();
		Child c =new Child();
		GrandChild ch =new GrandChild();   */
		//Child c1 =new Child();  // will execute non para of superclass first
		//Child c2 =new Child(3);   //this too -------------------------------
		Child c3 =new Child(5,10);  // to call paramt parent constr.
	}
	
}
