.PHONY: clean All

All:
	@echo "----------Building project:[ binarysearcharray - Debug ]----------"
	@cd "binarysearcharray" && "$(MAKE)" -f  "binarysearcharray.mk"
clean:
	@echo "----------Cleaning project:[ binarysearcharray - Debug ]----------"
	@cd "binarysearcharray" && "$(MAKE)" -f  "binarysearcharray.mk" clean
