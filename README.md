# Sastantua
For me, `Sastantua` was the most emotionally charged project of the **[42 piscine](https://www.42.us.org/)**. I spent the whole day (July 29, 2018) working on it, and I _got it working_ by afternoon—in one super-long function full of for loops. Then, as I tried to corset it into the norme, I broke it, ran out of time, and started crying.

A year later, as a piscine prefect (July 12, 2019), I decided to do Sastantua again and vanquish it.

# Details
* Tier rows
  * nth + 2 (ex. tier 1 has 3 rows, tier 2 has 4, etc.)
* Tier growth:
  * For even-number tiers, the growth is 1 + nth / 2 (ex. tier 2, growth 2)
  * For odd-number tiers, the growth is the same as on the prev tier (ex. tier 3, growth 2)
* Door size
  * If the door is on an odd-number tier, the door is the size of the nth (ex. tier 3, 3x3 door)
  * On an even-numbered tier, the door is the same as on the prev tier (ex. tier 4, 3x3 door)
