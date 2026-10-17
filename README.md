<img width="686" height="142" alt="ascii-art-text" src="https://github.com/user-attachments/assets/0dffa556-4fb9-4cc6-8a15-fd08d564a347" />

# DISCLAIMER
> This repository is maintained strictly for educational, academic research, and reverse engineering/malware analysis purposes. All tools, scripts, and sample files (crackmes) provided here are intended solely for practice within an isolated, controlled testing environment (lab/VM). The author assumes no responsibility or liability for any misuse or unauthorized activities outside of learning and research.

---

# Reverse Engineering & Binary Analysis Lab

A collection of binaries, crackme exercises, automation scripts, and practical notes focused on low-level reverse engineering, control flow analysis, static/dynamic inspection, and x86/x64 architecture binary manipulation.

---

## Environment Setup

**Highly Recommended:** Perform all analysis inside a dedicated Linux virtual machine (e.g., Arch Linux, Void Linux, or Ubuntu running on VirtualBox / VMware). If using another host OS, executing binaries inside an isolated VM is **mandatory**.

* **Network Isolation:** Ensure the VM network adapter is completely disconnected (Host-Only or No Network).
* **Isolation Policies:** Disable Shared Folders, Shared Clipboard, and Drag-and-Drop between the host and guest OS to prevent potential host execution risks.

---

## Recommended Tools

* **Decompilers & Disassemblers:**
  * [Ghidra](https://ghidra-sre.org/) (Primary SRE Framework)
  * [IDA Free](https://hex-rays.com/ida-free) / [Cutter](https://cutter.re/)
* **Dynamic Debuggers:**
  * GDB + [GEF](https://github.com/hugsy/gef) (Linux)
  * x64dbg (Windows)
* **Binary Utilities & Inspection:**
  * `readelf`, `objdump`, `nm`, `strings`
  * `strace` / `ltrace`
  * `checksec` (Checking NX, PIE, Stack Canary,RELRO)

# NOTES
> **FILE CRACKMES IN THIS REPO ARE FREE 100%,SO DON'T WORRY ABOUT LISENCE OR SOMETHING LIKE THAT,USE AT YOUR RISK!



