ASSET_SRC := $(shell find assets -type f)
ASSET_OBJ := $(ASSET_SRC:assets/%=build/assets/%.o)
SRCS := main.c
BUILDDIR := .

$(BUILDDIR)/smb3: $(SRCS) $(ASSETS)
	$(CC) $(ASSET_SRC) -fPIC -shared $^ -Wl,-z,noexecstack -o $@

# build/assets/%.o: assets/%
# 	mkdir -p $(dir $@)

clean:
	rm game *.o
