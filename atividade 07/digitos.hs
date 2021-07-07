import Data.List
digitos x = reverse $ unfoldr y x
		if y == 0 then Nothing
		else Just (mod y 10, div y 10)