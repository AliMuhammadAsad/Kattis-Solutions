import datetime

def leapcheck(year: int)->bool:
    if year % 4 != 0: return False
    elif year % 100 != 0: return True
    elif year % 400 != 0: return False
    else: return True

def parentgap(year: int):
    # is_leap = leapcheck(year)
    mday = datetime.date(year, 5, 1)
    while mday.weekday() != 6:
        mday += datetime.timedelta(days = 1)
    mday += datetime.timedelta(days = 7)
    fday = datetime.date(year, 6, 1)
    while fday.weekday() != 6:
        fday += datetime.timedelta(days = 1)
    fday += datetime.timedelta(days = 14)
    d = fday - mday
    if d.days == 35: return "5 weeks"
    else: return "6 weeks"

if __name__ == "__main__":
    year = int(input())
    ans = parentgap(year)
    print(ans)