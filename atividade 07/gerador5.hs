import Data.List

gerador5 b = unfoldr(\a -> if a == 0 then Nothing else Just (b, b `div` 2)) b