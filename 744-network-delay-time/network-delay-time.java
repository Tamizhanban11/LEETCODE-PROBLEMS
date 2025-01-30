class Solution {
    class Pair{
        int vertex;
        int weight;
        public Pair(int vertex, int weight ){
            this.vertex = vertex;
            this.weight = weight;
        }
    }
    public int networkDelayTime(int[][] times, int n, int k) {
        List<List<Pair>> graph = new ArrayList<>();
        for(int i=0; i<=n; i++){
            graph.add(new ArrayList<>() );
        }
        for(int i=0; i<times.length; i++){
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            graph.get(u).add(new Pair(v,w));
        }
        int ans = shortestPath(graph, k);
        return ans;
    }

    public int shortestPath(List<List<Pair>> graph, int src) {
        int n = graph.size();
        int timeArr[] = new int[n];
        for(int i=0; i<n; i++){
            timeArr[i] = Integer.MAX_VALUE;
        }
        int visited[] = new int[n];
        PriorityQueue<Pair> pq = new PriorityQueue<>((a,b)-> a.weight - b.weight);
        pq.add(new Pair(src, 0));
        while(pq.size() > 0 ){  // R W A
            Pair remvedPair = pq.remove();
            int remPerson = remvedPair.vertex;
            int timeToReachToYou = remvedPair.weight;
            visited[remPerson] = 1;
            if(timeArr[remPerson] > timeToReachToYou ){
                timeArr[remPerson] = timeToReachToYou;
            }
            for(Pair p : graph.get(remPerson)){
                int ver = p.vertex;
                int weight = p.weight;
                if(visited[ver] == 0 ){
                    pq.add(new Pair(ver, timeToReachToYou+weight));
                }
            }
        }
        int ans = 0;
        for(int i=1; i<timeArr.length; i++){
            if(timeArr[i] == Integer.MAX_VALUE) {
                return -1;
            }
            if(timeArr[i] > ans){
                ans = timeArr[i];
            }
        }
        return ans;
    }
}