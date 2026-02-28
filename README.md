# WordleSolver

This project includes two implementations: a Python version and a C++ port. While both share the same core goal, their features differ slightly. The long-term objective is to move away from reliance on the NYTimes endpoint and towards a universal, independent Wordle-solving solution.

#### C++ Version: https://github.com/gs109111/WordleSolver/tree/cpp
#### Python Version:  https://github.com/gs109111/WordleSolver/
---

> [!WARNING]
> This project currently uses an **undocumented NYTimes Wordle endpoint** to fetch the latest puzzle answers. 
> It is intended **for educational purposes only**. 
> Please do **not use this for mass scraping, automated attacks, or commercial purposes**. 
> The endpoint may change or be removed by NYTimes at any time, which could break this tool.
---

## C++ Port/Version 
#### https://github.com/gs109111/WordleSolver/tree/cpp

**The C++ port supports:**

- Fetching and displaying the **latest answer** from **NYTimes Wordle**
- Lightweight JSON parsing
- Fast, minimal-dependency execution

### External Dependencies
##### NYTimes
- CPR (https://github.com/libcpr/cpr)
- RapidJSON (https://github.com/Tencent/rapidjson)

### Limitations

- Currently only supports **NYTimes Wordle**
- Retrieves **latest answer only**
- No auto solver functionality
- Currently no support for alternative Wordle variants
- No formatting or coloring of logs

---

## Current Features

| Feature                          | Status |
|----------------------------------|--------|
| NYTimes                           | Yes    |
| Wordle Unlimited                  | No     |
| Automatic Solver (NYTimes)        | No     |
| Automatic Solver (Wordle Unlimited) | No  |
| Colored & Formatted Logs          | No     |
| Performance Stats                 | No     |

--- 
## Todo

| Feature                          | Notes |
|----------------------------------|-------|
| Automatic Solver (Wordle Unlimited) | References: [cpp-webdriver](https://github.com/digination/cpp-webdriver) or [webdriverxx](https://github.com/sekogan/webdriverxx) |
| Wordle Unlimited                  |  |
| Formatting & Coloring of Logs     |  |
| Performance Stats                 | |
| Create Header Files?              |  |
| Other Services                     |  |
| Universal Solution | ??? |
| More Comments | |
