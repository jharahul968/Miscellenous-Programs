sentence="HellO wOrLd"
sentence_=""
sentence=sentence.split()
sentence=sentence[::-1]
# sentence=(' '.join(sentence))
for i in sentence:
    for j in i:
        if j.isupper():
            sentence_+=j.lower()
        elif j.islower():
            sentence_+=j.upper()
    sentence_+=" "
# sentence=(' '.join(sentence))
print(sentence_)