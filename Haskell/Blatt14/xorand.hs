and2 :: Bool -> (Bool -> Bool)
and2 a b = if a == True 
	   then if b == True
		then True
		else False
	   else False

xor2 :: Bool -> (Bool -> Bool)
xor2 a b = if a == True
	   then if b == False
		then True
		else False
	   else if b == True
		then True
		else False

and3 :: Bool -> (Bool -> Bool)
and3 True True = True
and3 _ _ = False

xor3 :: Bool -> (Bool -> Bool)
xor3 True False = True
xor3 False True = True
xor3 _ _ = False
