echo "Branches:"
git branch --color | cat

if [ "$(git branch --show-current)" = "" ]
then
    while true
    do
        printf "Checkout: "
        read -r br
        if git show "$br" > /dev/null 2>&1
        then
            break
        fi
    done
else
    br=
fi

if [ "$br" != "" ]
then
    git checkout "$br"
fi

git pull --quiet

if [ "$br" != "" ]
then
    git checkout "$br"
fi
