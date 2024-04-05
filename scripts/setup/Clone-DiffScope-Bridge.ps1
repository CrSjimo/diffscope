$repository = 'https://github.com/CrSjimo/diffscope-bridge.git'
$branch = 'master'
$commit = '941f82380a833bc6aa04f57328b77e46d7caf5c9'

git clone $repository -b $branch --recursive
Set-Location $(Split-Path -Path $repository -LeafBase)
git checkout $commit
