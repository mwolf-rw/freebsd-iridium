--- third_party/skia/third_party/vulkanmemoryallocator/include/vk_mem_alloc.h.orig	2020-04-03 06:13:09.000000000 +0200
+++ third_party/skia/third_party/vulkanmemoryallocator/include/vk_mem_alloc.h	2020-04-13 11:48:43.049546000 +0200
@@ -2232,7 +2232,7 @@
 #include <mutex> // for std::mutex
 #include <atomic> // for std::atomic
 
-#if !defined(_WIN32) && !defined(__APPLE__)
+#if !defined(_WIN32) && !defined(__APPLE__) && !defined(__FreeBSD__)
     #include <malloc.h> // for aligned_alloc()
 #endif
 
