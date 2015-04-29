import end

interface Object
end

class Int
	fun output is intern
end

class A
	fun foo(i: Int)
	do
		i.output
		i.output
	end
end

class B
	super A



	redef fun foo(i: Int)
	do
		i.output	
	end



end

var a = new A	# A simple construction
a = new B	# A complex construction
a.foo(2)	# A monormphic call


