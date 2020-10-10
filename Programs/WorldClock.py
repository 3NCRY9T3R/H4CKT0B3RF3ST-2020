from datetime import datetime
from pytz import timezone, common_timezones, country_timezones

def world_clock(country):
    if country:
        try:
            timezones = country_timezones(country)
        except KeyError:
            print(f"{country} not recognized")
            return
    else:
        timezones = common_timezones

    for tz in timezones:
        time = datetime.now(timezone(tz)).strftime('%Y-%m-%d %H:%M:%S')
        print(f"{tz}: {time}")

if __name__ == "__main__":
    country = input("Enter 2 letter country code (blank for all): ")
    world_clock(country)
