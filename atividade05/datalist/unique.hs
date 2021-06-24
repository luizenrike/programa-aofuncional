unique [] = []
unique (x:xs) = x : unique(filter(\b -> b /= x) xs)

main = do
    a <- readLn :: IO [Int]
    print $ unique a
