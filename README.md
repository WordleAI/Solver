# WordleSolver

This project currently has two implementations: a Python version and a c++ port. While they share a common goal, their feature sets are a bit different.

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

| Feature                          | 
|----------------------------------|
| NYTimes          | Yes        |
| Wordle Unlimited          | No         | 
| Automatic Solver (NYTimes)       | No         |
| Automatic Solver (Wordle Unlimited)     | No         |
| Colored & Formatted Logs    | No         |
| Performance Stats    | No         |
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
