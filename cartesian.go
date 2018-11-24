package main

import "fmt"

func main() {
    fmt.Printf("%v", cartesian([][]string{{"1","2"},{"a","b"},{"c","d"}}))
}

func cartesian(v [][]string) [][]string {
    res := [][]string{[]string{}}
    for _, ca := range v {
        var tempRes [][]string
        for _, resArr := range res {
            for _, c := range ca {
                tempRes = append(tempRes, append(resArr, c))
            }
        }
        if len(tempRes) > 0 {
            res = tempRes
        }
    }
    return res
}
