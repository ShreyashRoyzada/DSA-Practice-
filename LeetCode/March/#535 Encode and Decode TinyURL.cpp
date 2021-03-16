class Solution {
public:
    
    std::map<string,string> m;
    
    static constexpr char alum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    static string generate()
    {
        string res;
        for(int i = 0; i<6; i++){
            int index = std::rand()%sizeof(alum);
            res.push_back(alum[index]);
        }
        return res;
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        while(true)
        {
            auto ntiny = generate();
            if(m.find(ntiny) == m.end()){
                m[ntiny] = longUrl;
                return ntiny;
            }
        }
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
