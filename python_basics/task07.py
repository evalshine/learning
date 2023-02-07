class Buffer:
    def __init__(self):
        self.elements = []

    def add(self, *a):
        for el in a:
            self.elements.append(el)
            if len(self.elements) == 5:
                print(sum(self.elements))
                self.elements = []

    def get_current_part(self):
        return self.elements