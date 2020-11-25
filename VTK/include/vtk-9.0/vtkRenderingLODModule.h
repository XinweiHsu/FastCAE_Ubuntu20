
#ifndef VTKRENDERINGLOD_EXPORT_H
#define VTKRENDERINGLOD_EXPORT_H

#ifdef VTKRENDERINGLOD_STATIC_DEFINE
#  define VTKRENDERINGLOD_EXPORT
#  define VTKRENDERINGLOD_NO_EXPORT
#else
#  ifndef VTKRENDERINGLOD_EXPORT
#    ifdef RenderingLOD_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGLOD_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGLOD_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGLOD_NO_EXPORT
#    define VTKRENDERINGLOD_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGLOD_DEPRECATED
#  define VTKRENDERINGLOD_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKRENDERINGLOD_DEPRECATED_EXPORT
#  define VTKRENDERINGLOD_DEPRECATED_EXPORT VTKRENDERINGLOD_EXPORT VTKRENDERINGLOD_DEPRECATED
#endif

#ifndef VTKRENDERINGLOD_DEPRECATED_NO_EXPORT
#  define VTKRENDERINGLOD_DEPRECATED_NO_EXPORT VTKRENDERINGLOD_NO_EXPORT VTKRENDERINGLOD_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKRENDERINGLOD_NO_DEPRECATED
#    define VTKRENDERINGLOD_NO_DEPRECATED
#  endif
#endif

#endif /* VTKRENDERINGLOD_EXPORT_H */
