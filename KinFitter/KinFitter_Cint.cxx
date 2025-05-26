// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME KinFitter_Cint
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "TAbsFitConstraint.h"
#include "TAbsFitParticle.h"
#include "TFitConstraintEp.h"
#include "TFitConstraintEpGaus.h"
#include "TFitConstraintMBW.h"
#include "TFitConstraintM.h"
#include "TFitConstraintMGaus.h"
#include "TFitConstraintPt.h"
#include "TFitParticlePInvThetaPhi.h"
#include "TFitParticlePInvThetaPhiE.h"
#include "TFitParticlePInvThetaPhiM.h"
#include "TFitParticlePtEtaPhi.h"
#include "TFitParticlePtEtaPhiE.h"
#include "TFitParticlePtEtaPhiM.h"
#include "TFitParticlePThetaPhi.h"
#include "TFitParticlePThetaPhiE.h"
#include "TFitParticlePThetaPhiM.h"
#include "TFitParticlePxPyPz.h"
#include "TFitParticlePxPyPzE.h"
#include "TFitParticlePxPyPzM.h"
#include "TFitParticleRelE.h"
#include "TFitParticleRelPtEtaPhi.h"
#include "TFitParticleRelPtEtaPhiE.h"
#include "TFitParticleRelPtEtaPhiM.h"
#include "TFitParticleRelPxPyPz.h"
#include "TFitParticleRelPxPyPzE.h"
#include "TFitParticleRelPxPyPzM.h"
#include "TGetErrorMatrix.h"
#include "TKinFitter.h"
#include "TToyGentT.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TAbsFitParticle(void *p);
   static void deleteArray_TAbsFitParticle(void *p);
   static void destruct_TAbsFitParticle(void *p);
   static void streamer_TAbsFitParticle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAbsFitParticle*)
   {
      ::TAbsFitParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAbsFitParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAbsFitParticle", ::TAbsFitParticle::Class_Version(), "TAbsFitParticle.h", 9,
                  typeid(::TAbsFitParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAbsFitParticle::Dictionary, isa_proxy, 16,
                  sizeof(::TAbsFitParticle) );
      instance.SetDelete(&delete_TAbsFitParticle);
      instance.SetDeleteArray(&deleteArray_TAbsFitParticle);
      instance.SetDestructor(&destruct_TAbsFitParticle);
      instance.SetStreamerFunc(&streamer_TAbsFitParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAbsFitParticle*)
   {
      return GenerateInitInstanceLocal((::TAbsFitParticle*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAbsFitParticle*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TAbsFitConstraint(void *p);
   static void deleteArray_TAbsFitConstraint(void *p);
   static void destruct_TAbsFitConstraint(void *p);
   static void streamer_TAbsFitConstraint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAbsFitConstraint*)
   {
      ::TAbsFitConstraint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAbsFitConstraint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAbsFitConstraint", ::TAbsFitConstraint::Class_Version(), "TAbsFitConstraint.h", 10,
                  typeid(::TAbsFitConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAbsFitConstraint::Dictionary, isa_proxy, 16,
                  sizeof(::TAbsFitConstraint) );
      instance.SetDelete(&delete_TAbsFitConstraint);
      instance.SetDeleteArray(&deleteArray_TAbsFitConstraint);
      instance.SetDestructor(&destruct_TAbsFitConstraint);
      instance.SetStreamerFunc(&streamer_TAbsFitConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAbsFitConstraint*)
   {
      return GenerateInitInstanceLocal((::TAbsFitConstraint*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TAbsFitConstraint*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintEp(void *p = nullptr);
   static void *newArray_TFitConstraintEp(Long_t size, void *p);
   static void delete_TFitConstraintEp(void *p);
   static void deleteArray_TFitConstraintEp(void *p);
   static void destruct_TFitConstraintEp(void *p);
   static void streamer_TFitConstraintEp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintEp*)
   {
      ::TFitConstraintEp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintEp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintEp", ::TFitConstraintEp::Class_Version(), "TFitConstraintEp.h", 13,
                  typeid(::TFitConstraintEp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintEp::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintEp) );
      instance.SetNew(&new_TFitConstraintEp);
      instance.SetNewArray(&newArray_TFitConstraintEp);
      instance.SetDelete(&delete_TFitConstraintEp);
      instance.SetDeleteArray(&deleteArray_TFitConstraintEp);
      instance.SetDestructor(&destruct_TFitConstraintEp);
      instance.SetStreamerFunc(&streamer_TFitConstraintEp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintEp*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintEp*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintEp*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintEpGaus(void *p = nullptr);
   static void *newArray_TFitConstraintEpGaus(Long_t size, void *p);
   static void delete_TFitConstraintEpGaus(void *p);
   static void deleteArray_TFitConstraintEpGaus(void *p);
   static void destruct_TFitConstraintEpGaus(void *p);
   static void streamer_TFitConstraintEpGaus(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintEpGaus*)
   {
      ::TFitConstraintEpGaus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintEpGaus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintEpGaus", ::TFitConstraintEpGaus::Class_Version(), "TFitConstraintEpGaus.h", 13,
                  typeid(::TFitConstraintEpGaus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintEpGaus::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintEpGaus) );
      instance.SetNew(&new_TFitConstraintEpGaus);
      instance.SetNewArray(&newArray_TFitConstraintEpGaus);
      instance.SetDelete(&delete_TFitConstraintEpGaus);
      instance.SetDeleteArray(&deleteArray_TFitConstraintEpGaus);
      instance.SetDestructor(&destruct_TFitConstraintEpGaus);
      instance.SetStreamerFunc(&streamer_TFitConstraintEpGaus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintEpGaus*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintEpGaus*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintEpGaus*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintM(void *p = nullptr);
   static void *newArray_TFitConstraintM(Long_t size, void *p);
   static void delete_TFitConstraintM(void *p);
   static void deleteArray_TFitConstraintM(void *p);
   static void destruct_TFitConstraintM(void *p);
   static void streamer_TFitConstraintM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintM*)
   {
      ::TFitConstraintM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintM", ::TFitConstraintM::Class_Version(), "TFitConstraintM.h", 18,
                  typeid(::TFitConstraintM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintM) );
      instance.SetNew(&new_TFitConstraintM);
      instance.SetNewArray(&newArray_TFitConstraintM);
      instance.SetDelete(&delete_TFitConstraintM);
      instance.SetDeleteArray(&deleteArray_TFitConstraintM);
      instance.SetDestructor(&destruct_TFitConstraintM);
      instance.SetStreamerFunc(&streamer_TFitConstraintM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintM*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintMBW(void *p = nullptr);
   static void *newArray_TFitConstraintMBW(Long_t size, void *p);
   static void delete_TFitConstraintMBW(void *p);
   static void deleteArray_TFitConstraintMBW(void *p);
   static void destruct_TFitConstraintMBW(void *p);
   static void streamer_TFitConstraintMBW(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintMBW*)
   {
      ::TFitConstraintMBW *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintMBW >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintMBW", ::TFitConstraintMBW::Class_Version(), "TFitConstraintMBW.h", 18,
                  typeid(::TFitConstraintMBW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintMBW::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintMBW) );
      instance.SetNew(&new_TFitConstraintMBW);
      instance.SetNewArray(&newArray_TFitConstraintMBW);
      instance.SetDelete(&delete_TFitConstraintMBW);
      instance.SetDeleteArray(&deleteArray_TFitConstraintMBW);
      instance.SetDestructor(&destruct_TFitConstraintMBW);
      instance.SetStreamerFunc(&streamer_TFitConstraintMBW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintMBW*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintMBW*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintMBW*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintMGaus(void *p = nullptr);
   static void *newArray_TFitConstraintMGaus(Long_t size, void *p);
   static void delete_TFitConstraintMGaus(void *p);
   static void deleteArray_TFitConstraintMGaus(void *p);
   static void destruct_TFitConstraintMGaus(void *p);
   static void streamer_TFitConstraintMGaus(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintMGaus*)
   {
      ::TFitConstraintMGaus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintMGaus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintMGaus", ::TFitConstraintMGaus::Class_Version(), "TFitConstraintMGaus.h", 18,
                  typeid(::TFitConstraintMGaus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintMGaus::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintMGaus) );
      instance.SetNew(&new_TFitConstraintMGaus);
      instance.SetNewArray(&newArray_TFitConstraintMGaus);
      instance.SetDelete(&delete_TFitConstraintMGaus);
      instance.SetDeleteArray(&deleteArray_TFitConstraintMGaus);
      instance.SetDestructor(&destruct_TFitConstraintMGaus);
      instance.SetStreamerFunc(&streamer_TFitConstraintMGaus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintMGaus*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintMGaus*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintMGaus*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitConstraintPt(void *p = nullptr);
   static void *newArray_TFitConstraintPt(Long_t size, void *p);
   static void delete_TFitConstraintPt(void *p);
   static void deleteArray_TFitConstraintPt(void *p);
   static void destruct_TFitConstraintPt(void *p);
   static void streamer_TFitConstraintPt(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitConstraintPt*)
   {
      ::TFitConstraintPt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitConstraintPt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitConstraintPt", ::TFitConstraintPt::Class_Version(), "TFitConstraintPt.h", 13,
                  typeid(::TFitConstraintPt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitConstraintPt::Dictionary, isa_proxy, 16,
                  sizeof(::TFitConstraintPt) );
      instance.SetNew(&new_TFitConstraintPt);
      instance.SetNewArray(&newArray_TFitConstraintPt);
      instance.SetDelete(&delete_TFitConstraintPt);
      instance.SetDeleteArray(&deleteArray_TFitConstraintPt);
      instance.SetDestructor(&destruct_TFitConstraintPt);
      instance.SetStreamerFunc(&streamer_TFitConstraintPt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitConstraintPt*)
   {
      return GenerateInitInstanceLocal((::TFitConstraintPt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitConstraintPt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePInvThetaPhi(void *p = nullptr);
   static void *newArray_TFitParticlePInvThetaPhi(Long_t size, void *p);
   static void delete_TFitParticlePInvThetaPhi(void *p);
   static void deleteArray_TFitParticlePInvThetaPhi(void *p);
   static void destruct_TFitParticlePInvThetaPhi(void *p);
   static void streamer_TFitParticlePInvThetaPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePInvThetaPhi*)
   {
      ::TFitParticlePInvThetaPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePInvThetaPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePInvThetaPhi", ::TFitParticlePInvThetaPhi::Class_Version(), "TFitParticlePInvThetaPhi.h", 9,
                  typeid(::TFitParticlePInvThetaPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePInvThetaPhi::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePInvThetaPhi) );
      instance.SetNew(&new_TFitParticlePInvThetaPhi);
      instance.SetNewArray(&newArray_TFitParticlePInvThetaPhi);
      instance.SetDelete(&delete_TFitParticlePInvThetaPhi);
      instance.SetDeleteArray(&deleteArray_TFitParticlePInvThetaPhi);
      instance.SetDestructor(&destruct_TFitParticlePInvThetaPhi);
      instance.SetStreamerFunc(&streamer_TFitParticlePInvThetaPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePInvThetaPhi*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePInvThetaPhi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePInvThetaPhiE(void *p = nullptr);
   static void *newArray_TFitParticlePInvThetaPhiE(Long_t size, void *p);
   static void delete_TFitParticlePInvThetaPhiE(void *p);
   static void deleteArray_TFitParticlePInvThetaPhiE(void *p);
   static void destruct_TFitParticlePInvThetaPhiE(void *p);
   static void streamer_TFitParticlePInvThetaPhiE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePInvThetaPhiE*)
   {
      ::TFitParticlePInvThetaPhiE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePInvThetaPhiE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePInvThetaPhiE", ::TFitParticlePInvThetaPhiE::Class_Version(), "TFitParticlePInvThetaPhiE.h", 9,
                  typeid(::TFitParticlePInvThetaPhiE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePInvThetaPhiE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePInvThetaPhiE) );
      instance.SetNew(&new_TFitParticlePInvThetaPhiE);
      instance.SetNewArray(&newArray_TFitParticlePInvThetaPhiE);
      instance.SetDelete(&delete_TFitParticlePInvThetaPhiE);
      instance.SetDeleteArray(&deleteArray_TFitParticlePInvThetaPhiE);
      instance.SetDestructor(&destruct_TFitParticlePInvThetaPhiE);
      instance.SetStreamerFunc(&streamer_TFitParticlePInvThetaPhiE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePInvThetaPhiE*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePInvThetaPhiE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePInvThetaPhiM(void *p = nullptr);
   static void *newArray_TFitParticlePInvThetaPhiM(Long_t size, void *p);
   static void delete_TFitParticlePInvThetaPhiM(void *p);
   static void deleteArray_TFitParticlePInvThetaPhiM(void *p);
   static void destruct_TFitParticlePInvThetaPhiM(void *p);
   static void streamer_TFitParticlePInvThetaPhiM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePInvThetaPhiM*)
   {
      ::TFitParticlePInvThetaPhiM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePInvThetaPhiM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePInvThetaPhiM", ::TFitParticlePInvThetaPhiM::Class_Version(), "TFitParticlePInvThetaPhiM.h", 9,
                  typeid(::TFitParticlePInvThetaPhiM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePInvThetaPhiM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePInvThetaPhiM) );
      instance.SetNew(&new_TFitParticlePInvThetaPhiM);
      instance.SetNewArray(&newArray_TFitParticlePInvThetaPhiM);
      instance.SetDelete(&delete_TFitParticlePInvThetaPhiM);
      instance.SetDeleteArray(&deleteArray_TFitParticlePInvThetaPhiM);
      instance.SetDestructor(&destruct_TFitParticlePInvThetaPhiM);
      instance.SetStreamerFunc(&streamer_TFitParticlePInvThetaPhiM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePInvThetaPhiM*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePInvThetaPhiM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePtEtaPhi(void *p = nullptr);
   static void *newArray_TFitParticlePtEtaPhi(Long_t size, void *p);
   static void delete_TFitParticlePtEtaPhi(void *p);
   static void deleteArray_TFitParticlePtEtaPhi(void *p);
   static void destruct_TFitParticlePtEtaPhi(void *p);
   static void streamer_TFitParticlePtEtaPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePtEtaPhi*)
   {
      ::TFitParticlePtEtaPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePtEtaPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePtEtaPhi", ::TFitParticlePtEtaPhi::Class_Version(), "TFitParticlePtEtaPhi.h", 10,
                  typeid(::TFitParticlePtEtaPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePtEtaPhi::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePtEtaPhi) );
      instance.SetNew(&new_TFitParticlePtEtaPhi);
      instance.SetNewArray(&newArray_TFitParticlePtEtaPhi);
      instance.SetDelete(&delete_TFitParticlePtEtaPhi);
      instance.SetDeleteArray(&deleteArray_TFitParticlePtEtaPhi);
      instance.SetDestructor(&destruct_TFitParticlePtEtaPhi);
      instance.SetStreamerFunc(&streamer_TFitParticlePtEtaPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePtEtaPhi*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePtEtaPhi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePtEtaPhiE(void *p = nullptr);
   static void *newArray_TFitParticlePtEtaPhiE(Long_t size, void *p);
   static void delete_TFitParticlePtEtaPhiE(void *p);
   static void deleteArray_TFitParticlePtEtaPhiE(void *p);
   static void destruct_TFitParticlePtEtaPhiE(void *p);
   static void streamer_TFitParticlePtEtaPhiE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePtEtaPhiE*)
   {
      ::TFitParticlePtEtaPhiE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePtEtaPhiE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePtEtaPhiE", ::TFitParticlePtEtaPhiE::Class_Version(), "TFitParticlePtEtaPhiE.h", 10,
                  typeid(::TFitParticlePtEtaPhiE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePtEtaPhiE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePtEtaPhiE) );
      instance.SetNew(&new_TFitParticlePtEtaPhiE);
      instance.SetNewArray(&newArray_TFitParticlePtEtaPhiE);
      instance.SetDelete(&delete_TFitParticlePtEtaPhiE);
      instance.SetDeleteArray(&deleteArray_TFitParticlePtEtaPhiE);
      instance.SetDestructor(&destruct_TFitParticlePtEtaPhiE);
      instance.SetStreamerFunc(&streamer_TFitParticlePtEtaPhiE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePtEtaPhiE*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePtEtaPhiE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePtEtaPhiM(void *p = nullptr);
   static void *newArray_TFitParticlePtEtaPhiM(Long_t size, void *p);
   static void delete_TFitParticlePtEtaPhiM(void *p);
   static void deleteArray_TFitParticlePtEtaPhiM(void *p);
   static void destruct_TFitParticlePtEtaPhiM(void *p);
   static void streamer_TFitParticlePtEtaPhiM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePtEtaPhiM*)
   {
      ::TFitParticlePtEtaPhiM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePtEtaPhiM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePtEtaPhiM", ::TFitParticlePtEtaPhiM::Class_Version(), "TFitParticlePtEtaPhiM.h", 10,
                  typeid(::TFitParticlePtEtaPhiM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePtEtaPhiM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePtEtaPhiM) );
      instance.SetNew(&new_TFitParticlePtEtaPhiM);
      instance.SetNewArray(&newArray_TFitParticlePtEtaPhiM);
      instance.SetDelete(&delete_TFitParticlePtEtaPhiM);
      instance.SetDeleteArray(&deleteArray_TFitParticlePtEtaPhiM);
      instance.SetDestructor(&destruct_TFitParticlePtEtaPhiM);
      instance.SetStreamerFunc(&streamer_TFitParticlePtEtaPhiM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePtEtaPhiM*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePtEtaPhiM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePThetaPhi(void *p = nullptr);
   static void *newArray_TFitParticlePThetaPhi(Long_t size, void *p);
   static void delete_TFitParticlePThetaPhi(void *p);
   static void deleteArray_TFitParticlePThetaPhi(void *p);
   static void destruct_TFitParticlePThetaPhi(void *p);
   static void streamer_TFitParticlePThetaPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePThetaPhi*)
   {
      ::TFitParticlePThetaPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePThetaPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePThetaPhi", ::TFitParticlePThetaPhi::Class_Version(), "TFitParticlePThetaPhi.h", 9,
                  typeid(::TFitParticlePThetaPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePThetaPhi::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePThetaPhi) );
      instance.SetNew(&new_TFitParticlePThetaPhi);
      instance.SetNewArray(&newArray_TFitParticlePThetaPhi);
      instance.SetDelete(&delete_TFitParticlePThetaPhi);
      instance.SetDeleteArray(&deleteArray_TFitParticlePThetaPhi);
      instance.SetDestructor(&destruct_TFitParticlePThetaPhi);
      instance.SetStreamerFunc(&streamer_TFitParticlePThetaPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePThetaPhi*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePThetaPhi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePThetaPhi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePThetaPhiE(void *p = nullptr);
   static void *newArray_TFitParticlePThetaPhiE(Long_t size, void *p);
   static void delete_TFitParticlePThetaPhiE(void *p);
   static void deleteArray_TFitParticlePThetaPhiE(void *p);
   static void destruct_TFitParticlePThetaPhiE(void *p);
   static void streamer_TFitParticlePThetaPhiE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePThetaPhiE*)
   {
      ::TFitParticlePThetaPhiE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePThetaPhiE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePThetaPhiE", ::TFitParticlePThetaPhiE::Class_Version(), "TFitParticlePThetaPhiE.h", 10,
                  typeid(::TFitParticlePThetaPhiE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePThetaPhiE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePThetaPhiE) );
      instance.SetNew(&new_TFitParticlePThetaPhiE);
      instance.SetNewArray(&newArray_TFitParticlePThetaPhiE);
      instance.SetDelete(&delete_TFitParticlePThetaPhiE);
      instance.SetDeleteArray(&deleteArray_TFitParticlePThetaPhiE);
      instance.SetDestructor(&destruct_TFitParticlePThetaPhiE);
      instance.SetStreamerFunc(&streamer_TFitParticlePThetaPhiE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePThetaPhiE*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePThetaPhiE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePThetaPhiM(void *p = nullptr);
   static void *newArray_TFitParticlePThetaPhiM(Long_t size, void *p);
   static void delete_TFitParticlePThetaPhiM(void *p);
   static void deleteArray_TFitParticlePThetaPhiM(void *p);
   static void destruct_TFitParticlePThetaPhiM(void *p);
   static void streamer_TFitParticlePThetaPhiM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePThetaPhiM*)
   {
      ::TFitParticlePThetaPhiM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePThetaPhiM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePThetaPhiM", ::TFitParticlePThetaPhiM::Class_Version(), "TFitParticlePThetaPhiM.h", 10,
                  typeid(::TFitParticlePThetaPhiM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePThetaPhiM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePThetaPhiM) );
      instance.SetNew(&new_TFitParticlePThetaPhiM);
      instance.SetNewArray(&newArray_TFitParticlePThetaPhiM);
      instance.SetDelete(&delete_TFitParticlePThetaPhiM);
      instance.SetDeleteArray(&deleteArray_TFitParticlePThetaPhiM);
      instance.SetDestructor(&destruct_TFitParticlePThetaPhiM);
      instance.SetStreamerFunc(&streamer_TFitParticlePThetaPhiM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePThetaPhiM*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePThetaPhiM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePxPyPz(void *p = nullptr);
   static void *newArray_TFitParticlePxPyPz(Long_t size, void *p);
   static void delete_TFitParticlePxPyPz(void *p);
   static void deleteArray_TFitParticlePxPyPz(void *p);
   static void destruct_TFitParticlePxPyPz(void *p);
   static void streamer_TFitParticlePxPyPz(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePxPyPz*)
   {
      ::TFitParticlePxPyPz *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePxPyPz >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePxPyPz", ::TFitParticlePxPyPz::Class_Version(), "TFitParticlePxPyPz.h", 9,
                  typeid(::TFitParticlePxPyPz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePxPyPz::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePxPyPz) );
      instance.SetNew(&new_TFitParticlePxPyPz);
      instance.SetNewArray(&newArray_TFitParticlePxPyPz);
      instance.SetDelete(&delete_TFitParticlePxPyPz);
      instance.SetDeleteArray(&deleteArray_TFitParticlePxPyPz);
      instance.SetDestructor(&destruct_TFitParticlePxPyPz);
      instance.SetStreamerFunc(&streamer_TFitParticlePxPyPz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePxPyPz*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePxPyPz*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePxPyPz*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePxPyPzE(void *p = nullptr);
   static void *newArray_TFitParticlePxPyPzE(Long_t size, void *p);
   static void delete_TFitParticlePxPyPzE(void *p);
   static void deleteArray_TFitParticlePxPyPzE(void *p);
   static void destruct_TFitParticlePxPyPzE(void *p);
   static void streamer_TFitParticlePxPyPzE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePxPyPzE*)
   {
      ::TFitParticlePxPyPzE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePxPyPzE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePxPyPzE", ::TFitParticlePxPyPzE::Class_Version(), "TFitParticlePxPyPzE.h", 10,
                  typeid(::TFitParticlePxPyPzE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePxPyPzE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePxPyPzE) );
      instance.SetNew(&new_TFitParticlePxPyPzE);
      instance.SetNewArray(&newArray_TFitParticlePxPyPzE);
      instance.SetDelete(&delete_TFitParticlePxPyPzE);
      instance.SetDeleteArray(&deleteArray_TFitParticlePxPyPzE);
      instance.SetDestructor(&destruct_TFitParticlePxPyPzE);
      instance.SetStreamerFunc(&streamer_TFitParticlePxPyPzE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePxPyPzE*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePxPyPzE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePxPyPzE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticlePxPyPzM(void *p = nullptr);
   static void *newArray_TFitParticlePxPyPzM(Long_t size, void *p);
   static void delete_TFitParticlePxPyPzM(void *p);
   static void deleteArray_TFitParticlePxPyPzM(void *p);
   static void destruct_TFitParticlePxPyPzM(void *p);
   static void streamer_TFitParticlePxPyPzM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticlePxPyPzM*)
   {
      ::TFitParticlePxPyPzM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticlePxPyPzM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticlePxPyPzM", ::TFitParticlePxPyPzM::Class_Version(), "TFitParticlePxPyPzM.h", 10,
                  typeid(::TFitParticlePxPyPzM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticlePxPyPzM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticlePxPyPzM) );
      instance.SetNew(&new_TFitParticlePxPyPzM);
      instance.SetNewArray(&newArray_TFitParticlePxPyPzM);
      instance.SetDelete(&delete_TFitParticlePxPyPzM);
      instance.SetDeleteArray(&deleteArray_TFitParticlePxPyPzM);
      instance.SetDestructor(&destruct_TFitParticlePxPyPzM);
      instance.SetStreamerFunc(&streamer_TFitParticlePxPyPzM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticlePxPyPzM*)
   {
      return GenerateInitInstanceLocal((::TFitParticlePxPyPzM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticlePxPyPzM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelE(void *p = nullptr);
   static void *newArray_TFitParticleRelE(Long_t size, void *p);
   static void delete_TFitParticleRelE(void *p);
   static void deleteArray_TFitParticleRelE(void *p);
   static void destruct_TFitParticleRelE(void *p);
   static void streamer_TFitParticleRelE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelE*)
   {
      ::TFitParticleRelE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelE", ::TFitParticleRelE::Class_Version(), "TFitParticleRelE.h", 10,
                  typeid(::TFitParticleRelE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelE) );
      instance.SetNew(&new_TFitParticleRelE);
      instance.SetNewArray(&newArray_TFitParticleRelE);
      instance.SetDelete(&delete_TFitParticleRelE);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelE);
      instance.SetDestructor(&destruct_TFitParticleRelE);
      instance.SetStreamerFunc(&streamer_TFitParticleRelE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelE*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPtEtaPhi(void *p = nullptr);
   static void *newArray_TFitParticleRelPtEtaPhi(Long_t size, void *p);
   static void delete_TFitParticleRelPtEtaPhi(void *p);
   static void deleteArray_TFitParticleRelPtEtaPhi(void *p);
   static void destruct_TFitParticleRelPtEtaPhi(void *p);
   static void streamer_TFitParticleRelPtEtaPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPtEtaPhi*)
   {
      ::TFitParticleRelPtEtaPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPtEtaPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPtEtaPhi", ::TFitParticleRelPtEtaPhi::Class_Version(), "TFitParticleRelPtEtaPhi.h", 10,
                  typeid(::TFitParticleRelPtEtaPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPtEtaPhi::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPtEtaPhi) );
      instance.SetNew(&new_TFitParticleRelPtEtaPhi);
      instance.SetNewArray(&newArray_TFitParticleRelPtEtaPhi);
      instance.SetDelete(&delete_TFitParticleRelPtEtaPhi);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPtEtaPhi);
      instance.SetDestructor(&destruct_TFitParticleRelPtEtaPhi);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPtEtaPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPtEtaPhi*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPtEtaPhi*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhi*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPtEtaPhiE(void *p = nullptr);
   static void *newArray_TFitParticleRelPtEtaPhiE(Long_t size, void *p);
   static void delete_TFitParticleRelPtEtaPhiE(void *p);
   static void deleteArray_TFitParticleRelPtEtaPhiE(void *p);
   static void destruct_TFitParticleRelPtEtaPhiE(void *p);
   static void streamer_TFitParticleRelPtEtaPhiE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPtEtaPhiE*)
   {
      ::TFitParticleRelPtEtaPhiE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPtEtaPhiE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPtEtaPhiE", ::TFitParticleRelPtEtaPhiE::Class_Version(), "TFitParticleRelPtEtaPhiE.h", 10,
                  typeid(::TFitParticleRelPtEtaPhiE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPtEtaPhiE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPtEtaPhiE) );
      instance.SetNew(&new_TFitParticleRelPtEtaPhiE);
      instance.SetNewArray(&newArray_TFitParticleRelPtEtaPhiE);
      instance.SetDelete(&delete_TFitParticleRelPtEtaPhiE);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPtEtaPhiE);
      instance.SetDestructor(&destruct_TFitParticleRelPtEtaPhiE);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPtEtaPhiE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPtEtaPhiE*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPtEtaPhiE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPtEtaPhiM(void *p = nullptr);
   static void *newArray_TFitParticleRelPtEtaPhiM(Long_t size, void *p);
   static void delete_TFitParticleRelPtEtaPhiM(void *p);
   static void deleteArray_TFitParticleRelPtEtaPhiM(void *p);
   static void destruct_TFitParticleRelPtEtaPhiM(void *p);
   static void streamer_TFitParticleRelPtEtaPhiM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPtEtaPhiM*)
   {
      ::TFitParticleRelPtEtaPhiM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPtEtaPhiM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPtEtaPhiM", ::TFitParticleRelPtEtaPhiM::Class_Version(), "TFitParticleRelPtEtaPhiM.h", 10,
                  typeid(::TFitParticleRelPtEtaPhiM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPtEtaPhiM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPtEtaPhiM) );
      instance.SetNew(&new_TFitParticleRelPtEtaPhiM);
      instance.SetNewArray(&newArray_TFitParticleRelPtEtaPhiM);
      instance.SetDelete(&delete_TFitParticleRelPtEtaPhiM);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPtEtaPhiM);
      instance.SetDestructor(&destruct_TFitParticleRelPtEtaPhiM);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPtEtaPhiM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPtEtaPhiM*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPtEtaPhiM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPxPyPz(void *p = nullptr);
   static void *newArray_TFitParticleRelPxPyPz(Long_t size, void *p);
   static void delete_TFitParticleRelPxPyPz(void *p);
   static void deleteArray_TFitParticleRelPxPyPz(void *p);
   static void destruct_TFitParticleRelPxPyPz(void *p);
   static void streamer_TFitParticleRelPxPyPz(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPxPyPz*)
   {
      ::TFitParticleRelPxPyPz *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPxPyPz >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPxPyPz", ::TFitParticleRelPxPyPz::Class_Version(), "TFitParticleRelPxPyPz.h", 9,
                  typeid(::TFitParticleRelPxPyPz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPxPyPz::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPxPyPz) );
      instance.SetNew(&new_TFitParticleRelPxPyPz);
      instance.SetNewArray(&newArray_TFitParticleRelPxPyPz);
      instance.SetDelete(&delete_TFitParticleRelPxPyPz);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPxPyPz);
      instance.SetDestructor(&destruct_TFitParticleRelPxPyPz);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPxPyPz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPxPyPz*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPxPyPz*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPz*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPxPyPzE(void *p = nullptr);
   static void *newArray_TFitParticleRelPxPyPzE(Long_t size, void *p);
   static void delete_TFitParticleRelPxPyPzE(void *p);
   static void deleteArray_TFitParticleRelPxPyPzE(void *p);
   static void destruct_TFitParticleRelPxPyPzE(void *p);
   static void streamer_TFitParticleRelPxPyPzE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPxPyPzE*)
   {
      ::TFitParticleRelPxPyPzE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPxPyPzE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPxPyPzE", ::TFitParticleRelPxPyPzE::Class_Version(), "TFitParticleRelPxPyPzE.h", 10,
                  typeid(::TFitParticleRelPxPyPzE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPxPyPzE::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPxPyPzE) );
      instance.SetNew(&new_TFitParticleRelPxPyPzE);
      instance.SetNewArray(&newArray_TFitParticleRelPxPyPzE);
      instance.SetDelete(&delete_TFitParticleRelPxPyPzE);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPxPyPzE);
      instance.SetDestructor(&destruct_TFitParticleRelPxPyPzE);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPxPyPzE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPxPyPzE*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPxPyPzE*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzE*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitParticleRelPxPyPzM(void *p = nullptr);
   static void *newArray_TFitParticleRelPxPyPzM(Long_t size, void *p);
   static void delete_TFitParticleRelPxPyPzM(void *p);
   static void deleteArray_TFitParticleRelPxPyPzM(void *p);
   static void destruct_TFitParticleRelPxPyPzM(void *p);
   static void streamer_TFitParticleRelPxPyPzM(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParticleRelPxPyPzM*)
   {
      ::TFitParticleRelPxPyPzM *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParticleRelPxPyPzM >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParticleRelPxPyPzM", ::TFitParticleRelPxPyPzM::Class_Version(), "TFitParticleRelPxPyPzM.h", 10,
                  typeid(::TFitParticleRelPxPyPzM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParticleRelPxPyPzM::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParticleRelPxPyPzM) );
      instance.SetNew(&new_TFitParticleRelPxPyPzM);
      instance.SetNewArray(&newArray_TFitParticleRelPxPyPzM);
      instance.SetDelete(&delete_TFitParticleRelPxPyPzM);
      instance.SetDeleteArray(&deleteArray_TFitParticleRelPxPyPzM);
      instance.SetDestructor(&destruct_TFitParticleRelPxPyPzM);
      instance.SetStreamerFunc(&streamer_TFitParticleRelPxPyPzM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParticleRelPxPyPzM*)
   {
      return GenerateInitInstanceLocal((::TFitParticleRelPxPyPzM*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzM*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGetErrorMatrix(void *p = nullptr);
   static void *newArray_TGetErrorMatrix(Long_t size, void *p);
   static void delete_TGetErrorMatrix(void *p);
   static void deleteArray_TGetErrorMatrix(void *p);
   static void destruct_TGetErrorMatrix(void *p);
   static void streamer_TGetErrorMatrix(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGetErrorMatrix*)
   {
      ::TGetErrorMatrix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGetErrorMatrix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGetErrorMatrix", ::TGetErrorMatrix::Class_Version(), "TGetErrorMatrix.h", 19,
                  typeid(::TGetErrorMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGetErrorMatrix::Dictionary, isa_proxy, 16,
                  sizeof(::TGetErrorMatrix) );
      instance.SetNew(&new_TGetErrorMatrix);
      instance.SetNewArray(&newArray_TGetErrorMatrix);
      instance.SetDelete(&delete_TGetErrorMatrix);
      instance.SetDeleteArray(&deleteArray_TGetErrorMatrix);
      instance.SetDestructor(&destruct_TGetErrorMatrix);
      instance.SetStreamerFunc(&streamer_TGetErrorMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGetErrorMatrix*)
   {
      return GenerateInitInstanceLocal((::TGetErrorMatrix*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGetErrorMatrix*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKinFitter(void *p = nullptr);
   static void *newArray_TKinFitter(Long_t size, void *p);
   static void delete_TKinFitter(void *p);
   static void deleteArray_TKinFitter(void *p);
   static void destruct_TKinFitter(void *p);
   static void streamer_TKinFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKinFitter*)
   {
      ::TKinFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKinFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TKinFitter", ::TKinFitter::Class_Version(), "TKinFitter.h", 17,
                  typeid(::TKinFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKinFitter::Dictionary, isa_proxy, 16,
                  sizeof(::TKinFitter) );
      instance.SetNew(&new_TKinFitter);
      instance.SetNewArray(&newArray_TKinFitter);
      instance.SetDelete(&delete_TKinFitter);
      instance.SetDeleteArray(&deleteArray_TKinFitter);
      instance.SetDestructor(&destruct_TKinFitter);
      instance.SetStreamerFunc(&streamer_TKinFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKinFitter*)
   {
      return GenerateInitInstanceLocal((::TKinFitter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TKinFitter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TToyGentT(void *p = nullptr);
   static void *newArray_TToyGentT(Long_t size, void *p);
   static void delete_TToyGentT(void *p);
   static void deleteArray_TToyGentT(void *p);
   static void destruct_TToyGentT(void *p);
   static void streamer_TToyGentT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TToyGentT*)
   {
      ::TToyGentT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TToyGentT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TToyGentT", ::TToyGentT::Class_Version(), "TToyGentT.h", 26,
                  typeid(::TToyGentT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TToyGentT::Dictionary, isa_proxy, 16,
                  sizeof(::TToyGentT) );
      instance.SetNew(&new_TToyGentT);
      instance.SetNewArray(&newArray_TToyGentT);
      instance.SetDelete(&delete_TToyGentT);
      instance.SetDeleteArray(&deleteArray_TToyGentT);
      instance.SetDestructor(&destruct_TToyGentT);
      instance.SetStreamerFunc(&streamer_TToyGentT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TToyGentT*)
   {
      return GenerateInitInstanceLocal((::TToyGentT*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TToyGentT*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAbsFitParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAbsFitParticle::Class_Name()
{
   return "TAbsFitParticle";
}

//______________________________________________________________________________
const char *TAbsFitParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAbsFitParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAbsFitParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAbsFitParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAbsFitConstraint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAbsFitConstraint::Class_Name()
{
   return "TAbsFitConstraint";
}

//______________________________________________________________________________
const char *TAbsFitConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitConstraint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAbsFitConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitConstraint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAbsFitConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitConstraint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAbsFitConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAbsFitConstraint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintEp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintEp::Class_Name()
{
   return "TFitConstraintEp";
}

//______________________________________________________________________________
const char *TFitConstraintEp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintEp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintEp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintEp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintEpGaus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintEpGaus::Class_Name()
{
   return "TFitConstraintEpGaus";
}

//______________________________________________________________________________
const char *TFitConstraintEpGaus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEpGaus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintEpGaus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEpGaus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintEpGaus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEpGaus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintEpGaus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintEpGaus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintM::Class_Name()
{
   return "TFitConstraintM";
}

//______________________________________________________________________________
const char *TFitConstraintM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintMBW::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintMBW::Class_Name()
{
   return "TFitConstraintMBW";
}

//______________________________________________________________________________
const char *TFitConstraintMBW::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMBW*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintMBW::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMBW*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintMBW::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMBW*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintMBW::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMBW*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintMGaus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintMGaus::Class_Name()
{
   return "TFitConstraintMGaus";
}

//______________________________________________________________________________
const char *TFitConstraintMGaus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMGaus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintMGaus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMGaus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintMGaus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMGaus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintMGaus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintMGaus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitConstraintPt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitConstraintPt::Class_Name()
{
   return "TFitConstraintPt";
}

//______________________________________________________________________________
const char *TFitConstraintPt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintPt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitConstraintPt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintPt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitConstraintPt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintPt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitConstraintPt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitConstraintPt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePInvThetaPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhi::Class_Name()
{
   return "TFitParticlePInvThetaPhi";
}

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePInvThetaPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePInvThetaPhiE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhiE::Class_Name()
{
   return "TFitParticlePInvThetaPhiE";
}

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhiE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePInvThetaPhiE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhiE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhiE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePInvThetaPhiM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhiM::Class_Name()
{
   return "TFitParticlePInvThetaPhiM";
}

//______________________________________________________________________________
const char *TFitParticlePInvThetaPhiM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePInvThetaPhiM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhiM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePInvThetaPhiM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePInvThetaPhiM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePtEtaPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePtEtaPhi::Class_Name()
{
   return "TFitParticlePtEtaPhi";
}

//______________________________________________________________________________
const char *TFitParticlePtEtaPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePtEtaPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePtEtaPhiE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePtEtaPhiE::Class_Name()
{
   return "TFitParticlePtEtaPhiE";
}

//______________________________________________________________________________
const char *TFitParticlePtEtaPhiE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePtEtaPhiE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhiE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhiE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePtEtaPhiM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePtEtaPhiM::Class_Name()
{
   return "TFitParticlePtEtaPhiM";
}

//______________________________________________________________________________
const char *TFitParticlePtEtaPhiM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePtEtaPhiM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhiM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePtEtaPhiM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePtEtaPhiM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePThetaPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePThetaPhi::Class_Name()
{
   return "TFitParticlePThetaPhi";
}

//______________________________________________________________________________
const char *TFitParticlePThetaPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePThetaPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePThetaPhiE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePThetaPhiE::Class_Name()
{
   return "TFitParticlePThetaPhiE";
}

//______________________________________________________________________________
const char *TFitParticlePThetaPhiE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePThetaPhiE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhiE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhiE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePThetaPhiM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePThetaPhiM::Class_Name()
{
   return "TFitParticlePThetaPhiM";
}

//______________________________________________________________________________
const char *TFitParticlePThetaPhiM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePThetaPhiM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhiM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePThetaPhiM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePThetaPhiM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePxPyPz::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePxPyPz::Class_Name()
{
   return "TFitParticlePxPyPz";
}

//______________________________________________________________________________
const char *TFitParticlePxPyPz::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPz*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePxPyPz::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPz*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPz::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPz*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPz::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPz*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePxPyPzE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePxPyPzE::Class_Name()
{
   return "TFitParticlePxPyPzE";
}

//______________________________________________________________________________
const char *TFitParticlePxPyPzE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePxPyPzE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPzE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPzE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticlePxPyPzM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticlePxPyPzM::Class_Name()
{
   return "TFitParticlePxPyPzM";
}

//______________________________________________________________________________
const char *TFitParticlePxPyPzM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticlePxPyPzM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPzM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticlePxPyPzM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticlePxPyPzM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelE::Class_Name()
{
   return "TFitParticleRelE";
}

//______________________________________________________________________________
const char *TFitParticleRelE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPtEtaPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhi::Class_Name()
{
   return "TFitParticleRelPtEtaPhi";
}

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPtEtaPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPtEtaPhiE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhiE::Class_Name()
{
   return "TFitParticleRelPtEtaPhiE";
}

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhiE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPtEtaPhiE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhiE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhiE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPtEtaPhiM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhiM::Class_Name()
{
   return "TFitParticleRelPtEtaPhiM";
}

//______________________________________________________________________________
const char *TFitParticleRelPtEtaPhiM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPtEtaPhiM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhiM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPtEtaPhiM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPtEtaPhiM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPxPyPz::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPxPyPz::Class_Name()
{
   return "TFitParticleRelPxPyPz";
}

//______________________________________________________________________________
const char *TFitParticleRelPxPyPz::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPz*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPxPyPz::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPz*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPz::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPz*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPz::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPz*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPxPyPzE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPxPyPzE::Class_Name()
{
   return "TFitParticleRelPxPyPzE";
}

//______________________________________________________________________________
const char *TFitParticleRelPxPyPzE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPxPyPzE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPzE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPzE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParticleRelPxPyPzM::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParticleRelPxPyPzM::Class_Name()
{
   return "TFitParticleRelPxPyPzM";
}

//______________________________________________________________________________
const char *TFitParticleRelPxPyPzM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzM*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParticleRelPxPyPzM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzM*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPzM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzM*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParticleRelPxPyPzM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParticleRelPxPyPzM*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGetErrorMatrix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGetErrorMatrix::Class_Name()
{
   return "TGetErrorMatrix";
}

//______________________________________________________________________________
const char *TGetErrorMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGetErrorMatrix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGetErrorMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGetErrorMatrix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGetErrorMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGetErrorMatrix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGetErrorMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGetErrorMatrix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKinFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TKinFitter::Class_Name()
{
   return "TKinFitter";
}

//______________________________________________________________________________
const char *TKinFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKinFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TKinFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKinFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKinFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKinFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKinFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKinFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TToyGentT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TToyGentT::Class_Name()
{
   return "TToyGentT";
}

//______________________________________________________________________________
const char *TToyGentT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TToyGentT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TToyGentT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TToyGentT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TToyGentT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TToyGentT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TToyGentT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TToyGentT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAbsFitParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAbsFitParticle.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> _nPar;
      _u1.Streamer(R__b);
      _u2.Streamer(R__b);
      _u3.Streamer(R__b);
      _covMatrix.Streamer(R__b);
      _covMatrixFit.Streamer(R__b);
      _covMatrixDeltaY.Streamer(R__b);
      _pull.Streamer(R__b);
      _iniparameters.Streamer(R__b);
      _parameters.Streamer(R__b);
      _pini.Streamer(R__b);
      _pcurr.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TAbsFitParticle::IsA());
   } else {
      R__c = R__b.WriteVersion(TAbsFitParticle::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << _nPar;
      _u1.Streamer(R__b);
      _u2.Streamer(R__b);
      _u3.Streamer(R__b);
      _covMatrix.Streamer(R__b);
      _covMatrixFit.Streamer(R__b);
      _covMatrixDeltaY.Streamer(R__b);
      _pull.Streamer(R__b);
      _iniparameters.Streamer(R__b);
      _parameters.Streamer(R__b);
      _pini.Streamer(R__b);
      _pcurr.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAbsFitParticle(void *p) {
      delete ((::TAbsFitParticle*)p);
   }
   static void deleteArray_TAbsFitParticle(void *p) {
      delete [] ((::TAbsFitParticle*)p);
   }
   static void destruct_TAbsFitParticle(void *p) {
      typedef ::TAbsFitParticle current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAbsFitParticle(TBuffer &buf, void *obj) {
      ((::TAbsFitParticle*)obj)->::TAbsFitParticle::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAbsFitParticle

//______________________________________________________________________________
void TAbsFitConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAbsFitConstraint.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> _nPar;
      _covMatrix.Streamer(R__b);
      _covMatrixFit.Streamer(R__b);
      _covMatrixDeltaAlpha.Streamer(R__b);
      _iniparameters.Streamer(R__b);
      _parameters.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TAbsFitConstraint::IsA());
   } else {
      R__c = R__b.WriteVersion(TAbsFitConstraint::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << _nPar;
      _covMatrix.Streamer(R__b);
      _covMatrixFit.Streamer(R__b);
      _covMatrixDeltaAlpha.Streamer(R__b);
      _iniparameters.Streamer(R__b);
      _parameters.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAbsFitConstraint(void *p) {
      delete ((::TAbsFitConstraint*)p);
   }
   static void deleteArray_TAbsFitConstraint(void *p) {
      delete [] ((::TAbsFitConstraint*)p);
   }
   static void destruct_TAbsFitConstraint(void *p) {
      typedef ::TAbsFitConstraint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAbsFitConstraint(TBuffer &buf, void *obj) {
      ((::TAbsFitConstraint*)obj)->::TAbsFitConstraint::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAbsFitConstraint

//______________________________________________________________________________
void TFitConstraintEp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintEp.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _particles1;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_particles1 streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _particles2;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_particles2 streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> _constraint;
      void *ptr__component = (void*)&_component;
      R__b >> *reinterpret_cast<Int_t*>(ptr__component);
      R__b.CheckByteCount(R__s, R__c, TFitConstraintEp::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintEp::IsA(), kTRUE);
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _particles1;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _particles2;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _constraint;
      R__b << (Int_t)_component;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintEp(void *p) {
      return  p ? new(p) ::TFitConstraintEp : new ::TFitConstraintEp;
   }
   static void *newArray_TFitConstraintEp(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintEp[nElements] : new ::TFitConstraintEp[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintEp(void *p) {
      delete ((::TFitConstraintEp*)p);
   }
   static void deleteArray_TFitConstraintEp(void *p) {
      delete [] ((::TFitConstraintEp*)p);
   }
   static void destruct_TFitConstraintEp(void *p) {
      typedef ::TFitConstraintEp current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintEp(TBuffer &buf, void *obj) {
      ((::TFitConstraintEp*)obj)->::TFitConstraintEp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintEp

//______________________________________________________________________________
void TFitConstraintEpGaus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintEpGaus.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFitConstraintEp::Streamer(R__b);
      R__b >> _width;
      R__b.CheckByteCount(R__s, R__c, TFitConstraintEpGaus::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintEpGaus::IsA(), kTRUE);
      TFitConstraintEp::Streamer(R__b);
      R__b << _width;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintEpGaus(void *p) {
      return  p ? new(p) ::TFitConstraintEpGaus : new ::TFitConstraintEpGaus;
   }
   static void *newArray_TFitConstraintEpGaus(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintEpGaus[nElements] : new ::TFitConstraintEpGaus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintEpGaus(void *p) {
      delete ((::TFitConstraintEpGaus*)p);
   }
   static void deleteArray_TFitConstraintEpGaus(void *p) {
      delete [] ((::TFitConstraintEpGaus*)p);
   }
   static void destruct_TFitConstraintEpGaus(void *p) {
      typedef ::TFitConstraintEpGaus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintEpGaus(TBuffer &buf, void *obj) {
      ((::TFitConstraintEpGaus*)obj)->::TFitConstraintEpGaus::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintEpGaus

//______________________________________________________________________________
void TFitConstraintM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _ParList1;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_ParList1 streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _ParList2;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_ParList2 streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> _TheMassConstraint;
      R__b.CheckByteCount(R__s, R__c, TFitConstraintM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintM::IsA(), kTRUE);
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _ParList1;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _ParList2;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _TheMassConstraint;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintM(void *p) {
      return  p ? new(p) ::TFitConstraintM : new ::TFitConstraintM;
   }
   static void *newArray_TFitConstraintM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintM[nElements] : new ::TFitConstraintM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintM(void *p) {
      delete ((::TFitConstraintM*)p);
   }
   static void deleteArray_TFitConstraintM(void *p) {
      delete [] ((::TFitConstraintM*)p);
   }
   static void destruct_TFitConstraintM(void *p) {
      typedef ::TFitConstraintM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintM(TBuffer &buf, void *obj) {
      ((::TFitConstraintM*)obj)->::TFitConstraintM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintM

//______________________________________________________________________________
void TFitConstraintMBW::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintMBW.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFitConstraintM::Streamer(R__b);
      R__b >> _width;
      R__b >> _sigma;
      R__b.CheckByteCount(R__s, R__c, TFitConstraintMBW::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintMBW::IsA(), kTRUE);
      TFitConstraintM::Streamer(R__b);
      R__b << _width;
      R__b << _sigma;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintMBW(void *p) {
      return  p ? new(p) ::TFitConstraintMBW : new ::TFitConstraintMBW;
   }
   static void *newArray_TFitConstraintMBW(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintMBW[nElements] : new ::TFitConstraintMBW[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintMBW(void *p) {
      delete ((::TFitConstraintMBW*)p);
   }
   static void deleteArray_TFitConstraintMBW(void *p) {
      delete [] ((::TFitConstraintMBW*)p);
   }
   static void destruct_TFitConstraintMBW(void *p) {
      typedef ::TFitConstraintMBW current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintMBW(TBuffer &buf, void *obj) {
      ((::TFitConstraintMBW*)obj)->::TFitConstraintMBW::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintMBW

//______________________________________________________________________________
void TFitConstraintMGaus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintMGaus.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TFitConstraintM::Streamer(R__b);
      R__b >> _width;
      R__b.CheckByteCount(R__s, R__c, TFitConstraintMGaus::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintMGaus::IsA(), kTRUE);
      TFitConstraintM::Streamer(R__b);
      R__b << _width;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintMGaus(void *p) {
      return  p ? new(p) ::TFitConstraintMGaus : new ::TFitConstraintMGaus;
   }
   static void *newArray_TFitConstraintMGaus(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintMGaus[nElements] : new ::TFitConstraintMGaus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintMGaus(void *p) {
      delete ((::TFitConstraintMGaus*)p);
   }
   static void deleteArray_TFitConstraintMGaus(void *p) {
      delete [] ((::TFitConstraintMGaus*)p);
   }
   static void destruct_TFitConstraintMGaus(void *p) {
      typedef ::TFitConstraintMGaus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintMGaus(TBuffer &buf, void *obj) {
      ((::TFitConstraintMGaus*)obj)->::TFitConstraintMGaus::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintMGaus

//______________________________________________________________________________
void TFitConstraintPt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitConstraintPt.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _particles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_particles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> _constraint;
      R__b.CheckByteCount(R__s, R__c, TFitConstraintPt::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitConstraintPt::IsA(), kTRUE);
      TAbsFitConstraint::Streamer(R__b);
      {
         vector<TAbsFitParticle*> &R__stl =  _particles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _constraint;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitConstraintPt(void *p) {
      return  p ? new(p) ::TFitConstraintPt : new ::TFitConstraintPt;
   }
   static void *newArray_TFitConstraintPt(Long_t nElements, void *p) {
      return p ? new(p) ::TFitConstraintPt[nElements] : new ::TFitConstraintPt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitConstraintPt(void *p) {
      delete ((::TFitConstraintPt*)p);
   }
   static void deleteArray_TFitConstraintPt(void *p) {
      delete [] ((::TFitConstraintPt*)p);
   }
   static void destruct_TFitConstraintPt(void *p) {
      typedef ::TFitConstraintPt current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitConstraintPt(TBuffer &buf, void *obj) {
      ((::TFitConstraintPt*)obj)->::TFitConstraintPt::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitConstraintPt

//______________________________________________________________________________
void TFitParticlePInvThetaPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePInvThetaPhi.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePInvThetaPhi::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePInvThetaPhi::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePInvThetaPhi(void *p) {
      return  p ? new(p) ::TFitParticlePInvThetaPhi : new ::TFitParticlePInvThetaPhi;
   }
   static void *newArray_TFitParticlePInvThetaPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePInvThetaPhi[nElements] : new ::TFitParticlePInvThetaPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePInvThetaPhi(void *p) {
      delete ((::TFitParticlePInvThetaPhi*)p);
   }
   static void deleteArray_TFitParticlePInvThetaPhi(void *p) {
      delete [] ((::TFitParticlePInvThetaPhi*)p);
   }
   static void destruct_TFitParticlePInvThetaPhi(void *p) {
      typedef ::TFitParticlePInvThetaPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePInvThetaPhi(TBuffer &buf, void *obj) {
      ((::TFitParticlePInvThetaPhi*)obj)->::TFitParticlePInvThetaPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePInvThetaPhi

//______________________________________________________________________________
void TFitParticlePInvThetaPhiE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePInvThetaPhiE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePInvThetaPhiE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePInvThetaPhiE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePInvThetaPhiE(void *p) {
      return  p ? new(p) ::TFitParticlePInvThetaPhiE : new ::TFitParticlePInvThetaPhiE;
   }
   static void *newArray_TFitParticlePInvThetaPhiE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePInvThetaPhiE[nElements] : new ::TFitParticlePInvThetaPhiE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePInvThetaPhiE(void *p) {
      delete ((::TFitParticlePInvThetaPhiE*)p);
   }
   static void deleteArray_TFitParticlePInvThetaPhiE(void *p) {
      delete [] ((::TFitParticlePInvThetaPhiE*)p);
   }
   static void destruct_TFitParticlePInvThetaPhiE(void *p) {
      typedef ::TFitParticlePInvThetaPhiE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePInvThetaPhiE(TBuffer &buf, void *obj) {
      ((::TFitParticlePInvThetaPhiE*)obj)->::TFitParticlePInvThetaPhiE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePInvThetaPhiE

//______________________________________________________________________________
void TFitParticlePInvThetaPhiM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePInvThetaPhiM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePInvThetaPhiM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePInvThetaPhiM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePInvThetaPhiM(void *p) {
      return  p ? new(p) ::TFitParticlePInvThetaPhiM : new ::TFitParticlePInvThetaPhiM;
   }
   static void *newArray_TFitParticlePInvThetaPhiM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePInvThetaPhiM[nElements] : new ::TFitParticlePInvThetaPhiM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePInvThetaPhiM(void *p) {
      delete ((::TFitParticlePInvThetaPhiM*)p);
   }
   static void deleteArray_TFitParticlePInvThetaPhiM(void *p) {
      delete [] ((::TFitParticlePInvThetaPhiM*)p);
   }
   static void destruct_TFitParticlePInvThetaPhiM(void *p) {
      typedef ::TFitParticlePInvThetaPhiM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePInvThetaPhiM(TBuffer &buf, void *obj) {
      ((::TFitParticlePInvThetaPhiM*)obj)->::TFitParticlePInvThetaPhiM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePInvThetaPhiM

//______________________________________________________________________________
void TFitParticlePtEtaPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePtEtaPhi.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePtEtaPhi::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePtEtaPhi::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePtEtaPhi(void *p) {
      return  p ? new(p) ::TFitParticlePtEtaPhi : new ::TFitParticlePtEtaPhi;
   }
   static void *newArray_TFitParticlePtEtaPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePtEtaPhi[nElements] : new ::TFitParticlePtEtaPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePtEtaPhi(void *p) {
      delete ((::TFitParticlePtEtaPhi*)p);
   }
   static void deleteArray_TFitParticlePtEtaPhi(void *p) {
      delete [] ((::TFitParticlePtEtaPhi*)p);
   }
   static void destruct_TFitParticlePtEtaPhi(void *p) {
      typedef ::TFitParticlePtEtaPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePtEtaPhi(TBuffer &buf, void *obj) {
      ((::TFitParticlePtEtaPhi*)obj)->::TFitParticlePtEtaPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePtEtaPhi

//______________________________________________________________________________
void TFitParticlePtEtaPhiE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePtEtaPhiE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePtEtaPhiE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePtEtaPhiE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePtEtaPhiE(void *p) {
      return  p ? new(p) ::TFitParticlePtEtaPhiE : new ::TFitParticlePtEtaPhiE;
   }
   static void *newArray_TFitParticlePtEtaPhiE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePtEtaPhiE[nElements] : new ::TFitParticlePtEtaPhiE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePtEtaPhiE(void *p) {
      delete ((::TFitParticlePtEtaPhiE*)p);
   }
   static void deleteArray_TFitParticlePtEtaPhiE(void *p) {
      delete [] ((::TFitParticlePtEtaPhiE*)p);
   }
   static void destruct_TFitParticlePtEtaPhiE(void *p) {
      typedef ::TFitParticlePtEtaPhiE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePtEtaPhiE(TBuffer &buf, void *obj) {
      ((::TFitParticlePtEtaPhiE*)obj)->::TFitParticlePtEtaPhiE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePtEtaPhiE

//______________________________________________________________________________
void TFitParticlePtEtaPhiM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePtEtaPhiM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePtEtaPhiM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePtEtaPhiM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePtEtaPhiM(void *p) {
      return  p ? new(p) ::TFitParticlePtEtaPhiM : new ::TFitParticlePtEtaPhiM;
   }
   static void *newArray_TFitParticlePtEtaPhiM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePtEtaPhiM[nElements] : new ::TFitParticlePtEtaPhiM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePtEtaPhiM(void *p) {
      delete ((::TFitParticlePtEtaPhiM*)p);
   }
   static void deleteArray_TFitParticlePtEtaPhiM(void *p) {
      delete [] ((::TFitParticlePtEtaPhiM*)p);
   }
   static void destruct_TFitParticlePtEtaPhiM(void *p) {
      typedef ::TFitParticlePtEtaPhiM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePtEtaPhiM(TBuffer &buf, void *obj) {
      ((::TFitParticlePtEtaPhiM*)obj)->::TFitParticlePtEtaPhiM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePtEtaPhiM

//______________________________________________________________________________
void TFitParticlePThetaPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePThetaPhi.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePThetaPhi::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePThetaPhi::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePThetaPhi(void *p) {
      return  p ? new(p) ::TFitParticlePThetaPhi : new ::TFitParticlePThetaPhi;
   }
   static void *newArray_TFitParticlePThetaPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePThetaPhi[nElements] : new ::TFitParticlePThetaPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePThetaPhi(void *p) {
      delete ((::TFitParticlePThetaPhi*)p);
   }
   static void deleteArray_TFitParticlePThetaPhi(void *p) {
      delete [] ((::TFitParticlePThetaPhi*)p);
   }
   static void destruct_TFitParticlePThetaPhi(void *p) {
      typedef ::TFitParticlePThetaPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePThetaPhi(TBuffer &buf, void *obj) {
      ((::TFitParticlePThetaPhi*)obj)->::TFitParticlePThetaPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePThetaPhi

//______________________________________________________________________________
void TFitParticlePThetaPhiE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePThetaPhiE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePThetaPhiE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePThetaPhiE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePThetaPhiE(void *p) {
      return  p ? new(p) ::TFitParticlePThetaPhiE : new ::TFitParticlePThetaPhiE;
   }
   static void *newArray_TFitParticlePThetaPhiE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePThetaPhiE[nElements] : new ::TFitParticlePThetaPhiE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePThetaPhiE(void *p) {
      delete ((::TFitParticlePThetaPhiE*)p);
   }
   static void deleteArray_TFitParticlePThetaPhiE(void *p) {
      delete [] ((::TFitParticlePThetaPhiE*)p);
   }
   static void destruct_TFitParticlePThetaPhiE(void *p) {
      typedef ::TFitParticlePThetaPhiE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePThetaPhiE(TBuffer &buf, void *obj) {
      ((::TFitParticlePThetaPhiE*)obj)->::TFitParticlePThetaPhiE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePThetaPhiE

//______________________________________________________________________________
void TFitParticlePThetaPhiM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePThetaPhiM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePThetaPhiM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePThetaPhiM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePThetaPhiM(void *p) {
      return  p ? new(p) ::TFitParticlePThetaPhiM : new ::TFitParticlePThetaPhiM;
   }
   static void *newArray_TFitParticlePThetaPhiM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePThetaPhiM[nElements] : new ::TFitParticlePThetaPhiM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePThetaPhiM(void *p) {
      delete ((::TFitParticlePThetaPhiM*)p);
   }
   static void deleteArray_TFitParticlePThetaPhiM(void *p) {
      delete [] ((::TFitParticlePThetaPhiM*)p);
   }
   static void destruct_TFitParticlePThetaPhiM(void *p) {
      typedef ::TFitParticlePThetaPhiM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePThetaPhiM(TBuffer &buf, void *obj) {
      ((::TFitParticlePThetaPhiM*)obj)->::TFitParticlePThetaPhiM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePThetaPhiM

//______________________________________________________________________________
void TFitParticlePxPyPz::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePxPyPz.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePxPyPz::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePxPyPz::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePxPyPz(void *p) {
      return  p ? new(p) ::TFitParticlePxPyPz : new ::TFitParticlePxPyPz;
   }
   static void *newArray_TFitParticlePxPyPz(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePxPyPz[nElements] : new ::TFitParticlePxPyPz[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePxPyPz(void *p) {
      delete ((::TFitParticlePxPyPz*)p);
   }
   static void deleteArray_TFitParticlePxPyPz(void *p) {
      delete [] ((::TFitParticlePxPyPz*)p);
   }
   static void destruct_TFitParticlePxPyPz(void *p) {
      typedef ::TFitParticlePxPyPz current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePxPyPz(TBuffer &buf, void *obj) {
      ((::TFitParticlePxPyPz*)obj)->::TFitParticlePxPyPz::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePxPyPz

//______________________________________________________________________________
void TFitParticlePxPyPzE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePxPyPzE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePxPyPzE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePxPyPzE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePxPyPzE(void *p) {
      return  p ? new(p) ::TFitParticlePxPyPzE : new ::TFitParticlePxPyPzE;
   }
   static void *newArray_TFitParticlePxPyPzE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePxPyPzE[nElements] : new ::TFitParticlePxPyPzE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePxPyPzE(void *p) {
      delete ((::TFitParticlePxPyPzE*)p);
   }
   static void deleteArray_TFitParticlePxPyPzE(void *p) {
      delete [] ((::TFitParticlePxPyPzE*)p);
   }
   static void destruct_TFitParticlePxPyPzE(void *p) {
      typedef ::TFitParticlePxPyPzE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePxPyPzE(TBuffer &buf, void *obj) {
      ((::TFitParticlePxPyPzE*)obj)->::TFitParticlePxPyPzE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePxPyPzE

//______________________________________________________________________________
void TFitParticlePxPyPzM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticlePxPyPzM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticlePxPyPzM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticlePxPyPzM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticlePxPyPzM(void *p) {
      return  p ? new(p) ::TFitParticlePxPyPzM : new ::TFitParticlePxPyPzM;
   }
   static void *newArray_TFitParticlePxPyPzM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticlePxPyPzM[nElements] : new ::TFitParticlePxPyPzM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticlePxPyPzM(void *p) {
      delete ((::TFitParticlePxPyPzM*)p);
   }
   static void deleteArray_TFitParticlePxPyPzM(void *p) {
      delete [] ((::TFitParticlePxPyPzM*)p);
   }
   static void destruct_TFitParticlePxPyPzM(void *p) {
      typedef ::TFitParticlePxPyPzM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticlePxPyPzM(TBuffer &buf, void *obj) {
      ((::TFitParticlePxPyPzM*)obj)->::TFitParticlePxPyPzM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticlePxPyPzM

//______________________________________________________________________________
void TFitParticleRelE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelE(void *p) {
      return  p ? new(p) ::TFitParticleRelE : new ::TFitParticleRelE;
   }
   static void *newArray_TFitParticleRelE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelE[nElements] : new ::TFitParticleRelE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelE(void *p) {
      delete ((::TFitParticleRelE*)p);
   }
   static void deleteArray_TFitParticleRelE(void *p) {
      delete [] ((::TFitParticleRelE*)p);
   }
   static void destruct_TFitParticleRelE(void *p) {
      typedef ::TFitParticleRelE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelE(TBuffer &buf, void *obj) {
      ((::TFitParticleRelE*)obj)->::TFitParticleRelE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelE

//______________________________________________________________________________
void TFitParticleRelPtEtaPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPtEtaPhi.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPtEtaPhi::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPtEtaPhi::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPtEtaPhi(void *p) {
      return  p ? new(p) ::TFitParticleRelPtEtaPhi : new ::TFitParticleRelPtEtaPhi;
   }
   static void *newArray_TFitParticleRelPtEtaPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPtEtaPhi[nElements] : new ::TFitParticleRelPtEtaPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPtEtaPhi(void *p) {
      delete ((::TFitParticleRelPtEtaPhi*)p);
   }
   static void deleteArray_TFitParticleRelPtEtaPhi(void *p) {
      delete [] ((::TFitParticleRelPtEtaPhi*)p);
   }
   static void destruct_TFitParticleRelPtEtaPhi(void *p) {
      typedef ::TFitParticleRelPtEtaPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPtEtaPhi(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPtEtaPhi*)obj)->::TFitParticleRelPtEtaPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPtEtaPhi

//______________________________________________________________________________
void TFitParticleRelPtEtaPhiE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPtEtaPhiE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPtEtaPhiE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPtEtaPhiE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPtEtaPhiE(void *p) {
      return  p ? new(p) ::TFitParticleRelPtEtaPhiE : new ::TFitParticleRelPtEtaPhiE;
   }
   static void *newArray_TFitParticleRelPtEtaPhiE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPtEtaPhiE[nElements] : new ::TFitParticleRelPtEtaPhiE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPtEtaPhiE(void *p) {
      delete ((::TFitParticleRelPtEtaPhiE*)p);
   }
   static void deleteArray_TFitParticleRelPtEtaPhiE(void *p) {
      delete [] ((::TFitParticleRelPtEtaPhiE*)p);
   }
   static void destruct_TFitParticleRelPtEtaPhiE(void *p) {
      typedef ::TFitParticleRelPtEtaPhiE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPtEtaPhiE(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPtEtaPhiE*)obj)->::TFitParticleRelPtEtaPhiE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPtEtaPhiE

//______________________________________________________________________________
void TFitParticleRelPtEtaPhiM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPtEtaPhiM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPtEtaPhiM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPtEtaPhiM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPtEtaPhiM(void *p) {
      return  p ? new(p) ::TFitParticleRelPtEtaPhiM : new ::TFitParticleRelPtEtaPhiM;
   }
   static void *newArray_TFitParticleRelPtEtaPhiM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPtEtaPhiM[nElements] : new ::TFitParticleRelPtEtaPhiM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPtEtaPhiM(void *p) {
      delete ((::TFitParticleRelPtEtaPhiM*)p);
   }
   static void deleteArray_TFitParticleRelPtEtaPhiM(void *p) {
      delete [] ((::TFitParticleRelPtEtaPhiM*)p);
   }
   static void destruct_TFitParticleRelPtEtaPhiM(void *p) {
      typedef ::TFitParticleRelPtEtaPhiM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPtEtaPhiM(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPtEtaPhiM*)obj)->::TFitParticleRelPtEtaPhiM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPtEtaPhiM

//______________________________________________________________________________
void TFitParticleRelPxPyPz::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPxPyPz.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPxPyPz::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPxPyPz::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPxPyPz(void *p) {
      return  p ? new(p) ::TFitParticleRelPxPyPz : new ::TFitParticleRelPxPyPz;
   }
   static void *newArray_TFitParticleRelPxPyPz(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPxPyPz[nElements] : new ::TFitParticleRelPxPyPz[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPxPyPz(void *p) {
      delete ((::TFitParticleRelPxPyPz*)p);
   }
   static void deleteArray_TFitParticleRelPxPyPz(void *p) {
      delete [] ((::TFitParticleRelPxPyPz*)p);
   }
   static void destruct_TFitParticleRelPxPyPz(void *p) {
      typedef ::TFitParticleRelPxPyPz current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPxPyPz(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPxPyPz*)obj)->::TFitParticleRelPxPyPz::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPxPyPz

//______________________________________________________________________________
void TFitParticleRelPxPyPzE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPxPyPzE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPxPyPzE::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPxPyPzE::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPxPyPzE(void *p) {
      return  p ? new(p) ::TFitParticleRelPxPyPzE : new ::TFitParticleRelPxPyPzE;
   }
   static void *newArray_TFitParticleRelPxPyPzE(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPxPyPzE[nElements] : new ::TFitParticleRelPxPyPzE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPxPyPzE(void *p) {
      delete ((::TFitParticleRelPxPyPzE*)p);
   }
   static void deleteArray_TFitParticleRelPxPyPzE(void *p) {
      delete [] ((::TFitParticleRelPxPyPzE*)p);
   }
   static void destruct_TFitParticleRelPxPyPzE(void *p) {
      typedef ::TFitParticleRelPxPyPzE current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPxPyPzE(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPxPyPzE*)obj)->::TFitParticleRelPxPyPzE::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPxPyPzE

//______________________________________________________________________________
void TFitParticleRelPxPyPzM::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParticleRelPxPyPzM.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAbsFitParticle::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TFitParticleRelPxPyPzM::IsA());
   } else {
      R__c = R__b.WriteVersion(TFitParticleRelPxPyPzM::IsA(), kTRUE);
      TAbsFitParticle::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitParticleRelPxPyPzM(void *p) {
      return  p ? new(p) ::TFitParticleRelPxPyPzM : new ::TFitParticleRelPxPyPzM;
   }
   static void *newArray_TFitParticleRelPxPyPzM(Long_t nElements, void *p) {
      return p ? new(p) ::TFitParticleRelPxPyPzM[nElements] : new ::TFitParticleRelPxPyPzM[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitParticleRelPxPyPzM(void *p) {
      delete ((::TFitParticleRelPxPyPzM*)p);
   }
   static void deleteArray_TFitParticleRelPxPyPzM(void *p) {
      delete [] ((::TFitParticleRelPxPyPzM*)p);
   }
   static void destruct_TFitParticleRelPxPyPzM(void *p) {
      typedef ::TFitParticleRelPxPyPzM current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParticleRelPxPyPzM(TBuffer &buf, void *obj) {
      ((::TFitParticleRelPxPyPzM*)obj)->::TFitParticleRelPxPyPzM::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParticleRelPxPyPzM

//______________________________________________________________________________
void TGetErrorMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGetErrorMatrix.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> _theParticle;
      R__b >> _nPar;
      _histarrays.Streamer(R__b);
      _histsPar1.Streamer(R__b);
      _histsPar2.Streamer(R__b);
      _histsPar3.Streamer(R__b);
      _histsPar4.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 16; R__i++)
         R__b >> _histsCorrMeas[R__i];
      for (R__i = 0; R__i < 16; R__i++)
         R__b >> _histsCorrTrue[R__i];
      _resulthistarray.Streamer(R__b);
      _histErrorMean.Streamer(R__b);
      _histErrorSigma.Streamer(R__b);
      _histErrorChi2NDF.Streamer(R__b);
      R__b >> _xAxis;
      R__b >> _yAxis;
      R__b >> _resolAxis;
      R__b.ReadStaticArray((double*)_params);
      R__b.ReadStaticArray((double*)_fitErrors);
      R__b >> _chi2;
      R__b >> _ndf;
      for (R__i = 0; R__i < 4; R__i++)
         _histnames[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 3; R__i++)
         _results[R__i].Streamer(R__b);
      R__b >> _verbose;
      R__b.CheckByteCount(R__s, R__c, TGetErrorMatrix::IsA());
   } else {
      R__c = R__b.WriteVersion(TGetErrorMatrix::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << _theParticle;
      R__b << _nPar;
      _histarrays.Streamer(R__b);
      _histsPar1.Streamer(R__b);
      _histsPar2.Streamer(R__b);
      _histsPar3.Streamer(R__b);
      _histsPar4.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 16; R__i++)
         R__b << (TObject*)_histsCorrMeas[R__i];
      for (R__i = 0; R__i < 16; R__i++)
         R__b << (TObject*)_histsCorrTrue[R__i];
      _resulthistarray.Streamer(R__b);
      _histErrorMean.Streamer(R__b);
      _histErrorSigma.Streamer(R__b);
      _histErrorChi2NDF.Streamer(R__b);
      R__b << _xAxis;
      R__b << _yAxis;
      R__b << _resolAxis;
      R__b.WriteArray(_params, 4);
      R__b.WriteArray(_fitErrors, 4);
      R__b << _chi2;
      R__b << _ndf;
      for (R__i = 0; R__i < 4; R__i++)
         _histnames[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 3; R__i++)
         _results[R__i].Streamer(R__b);
      R__b << _verbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGetErrorMatrix(void *p) {
      return  p ? new(p) ::TGetErrorMatrix : new ::TGetErrorMatrix;
   }
   static void *newArray_TGetErrorMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGetErrorMatrix[nElements] : new ::TGetErrorMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGetErrorMatrix(void *p) {
      delete ((::TGetErrorMatrix*)p);
   }
   static void deleteArray_TGetErrorMatrix(void *p) {
      delete [] ((::TGetErrorMatrix*)p);
   }
   static void destruct_TGetErrorMatrix(void *p) {
      typedef ::TGetErrorMatrix current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGetErrorMatrix(TBuffer &buf, void *obj) {
      ((::TGetErrorMatrix*)obj)->::TGetErrorMatrix::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGetErrorMatrix

//______________________________________________________________________________
void TKinFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKinFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> _maxNbIter;
      R__b >> _maxDeltaS;
      R__b >> _maxF;
      R__b >> _verbosity;
      _A.Streamer(R__b);
      _AT.Streamer(R__b);
      _B.Streamer(R__b);
      _BT.Streamer(R__b);
      _V.Streamer(R__b);
      _Vinv.Streamer(R__b);
      _VB.Streamer(R__b);
      _VBinv.Streamer(R__b);
      _VA.Streamer(R__b);
      _VAinv.Streamer(R__b);
      _c.Streamer(R__b);
      _C11.Streamer(R__b);
      _C11T.Streamer(R__b);
      _C21.Streamer(R__b);
      _C21T.Streamer(R__b);
      _C22.Streamer(R__b);
      _C22T.Streamer(R__b);
      _C31.Streamer(R__b);
      _C31T.Streamer(R__b);
      _C32.Streamer(R__b);
      _C32T.Streamer(R__b);
      _C33.Streamer(R__b);
      _C33T.Streamer(R__b);
      _deltaA.Streamer(R__b);
      _deltaY.Streamer(R__b);
      _lambda.Streamer(R__b);
      _lambdaT.Streamer(R__b);
      _lambdaVFit.Streamer(R__b);
      _yaVFit.Streamer(R__b);
      R__b >> _nParA;
      R__b >> _nParB;
      {
         vector<TAbsFitConstraint*> &R__stl =  _constraints;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitConstraint *));
         if (R__tcl1==0) {
            Error("_constraints streamer","Missing the TClass object for class TAbsFitConstraint *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitConstraint* R__t;
            R__t = (TAbsFitConstraint*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _particles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_particles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<Bool_t> &R__stl =  _paramMeasured;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            bool R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      R__b >> _status;
      R__b >> _nbIter;
      R__b.CheckByteCount(R__s, R__c, TKinFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(TKinFitter::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << _maxNbIter;
      R__b << _maxDeltaS;
      R__b << _maxF;
      R__b << _verbosity;
      _A.Streamer(R__b);
      _AT.Streamer(R__b);
      _B.Streamer(R__b);
      _BT.Streamer(R__b);
      _V.Streamer(R__b);
      _Vinv.Streamer(R__b);
      _VB.Streamer(R__b);
      _VBinv.Streamer(R__b);
      _VA.Streamer(R__b);
      _VAinv.Streamer(R__b);
      _c.Streamer(R__b);
      _C11.Streamer(R__b);
      _C11T.Streamer(R__b);
      _C21.Streamer(R__b);
      _C21T.Streamer(R__b);
      _C22.Streamer(R__b);
      _C22T.Streamer(R__b);
      _C31.Streamer(R__b);
      _C31T.Streamer(R__b);
      _C32.Streamer(R__b);
      _C32T.Streamer(R__b);
      _C33.Streamer(R__b);
      _C33T.Streamer(R__b);
      _deltaA.Streamer(R__b);
      _deltaY.Streamer(R__b);
      _lambda.Streamer(R__b);
      _lambdaT.Streamer(R__b);
      _lambdaVFit.Streamer(R__b);
      _yaVFit.Streamer(R__b);
      R__b << _nParA;
      R__b << _nParB;
      {
         vector<TAbsFitConstraint*> &R__stl =  _constraints;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitConstraint*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _particles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<Bool_t> &R__stl =  _paramMeasured;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<Bool_t>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _status;
      R__b << _nbIter;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKinFitter(void *p) {
      return  p ? new(p) ::TKinFitter : new ::TKinFitter;
   }
   static void *newArray_TKinFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TKinFitter[nElements] : new ::TKinFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKinFitter(void *p) {
      delete ((::TKinFitter*)p);
   }
   static void deleteArray_TKinFitter(void *p) {
      delete [] ((::TKinFitter*)p);
   }
   static void destruct_TKinFitter(void *p) {
      typedef ::TKinFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKinFitter(TBuffer &buf, void *obj) {
      ((::TKinFitter*)obj)->::TKinFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKinFitter

//______________________________________________________________________________
void TToyGentT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TToyGentT.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> _histStatus;
      R__b >> _histNIter;
      R__b >> _histPChi2;
      R__b >> _histChi2;
      R__b >> _histMWhadTrue;
      R__b >> _histMWhadSmear;
      R__b >> _histMWhadFit;
      R__b >> _histMTophadTrue;
      R__b >> _histMTophadSmear;
      R__b >> _histMTophadFit;
      R__b >> _histMWlepTrue;
      R__b >> _histMWlepSmear;
      R__b >> _histMWlepFit;
      R__b >> _histMToplepTrue;
      R__b >> _histMToplepSmear;
      R__b >> _histMToplepFit;
      _histsParTrue.Streamer(R__b);
      _histsParSmear.Streamer(R__b);
      _histsParFit.Streamer(R__b);
      _histsPull1.Streamer(R__b);
      _histsError1.Streamer(R__b);
      _histsDiff1.Streamer(R__b);
      _histsPull2.Streamer(R__b);
      _histsError2.Streamer(R__b);
      _histsDiff2.Streamer(R__b);
      _histsPull3.Streamer(R__b);
      _histsError3.Streamer(R__b);
      _histsDiff3.Streamer(R__b);
      R__b >> _nPar;
      {
         vector<TAbsFitParticle*> &R__stl =  _inimeasParticles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_inimeasParticles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _iniunmeasParticles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_iniunmeasParticles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> _iniWhad_d1;
      R__b >> _iniWhad_d2;
      R__b >> _iniTophad_d2;
      R__b >> _iniWlep_d1;
      R__b >> _iniWlep_d2;
      R__b >> _iniToplep_d2;
      {
         vector<TAbsFitParticle*> &R__stl =  _measParticles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_measParticles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _unmeasParticles;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitParticle *));
         if (R__tcl1==0) {
            Error("_unmeasParticles streamer","Missing the TClass object for class TAbsFitParticle *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitParticle* R__t;
            R__t = (TAbsFitParticle*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TAbsFitConstraint*> &R__stl =  _measConstraints;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TAbsFitConstraint *));
         if (R__tcl1==0) {
            Error("_measConstraints streamer","Missing the TClass object for class TAbsFitConstraint *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TAbsFitConstraint* R__t;
            R__t = (TAbsFitConstraint*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> _Whad_d1;
      R__b >> _Whad_d2;
      R__b >> _Tophad_d2;
      R__b >> _Wlep_d1;
      R__b >> _Wlep_d2;
      R__b >> _Toplep_d2;
      R__b >> _printPartIni;
      R__b >> _printConsIni;
      R__b >> _printSmearedPartBefore;
      R__b >> _printConsBefore;
      R__b >> _printConsAfter;
      R__b >> _printPartAfter;
      R__b >> _doCheckConstraintsTruth;
      R__b >> _verbosity;
      R__b.CheckByteCount(R__s, R__c, TToyGentT::IsA());
   } else {
      R__c = R__b.WriteVersion(TToyGentT::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << (TObject*)_histStatus;
      R__b << (TObject*)_histNIter;
      R__b << (TObject*)_histPChi2;
      R__b << (TObject*)_histChi2;
      R__b << (TObject*)_histMWhadTrue;
      R__b << (TObject*)_histMWhadSmear;
      R__b << (TObject*)_histMWhadFit;
      R__b << (TObject*)_histMTophadTrue;
      R__b << (TObject*)_histMTophadSmear;
      R__b << (TObject*)_histMTophadFit;
      R__b << (TObject*)_histMWlepTrue;
      R__b << (TObject*)_histMWlepSmear;
      R__b << (TObject*)_histMWlepFit;
      R__b << (TObject*)_histMToplepTrue;
      R__b << (TObject*)_histMToplepSmear;
      R__b << (TObject*)_histMToplepFit;
      _histsParTrue.Streamer(R__b);
      _histsParSmear.Streamer(R__b);
      _histsParFit.Streamer(R__b);
      _histsPull1.Streamer(R__b);
      _histsError1.Streamer(R__b);
      _histsDiff1.Streamer(R__b);
      _histsPull2.Streamer(R__b);
      _histsError2.Streamer(R__b);
      _histsDiff2.Streamer(R__b);
      _histsPull3.Streamer(R__b);
      _histsError3.Streamer(R__b);
      _histsDiff3.Streamer(R__b);
      R__b << _nPar;
      {
         vector<TAbsFitParticle*> &R__stl =  _inimeasParticles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _iniunmeasParticles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _iniWhad_d1;
      R__b << _iniWhad_d2;
      R__b << _iniTophad_d2;
      R__b << _iniWlep_d1;
      R__b << _iniWlep_d2;
      R__b << _iniToplep_d2;
      {
         vector<TAbsFitParticle*> &R__stl =  _measParticles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitParticle*> &R__stl =  _unmeasParticles;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitParticle*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<TAbsFitConstraint*> &R__stl =  _measConstraints;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TAbsFitConstraint*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << _Whad_d1;
      R__b << _Whad_d2;
      R__b << _Tophad_d2;
      R__b << _Wlep_d1;
      R__b << _Wlep_d2;
      R__b << _Toplep_d2;
      R__b << _printPartIni;
      R__b << _printConsIni;
      R__b << _printSmearedPartBefore;
      R__b << _printConsBefore;
      R__b << _printConsAfter;
      R__b << _printPartAfter;
      R__b << _doCheckConstraintsTruth;
      R__b << _verbosity;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TToyGentT(void *p) {
      return  p ? new(p) ::TToyGentT : new ::TToyGentT;
   }
   static void *newArray_TToyGentT(Long_t nElements, void *p) {
      return p ? new(p) ::TToyGentT[nElements] : new ::TToyGentT[nElements];
   }
   // Wrapper around operator delete
   static void delete_TToyGentT(void *p) {
      delete ((::TToyGentT*)p);
   }
   static void deleteArray_TToyGentT(void *p) {
      delete [] ((::TToyGentT*)p);
   }
   static void destruct_TToyGentT(void *p) {
      typedef ::TToyGentT current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TToyGentT(TBuffer &buf, void *obj) {
      ((::TToyGentT*)obj)->::TToyGentT::Streamer(buf);
   }
} // end of namespace ROOT for class ::TToyGentT

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 690,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      ::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)nullptr)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlETAbsFitParticlemUgR_Dictionary();
   static void vectorlETAbsFitParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlETAbsFitParticlemUgR(void *p = nullptr);
   static void *newArray_vectorlETAbsFitParticlemUgR(Long_t size, void *p);
   static void delete_vectorlETAbsFitParticlemUgR(void *p);
   static void deleteArray_vectorlETAbsFitParticlemUgR(void *p);
   static void destruct_vectorlETAbsFitParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TAbsFitParticle*>*)
   {
      vector<TAbsFitParticle*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TAbsFitParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TAbsFitParticle*>", -2, "vector", 423,
                  typeid(vector<TAbsFitParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETAbsFitParticlemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TAbsFitParticle*>) );
      instance.SetNew(&new_vectorlETAbsFitParticlemUgR);
      instance.SetNewArray(&newArray_vectorlETAbsFitParticlemUgR);
      instance.SetDelete(&delete_vectorlETAbsFitParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETAbsFitParticlemUgR);
      instance.SetDestructor(&destruct_vectorlETAbsFitParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TAbsFitParticle*> >()));

      ::ROOT::AddClassAlternate("vector<TAbsFitParticle*>","std::vector<TAbsFitParticle*, std::allocator<TAbsFitParticle*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TAbsFitParticle*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETAbsFitParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TAbsFitParticle*>*)nullptr)->GetClass();
      vectorlETAbsFitParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETAbsFitParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETAbsFitParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TAbsFitParticle*> : new vector<TAbsFitParticle*>;
   }
   static void *newArray_vectorlETAbsFitParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TAbsFitParticle*>[nElements] : new vector<TAbsFitParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETAbsFitParticlemUgR(void *p) {
      delete ((vector<TAbsFitParticle*>*)p);
   }
   static void deleteArray_vectorlETAbsFitParticlemUgR(void *p) {
      delete [] ((vector<TAbsFitParticle*>*)p);
   }
   static void destruct_vectorlETAbsFitParticlemUgR(void *p) {
      typedef vector<TAbsFitParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TAbsFitParticle*>

namespace ROOT {
   static TClass *vectorlETAbsFitConstraintmUgR_Dictionary();
   static void vectorlETAbsFitConstraintmUgR_TClassManip(TClass*);
   static void *new_vectorlETAbsFitConstraintmUgR(void *p = nullptr);
   static void *newArray_vectorlETAbsFitConstraintmUgR(Long_t size, void *p);
   static void delete_vectorlETAbsFitConstraintmUgR(void *p);
   static void deleteArray_vectorlETAbsFitConstraintmUgR(void *p);
   static void destruct_vectorlETAbsFitConstraintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TAbsFitConstraint*>*)
   {
      vector<TAbsFitConstraint*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TAbsFitConstraint*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TAbsFitConstraint*>", -2, "vector", 423,
                  typeid(vector<TAbsFitConstraint*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETAbsFitConstraintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TAbsFitConstraint*>) );
      instance.SetNew(&new_vectorlETAbsFitConstraintmUgR);
      instance.SetNewArray(&newArray_vectorlETAbsFitConstraintmUgR);
      instance.SetDelete(&delete_vectorlETAbsFitConstraintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETAbsFitConstraintmUgR);
      instance.SetDestructor(&destruct_vectorlETAbsFitConstraintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TAbsFitConstraint*> >()));

      ::ROOT::AddClassAlternate("vector<TAbsFitConstraint*>","std::vector<TAbsFitConstraint*, std::allocator<TAbsFitConstraint*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TAbsFitConstraint*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETAbsFitConstraintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TAbsFitConstraint*>*)nullptr)->GetClass();
      vectorlETAbsFitConstraintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETAbsFitConstraintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETAbsFitConstraintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TAbsFitConstraint*> : new vector<TAbsFitConstraint*>;
   }
   static void *newArray_vectorlETAbsFitConstraintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TAbsFitConstraint*>[nElements] : new vector<TAbsFitConstraint*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETAbsFitConstraintmUgR(void *p) {
      delete ((vector<TAbsFitConstraint*>*)p);
   }
   static void deleteArray_vectorlETAbsFitConstraintmUgR(void *p) {
      delete [] ((vector<TAbsFitConstraint*>*)p);
   }
   static void destruct_vectorlETAbsFitConstraintmUgR(void *p) {
      typedef vector<TAbsFitConstraint*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TAbsFitConstraint*>

namespace {
  void TriggerDictionaryInitialization_KinFitter_Cint_Impl() {
    static const char* headers[] = {
"TAbsFitConstraint.h",
"TAbsFitParticle.h",
"TFitConstraintEp.h",
"TFitConstraintEpGaus.h",
"TFitConstraintMBW.h",
"TFitConstraintM.h",
"TFitConstraintMGaus.h",
"TFitConstraintPt.h",
"TFitParticlePInvThetaPhi.h",
"TFitParticlePInvThetaPhiE.h",
"TFitParticlePInvThetaPhiM.h",
"TFitParticlePtEtaPhi.h",
"TFitParticlePtEtaPhiE.h",
"TFitParticlePtEtaPhiM.h",
"TFitParticlePThetaPhi.h",
"TFitParticlePThetaPhiE.h",
"TFitParticlePThetaPhiM.h",
"TFitParticlePxPyPz.h",
"TFitParticlePxPyPzE.h",
"TFitParticlePxPyPzM.h",
"TFitParticleRelE.h",
"TFitParticleRelPtEtaPhi.h",
"TFitParticleRelPtEtaPhiE.h",
"TFitParticleRelPtEtaPhiM.h",
"TFitParticleRelPxPyPz.h",
"TFitParticleRelPxPyPzE.h",
"TFitParticleRelPxPyPzM.h",
"TGetErrorMatrix.h",
"TKinFitter.h",
"TToyGentT.h",
nullptr
    };
    static const char* includePaths[] = {
"..",
"KinFitter",
"/cvmfs/cms.cern.ch/el9_amd64_gcc12/lcg/root/6.26.11-09a813662aa0f8eece54cb6d94bfed85/include/",
"/afs/desy.de/user/s/schaller/HiWi/topmass-alljets-kinfit/standaloneKinFitter/KinFitter/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "KinFitter_Cint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for fit particles)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAbsFitParticle.h")))  __attribute__((annotate("$clingAutoload$TAbsFitConstraint.h")))  TAbsFitParticle;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for fit constraints)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TAbsFitConstraint.h")))  TAbsFitConstraint;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: energy and momentum conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintEp.h")))  TFitConstraintEp;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: energy and momentum conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintEpGaus.h")))  TFitConstraintEpGaus;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: mass conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintM.h")))  __attribute__((annotate("$clingAutoload$TFitConstraintMBW.h")))  TFitConstraintM;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: mass conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintMBW.h")))  TFitConstraintMBW;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: mass conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintMGaus.h")))  TFitConstraintMGaus;
class __attribute__((annotate(R"ATTRDUMP(Fit constraint: energy and momentum conservation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitConstraintPt.h")))  TFitConstraintPt;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization (1/r, theta, phi) and constrained mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePInvThetaPhi.h")))  TFitParticlePInvThetaPhi;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization (1/p, theta, phi) and free energy)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePInvThetaPhiE.h")))  TFitParticlePInvThetaPhiE;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization (1/p, theta, phi) and free energy)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePInvThetaPhiM.h")))  TFitParticlePInvThetaPhiM;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePtEtaPhi.h")))  TFitParticlePtEtaPhi;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePtEtaPhiE.h")))  TFitParticlePtEtaPhiE;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePtEtaPhiM.h")))  TFitParticlePtEtaPhiM;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and constrained mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePThetaPhi.h")))  TFitParticlePThetaPhi;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization (p, theta, phi) and free energy)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePThetaPhiE.h")))  TFitParticlePThetaPhiE;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePThetaPhiM.h")))  TFitParticlePThetaPhiM;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization and constrained mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePxPyPz.h")))  TFitParticlePxPyPz;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization and free energy)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePxPyPzE.h")))  TFitParticlePxPyPzE;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticlePxPyPzM.h")))  TFitParticlePxPyPzM;
class __attribute__((annotate("$clingAutoload$TFitParticleRelE.h")))  TFitParticleRelE;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPtEtaPhi.h")))  TFitParticleRelPtEtaPhi;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPtEtaPhiE.h")))  TFitParticleRelPtEtaPhiE;
class __attribute__((annotate(R"ATTRDUMP(Particle with spherical 4vector parametrization and free mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPtEtaPhiM.h")))  TFitParticleRelPtEtaPhiM;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization and constrained mass)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPxPyPz.h")))  TFitParticleRelPxPyPz;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization and free energy)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPxPyPzE.h")))  TFitParticleRelPxPyPzE;
class __attribute__((annotate(R"ATTRDUMP(Particle with cartesian 4vector parametrization)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFitParticleRelPxPyPzM.h")))  TFitParticleRelPxPyPzM;
class __attribute__((annotate("$clingAutoload$TGetErrorMatrix.h")))  TGetErrorMatrix;
class __attribute__((annotate(R"ATTRDUMP(Class to perform kinematic fit with non-linear constraints)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TKinFitter.h")))  TKinFitter;
class __attribute__((annotate("$clingAutoload$TToyGentT.h")))  TToyGentT;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "KinFitter_Cint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TAbsFitConstraint.h"
#include "TAbsFitParticle.h"
#include "TFitConstraintEp.h"
#include "TFitConstraintEpGaus.h"
#include "TFitConstraintMBW.h"
#include "TFitConstraintM.h"
#include "TFitConstraintMGaus.h"
#include "TFitConstraintPt.h"
#include "TFitParticlePInvThetaPhi.h"
#include "TFitParticlePInvThetaPhiE.h"
#include "TFitParticlePInvThetaPhiM.h"
#include "TFitParticlePtEtaPhi.h"
#include "TFitParticlePtEtaPhiE.h"
#include "TFitParticlePtEtaPhiM.h"
#include "TFitParticlePThetaPhi.h"
#include "TFitParticlePThetaPhiE.h"
#include "TFitParticlePThetaPhiM.h"
#include "TFitParticlePxPyPz.h"
#include "TFitParticlePxPyPzE.h"
#include "TFitParticlePxPyPzM.h"
#include "TFitParticleRelE.h"
#include "TFitParticleRelPtEtaPhi.h"
#include "TFitParticleRelPtEtaPhiE.h"
#include "TFitParticleRelPtEtaPhiM.h"
#include "TFitParticleRelPxPyPz.h"
#include "TFitParticleRelPxPyPzE.h"
#include "TFitParticleRelPxPyPzM.h"
#include "TGetErrorMatrix.h"
#include "TKinFitter.h"
#include "TToyGentT.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TAbsFitConstraint", payloadCode, "@",
"TAbsFitParticle", payloadCode, "@",
"TFitConstraintEp", payloadCode, "@",
"TFitConstraintEpGaus", payloadCode, "@",
"TFitConstraintM", payloadCode, "@",
"TFitConstraintMBW", payloadCode, "@",
"TFitConstraintMGaus", payloadCode, "@",
"TFitConstraintPt", payloadCode, "@",
"TFitParticlePInvThetaPhi", payloadCode, "@",
"TFitParticlePInvThetaPhiE", payloadCode, "@",
"TFitParticlePInvThetaPhiM", payloadCode, "@",
"TFitParticlePThetaPhi", payloadCode, "@",
"TFitParticlePThetaPhiE", payloadCode, "@",
"TFitParticlePThetaPhiM", payloadCode, "@",
"TFitParticlePtEtaPhi", payloadCode, "@",
"TFitParticlePtEtaPhiE", payloadCode, "@",
"TFitParticlePtEtaPhiM", payloadCode, "@",
"TFitParticlePxPyPz", payloadCode, "@",
"TFitParticlePxPyPzE", payloadCode, "@",
"TFitParticlePxPyPzM", payloadCode, "@",
"TFitParticleRelE", payloadCode, "@",
"TFitParticleRelPtEtaPhi", payloadCode, "@",
"TFitParticleRelPtEtaPhiE", payloadCode, "@",
"TFitParticleRelPtEtaPhiM", payloadCode, "@",
"TFitParticleRelPxPyPz", payloadCode, "@",
"TFitParticleRelPxPyPzE", payloadCode, "@",
"TFitParticleRelPxPyPzM", payloadCode, "@",
"TGetErrorMatrix", payloadCode, "@",
"TKinFitter", payloadCode, "@",
"TToyGentT", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("KinFitter_Cint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_KinFitter_Cint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_KinFitter_Cint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_KinFitter_Cint() {
  TriggerDictionaryInitialization_KinFitter_Cint_Impl();
}
