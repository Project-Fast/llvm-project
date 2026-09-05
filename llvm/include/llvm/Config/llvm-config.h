// this is for ninja building
#ifndef LLVM_CONFIG_H
#define LLVM_CONFIG_H

#if defined(LLVM_NATIVE_ARCH)
#define LLVM_NATIVE_ASMPARSER LLVMInitialize ## LLVM_NATIVE_ARCH ## AsmParser
#define LLVM_NATIVE_ASMPRINTER LLVMInitialize ## LLVM_NATIVE_ARCH ## AsmPrinter
#define LLVM_NATIVE_DISASSEMBLER LLVMInitialize ## LLVM_NATIVE_ARCH ## Disassembler
#define LLVM_NATIVE_TARGET LLVMInitialize ## LLVM_NATIVE_ARCH ## Target
#define LLVM_NATIVE_TARGETINFO LLVMInitialize ## LLVM_NATIVE_ARCH ## TargetInfo
#define LLVM_NATIVE_TARGETMC LLVMInitialize ## LLVM_NATIVE_ARCH ## TargetMC
#define LLVM_NATIVE_TARGETMCA LLVMInitialize ## LLVM_NATIVE_ARCH ## TargetMCA
#else
#error "No LLVM_NATIVE_ARCH now"
#endif

#endif