class Solution:
    def countDaysTogether(self, arriveAlice: str, leaveAlice: str,
                          arriveBob: str, leaveBob: str) -> int:
        days = [31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31]

        month = int(arriveAlice[:2])
        day = int(arriveAlice[3:])
        AlAlice = sum(days[:month - 1]) + day

        month = int(leaveAlice[:2])
        day = int(leaveAlice[3:])
        LeAlice = sum(days[:month - 1]) + day

        month = int(arriveBob[:2])
        day = int(arriveBob[3:])
        AlBob = sum(days[:month - 1]) + day

        month = int(leaveBob[:2])
        day = int(leaveBob[3:])
        LeBob = sum(days[:month - 1]) + day

        daysAlice = []
        daysBob = []
        count = 0

        for i in range(AlAlice, LeAlice + 1):
            daysAlice.append(i)

        for i in range(AlBob, LeBob + 1):
            daysBob.append(i)

        for i in range(1, 366):
            if i in daysAlice and i in daysBob:
                count += 1

        return count