from googletrans import Translator, LANGUAGES
text=input("Enter a text to translate")

for language in LANGUAGES:
  t=Translator().translate(text,dest=language)
  print(LANGUAGES[language]+': '+ t.text)
