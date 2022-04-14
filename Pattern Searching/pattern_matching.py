def main():
    text = str(input())
    pattern = str(input())
    n = len(text)
    patt_length = len(pattern)

    for patt in range(0,n):

        if text[patt:patt + patt_length] == pattern:
            found_patt = text[patt:patt + patt_length]
            patt_found_ind = patt
            print(f"The index of found pattern is : {patt_found_ind}")
        else:
            continue

if __name__ == "__main__":
    main()