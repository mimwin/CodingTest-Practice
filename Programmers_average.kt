class Solution {
    fun solution(arr: IntArray): Double {
        var length = arr.size
        var sum : Double = 0.0
        for (i in 0..length-1){
            sum += arr[i]
        }
        return sum / length.toLong()
        
        //Another solution
        // return arr.average()
    }
}