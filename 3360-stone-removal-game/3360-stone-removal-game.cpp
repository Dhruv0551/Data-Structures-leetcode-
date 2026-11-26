class Solution {
public:
    bool canAliceWin(int n) {
        int take = 10;
        bool aliceTurn = true;

        while (n >= take) {
            n -= take;
            take--;
            // aliceTurn = !aliceTurn;
            if(aliceTurn) aliceTurn = false;
            else aliceTurn = true;
        }

        return !aliceTurn;
    }
};