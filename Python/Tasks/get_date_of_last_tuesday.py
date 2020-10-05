# Python program to get the date of the last Tuesday.
from datetime import date
from datetime import timedelta
today = date.today()
print(f'Todays date: {today}')
offset = (today.weekday() - 1) % 7
last_tuesday = today - timedelta(days=offset)
print(f'Date of last Tuesday: {last_tuesday}')
