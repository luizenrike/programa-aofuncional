alter' [] = []
alter' (x:xs) = x:(x *(-1)): alternar' xs

main = do
    a <- readLn :: IO Int
    print $ alter a
