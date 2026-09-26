#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEvent__4CMapFPfiP12MapEventInfo
// Address: 0x15f880 - 0x15fbf4
void GetEvent__4CMapFPfiP12MapEventInfo_0x15f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEvent__4CMapFPfiP12MapEventInfo_0x15f880");
#endif

    switch (ctx->pc) {
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        case 0x15fb30u: goto label_15fb30;
        case 0x15fb34u: goto label_15fb34;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb44u: goto label_15fb44;
        case 0x15fb48u: goto label_15fb48;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb54u: goto label_15fb54;
        case 0x15fb58u: goto label_15fb58;
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb68u: goto label_15fb68;
        case 0x15fb6cu: goto label_15fb6c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb78u: goto label_15fb78;
        case 0x15fb7cu: goto label_15fb7c;
        case 0x15fb80u: goto label_15fb80;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb88u: goto label_15fb88;
        case 0x15fb8cu: goto label_15fb8c;
        case 0x15fb90u: goto label_15fb90;
        case 0x15fb94u: goto label_15fb94;
        case 0x15fb98u: goto label_15fb98;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fba0u: goto label_15fba0;
        case 0x15fba4u: goto label_15fba4;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbb0u: goto label_15fbb0;
        case 0x15fbb4u: goto label_15fbb4;
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbc0u: goto label_15fbc0;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbc8u: goto label_15fbc8;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd0u: goto label_15fbd0;
        case 0x15fbd4u: goto label_15fbd4;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbdcu: goto label_15fbdc;
        case 0x15fbe0u: goto label_15fbe0;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf0u: goto label_15fbf0;
        default: break;
    }

    ctx->pc = 0x15f880u;

label_15f880:
    // 0x15f880: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_15f884:
    // 0x15f884: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_15f888:
    // 0x15f888: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x15f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_15f88c:
    // 0x15f88c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_15f890:
    // 0x15f890: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x15f890u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f894:
    // 0x15f894: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15f894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15f898:
    // 0x15f898: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x15f898u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f89c:
    // 0x15f89c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_15f8a0:
    // 0x15f8a0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15f8a4:
    // 0x15f8a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15f8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15f8a8:
    // 0x15f8a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15f8ac:
    // 0x15f8ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15f8b0:
    // 0x15f8b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15f8b4:
    // 0x15f8b4: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_15f8b8:
    // 0x15f8b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15f8b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15f8bc:
    // 0x15f8bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f8c0:
    // 0x15f8c0: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x15f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
label_15f8c4:
    // 0x15f8c4: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x15f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
label_15f8c8:
    // 0x15f8c8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x15f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f8cc:
    // 0x15f8cc: 0xc04c050  jal         func_130140
label_15f8d0:
    if (ctx->pc == 0x15F8D0u) {
        ctx->pc = 0x15F8D0u;
            // 0x15f8d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x15F8D4u;
        goto label_15f8d4;
    }
    ctx->pc = 0x15F8CCu;
    SET_GPR_U32(ctx, 31, 0x15F8D4u);
    ctx->pc = 0x15F8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8CCu;
            // 0x15f8d0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8D4u; }
        if (ctx->pc != 0x15F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8D4u; }
        if (ctx->pc != 0x15F8D4u) { return; }
    }
    ctx->pc = 0x15F8D4u;
label_15f8d4:
    // 0x15f8d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x15f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15f8d8:
    // 0x15f8d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15f8dc:
    // 0x15f8dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15f8e0:
    // 0x15f8e0: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x15f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_15f8e4:
    // 0x15f8e4: 0x24440cb0  addiu       $a0, $v0, 0xCB0
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
label_15f8e8:
    // 0x15f8e8: 0xc0a761c  jal         func_29D870
label_15f8ec:
    if (ctx->pc == 0x15F8ECu) {
        ctx->pc = 0x15F8ECu;
            // 0x15f8ec: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x15F8F0u;
        goto label_15f8f0;
    }
    ctx->pc = 0x15F8E8u;
    SET_GPR_U32(ctx, 31, 0x15F8F0u);
    ctx->pc = 0x15F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8E8u;
            // 0x15f8ec: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8F0u; }
        if (ctx->pc != 0x15F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F8F0u; }
        if (ctx->pc != 0x15F8F0u) { return; }
    }
    ctx->pc = 0x15F8F0u;
label_15f8f0:
    // 0x15f8f0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15f8f4:
    // 0x15f8f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15f8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_15f8f8:
    // 0x15f8f8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x15f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_15f8fc:
    // 0x15f8fc: 0xc0a762c  jal         func_29D8B0
label_15f900:
    if (ctx->pc == 0x15F900u) {
        ctx->pc = 0x15F900u;
            // 0x15f900: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->pc = 0x15F904u;
        goto label_15f904;
    }
    ctx->pc = 0x15F8FCu;
    SET_GPR_U32(ctx, 31, 0x15F904u);
    ctx->pc = 0x15F900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F8FCu;
            // 0x15f900: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F904u; }
        if (ctx->pc != 0x15F904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F904u; }
        if (ctx->pc != 0x15F904u) { return; }
    }
    ctx->pc = 0x15F904u;
label_15f904:
    // 0x15f904: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_15f908:
    if (ctx->pc == 0x15F908u) {
        ctx->pc = 0x15F908u;
            // 0x15f908: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F90Cu;
        goto label_15f90c;
    }
    ctx->pc = 0x15F904u;
    {
        const bool branch_taken_0x15f904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F904u;
            // 0x15f908: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f904) {
            ctx->pc = 0x15F9D4u;
            goto label_15f9d4;
        }
    }
    ctx->pc = 0x15F90Cu;
label_15f90c:
    // 0x15f90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f910:
    // 0x15f910: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15f914:
    // 0x15f914: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15f914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15f918:
    // 0x15f918: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15f918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f91c:
    // 0x15f91c: 0xc058240  jal         func_160900
label_15f920:
    if (ctx->pc == 0x15F920u) {
        ctx->pc = 0x15F920u;
            // 0x15f920: 0x27a801bc  addiu       $t0, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->pc = 0x15F924u;
        goto label_15f924;
    }
    ctx->pc = 0x15F91Cu;
    SET_GPR_U32(ctx, 31, 0x15F924u);
    ctx->pc = 0x15F920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F91Cu;
            // 0x15f920: 0x27a801bc  addiu       $t0, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160900u;
    if (runtime->hasFunction(0x160900u)) {
        auto targetFn = runtime->lookupFunction(0x160900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F924u; }
        if (ctx->pc != 0x15F924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf_0x160900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F924u; }
        if (ctx->pc != 0x15F924u) { return; }
    }
    ctx->pc = 0x15F924u;
label_15f924:
    // 0x15f924: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_15f928:
    if (ctx->pc == 0x15F928u) {
        ctx->pc = 0x15F92Cu;
        goto label_15f92c;
    }
    ctx->pc = 0x15F924u;
    {
        const bool branch_taken_0x15f924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f924) {
            ctx->pc = 0x15F948u;
            goto label_15f948;
        }
    }
    ctx->pc = 0x15F92Cu;
label_15f92c:
    // 0x15f92c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_15f930:
    if (ctx->pc == 0x15F930u) {
        ctx->pc = 0x15F934u;
        goto label_15f934;
    }
    ctx->pc = 0x15F92Cu;
    {
        const bool branch_taken_0x15f92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f92c) {
            ctx->pc = 0x15F9C0u;
            goto label_15f9c0;
        }
    }
    ctx->pc = 0x15F934u;
label_15f934:
    // 0x15f934: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15f938:
    // 0x15f938: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15f93c:
    if (ctx->pc == 0x15F93Cu) {
        ctx->pc = 0x15F940u;
        goto label_15f940;
    }
    ctx->pc = 0x15F938u;
    {
        const bool branch_taken_0x15f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f938) {
            ctx->pc = 0x15F9C0u;
            goto label_15f9c0;
        }
    }
    ctx->pc = 0x15F940u;
label_15f940:
    // 0x15f940: 0x1000001f  b           . + 4 + (0x1F << 2)
label_15f944:
    if (ctx->pc == 0x15F944u) {
        ctx->pc = 0x15F944u;
            // 0x15f944: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->pc = 0x15F948u;
        goto label_15f948;
    }
    ctx->pc = 0x15F940u;
    {
        const bool branch_taken_0x15f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F940u;
            // 0x15f944: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f940) {
            ctx->pc = 0x15F9C0u;
            goto label_15f9c0;
        }
    }
    ctx->pc = 0x15F948u;
label_15f948:
    // 0x15f948: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x15f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_15f94c:
    // 0x15f94c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_15f950:
    if (ctx->pc == 0x15F950u) {
        ctx->pc = 0x15F950u;
            // 0x15f950: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x15F954u;
        goto label_15f954;
    }
    ctx->pc = 0x15F94Cu;
    {
        const bool branch_taken_0x15f94c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F94Cu;
            // 0x15f950: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f94c) {
            ctx->pc = 0x15F968u;
            goto label_15f968;
        }
    }
    ctx->pc = 0x15F954u;
label_15f954:
    // 0x15f954: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x15f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f958:
    // 0x15f958: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15f958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f95c:
    // 0x15f95c: 0x0  nop
    ctx->pc = 0x15f95cu;
    // NOP
label_15f960:
    // 0x15f960: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_15f964:
    if (ctx->pc == 0x15F964u) {
        ctx->pc = 0x15F968u;
        goto label_15f968;
    }
    ctx->pc = 0x15F960u;
    {
        const bool branch_taken_0x15f960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f960) {
            ctx->pc = 0x15F9C0u;
            goto label_15f9c0;
        }
    }
    ctx->pc = 0x15F968u;
label_15f968:
    // 0x15f968: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15f96c:
    // 0x15f96c: 0xc7b401bc  lwc1        $f20, 0x1BC($sp)
    ctx->pc = 0x15f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15f970:
    // 0x15f970: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f974:
    // 0x15f974: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x15f974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f978:
    // 0x15f978: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_15f97c:
    // 0x15f97c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15f980:
    // 0x15f980: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15f980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_15f984:
    // 0x15f984: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15f988:
    // 0x15f988: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15f988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_15f98c:
    // 0x15f98c: 0x0  nop
    ctx->pc = 0x15f98cu;
    // NOP
label_15f990:
    // 0x15f990: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15f994:
    // 0x15f994: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15f994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15f998:
    // 0x15f998: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_15f99c:
    // 0x15f99c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15f9a0:
    // 0x15f9a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15f9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_15f9a4:
    // 0x15f9a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15f9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_15f9a8:
    // 0x15f9a8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_15f9ac:
    if (ctx->pc == 0x15F9ACu) {
        ctx->pc = 0x15F9ACu;
            // 0x15f9ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x15F9B0u;
        goto label_15f9b0;
    }
    ctx->pc = 0x15F9A8u;
    {
        const bool branch_taken_0x15f9a8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x15F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9A8u;
            // 0x15f9ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9a8) {
            ctx->pc = 0x15F990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f990;
        }
    }
    ctx->pc = 0x15F9B0u;
label_15f9b0:
    // 0x15f9b0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x15f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_15f9b4:
    // 0x15f9b4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x15f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_15f9b8:
    // 0x15f9b8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_15f9bc:
    // 0x15f9bc: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x15f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_15f9c0:
    // 0x15f9c0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x15f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15f9c4:
    // 0x15f9c4: 0xc0a762c  jal         func_29D8B0
label_15f9c8:
    if (ctx->pc == 0x15F9C8u) {
        ctx->pc = 0x15F9C8u;
            // 0x15f9c8: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->pc = 0x15F9CCu;
        goto label_15f9cc;
    }
    ctx->pc = 0x15F9C4u;
    SET_GPR_U32(ctx, 31, 0x15F9CCu);
    ctx->pc = 0x15F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9C4u;
            // 0x15f9c8: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9CCu; }
        if (ctx->pc != 0x15F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F9CCu; }
        if (ctx->pc != 0x15F9CCu) { return; }
    }
    ctx->pc = 0x15F9CCu;
label_15f9cc:
    // 0x15f9cc: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_15f9d0:
    if (ctx->pc == 0x15F9D0u) {
        ctx->pc = 0x15F9D0u;
            // 0x15f9d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F9D4u;
        goto label_15f9d4;
    }
    ctx->pc = 0x15F9CCu;
    {
        const bool branch_taken_0x15f9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9CCu;
            // 0x15f9d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9cc) {
            ctx->pc = 0x15F90Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f90c;
        }
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x0  nop
    ctx->pc = 0x15f9d4u;
    // NOP
label_15f9d8:
    // 0x15f9d8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15f9dc:
    // 0x15f9dc: 0x8c52032c  lw          $s2, 0x32C($v0)
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
label_15f9e0:
    // 0x15f9e0: 0x8c420cac  lw          $v0, 0xCAC($v0)
    ctx->pc = 0x15f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3244)));
label_15f9e4:
    // 0x15f9e4: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_15f9e8:
    if (ctx->pc == 0x15F9E8u) {
        ctx->pc = 0x15F9E8u;
            // 0x15f9e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F9ECu;
        goto label_15f9ec;
    }
    ctx->pc = 0x15F9E4u;
    {
        const bool branch_taken_0x15f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9E4u;
            // 0x15f9e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9e4) {
            ctx->pc = 0x15FB44u;
            goto label_15fb44;
        }
    }
    ctx->pc = 0x15F9ECu;
label_15f9ec:
    // 0x15f9ec: 0x10000050  b           . + 4 + (0x50 << 2)
label_15f9f0:
    if (ctx->pc == 0x15F9F0u) {
        ctx->pc = 0x15F9F4u;
        goto label_15f9f4;
    }
    ctx->pc = 0x15F9ECu;
    {
        const bool branch_taken_0x15f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9ec) {
            ctx->pc = 0x15FB30u;
            goto label_15fb30;
        }
    }
    ctx->pc = 0x15F9F4u;
label_15f9f4:
    // 0x15f9f4: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
label_15f9f8:
    // 0x15f9f8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15f9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_15f9fc:
    // 0x15f9fc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_15fa00:
    if (ctx->pc == 0x15FA00u) {
        ctx->pc = 0x15FA00u;
            // 0x15fa00: 0x265602b0  addiu       $s6, $s2, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
        ctx->pc = 0x15FA04u;
        goto label_15fa04;
    }
    ctx->pc = 0x15F9FCu;
    {
        const bool branch_taken_0x15f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F9FCu;
            // 0x15fa00: 0x265602b0  addiu       $s6, $s2, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9fc) {
            ctx->pc = 0x15FB28u;
            goto label_15fb28;
        }
    }
    ctx->pc = 0x15FA04u;
label_15fa04:
    // 0x15fa04: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_15fa08:
    // 0x15fa08: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x15fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_15fa0c:
    // 0x15fa0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15fa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15fa10:
    // 0x15fa10: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_15fa14:
    if (ctx->pc == 0x15FA14u) {
        ctx->pc = 0x15FA18u;
        goto label_15fa18;
    }
    ctx->pc = 0x15FA10u;
    {
        const bool branch_taken_0x15fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fa10) {
            ctx->pc = 0x15FB28u;
            goto label_15fb28;
        }
    }
    ctx->pc = 0x15FA18u;
label_15fa18:
    // 0x15fa18: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15fa18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15fa1c:
    // 0x15fa1c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x15fa1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_15fa20:
    // 0x15fa20: 0x320f809  jalr        $t9
label_15fa24:
    if (ctx->pc == 0x15FA24u) {
        ctx->pc = 0x15FA24u;
            // 0x15fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FA28u;
        goto label_15fa28;
    }
    ctx->pc = 0x15FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FA28u);
        ctx->pc = 0x15FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA20u;
            // 0x15fa24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15FA28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15FA28u; }
            if (ctx->pc != 0x15FA28u) { return; }
        }
        }
    }
    ctx->pc = 0x15FA28u;
label_15fa28:
    // 0x15fa28: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_15fa2c:
    if (ctx->pc == 0x15FA2Cu) {
        ctx->pc = 0x15FA2Cu;
            // 0x15fa2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FA30u;
        goto label_15fa30;
    }
    ctx->pc = 0x15FA28u;
    {
        const bool branch_taken_0x15fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA28u;
            // 0x15fa2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa28) {
            ctx->pc = 0x15FB28u;
            goto label_15fb28;
        }
    }
    ctx->pc = 0x15FA30u;
label_15fa30:
    // 0x15fa30: 0xc0a761c  jal         func_29D870
label_15fa34:
    if (ctx->pc == 0x15FA34u) {
        ctx->pc = 0x15FA34u;
            // 0x15fa34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x15FA38u;
        goto label_15fa38;
    }
    ctx->pc = 0x15FA30u;
    SET_GPR_U32(ctx, 31, 0x15FA38u);
    ctx->pc = 0x15FA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA30u;
            // 0x15fa34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA38u; }
        if (ctx->pc != 0x15FA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA38u; }
        if (ctx->pc != 0x15FA38u) { return; }
    }
    ctx->pc = 0x15FA38u;
label_15fa38:
    // 0x15fa38: 0xc0a762c  jal         func_29D8B0
label_15fa3c:
    if (ctx->pc == 0x15FA3Cu) {
        ctx->pc = 0x15FA3Cu;
            // 0x15fa3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FA40u;
        goto label_15fa40;
    }
    ctx->pc = 0x15FA38u;
    SET_GPR_U32(ctx, 31, 0x15FA40u);
    ctx->pc = 0x15FA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA38u;
            // 0x15fa3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA40u; }
        if (ctx->pc != 0x15FA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA40u; }
        if (ctx->pc != 0x15FA40u) { return; }
    }
    ctx->pc = 0x15FA40u;
label_15fa40:
    // 0x15fa40: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_15fa44:
    if (ctx->pc == 0x15FA44u) {
        ctx->pc = 0x15FA44u;
            // 0x15fa44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FA48u;
        goto label_15fa48;
    }
    ctx->pc = 0x15FA40u;
    {
        const bool branch_taken_0x15fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA40u;
            // 0x15fa44: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa40) {
            ctx->pc = 0x15FB28u;
            goto label_15fb28;
        }
    }
    ctx->pc = 0x15FA48u;
label_15fa48:
    // 0x15fa48: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x15fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_15fa4c:
    // 0x15fa4c: 0xc04db0c  jal         func_136C30
label_15fa50:
    if (ctx->pc == 0x15FA50u) {
        ctx->pc = 0x15FA50u;
            // 0x15fa50: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x15FA54u;
        goto label_15fa54;
    }
    ctx->pc = 0x15FA4Cu;
    SET_GPR_U32(ctx, 31, 0x15FA54u);
    ctx->pc = 0x15FA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA4Cu;
            // 0x15fa50: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA54u; }
        if (ctx->pc != 0x15FA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA54u; }
        if (ctx->pc != 0x15FA54u) { return; }
    }
    ctx->pc = 0x15FA54u;
label_15fa54:
    // 0x15fa54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15fa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15fa58:
    // 0x15fa58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15fa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15fa5c:
    // 0x15fa5c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15fa5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15fa60:
    // 0x15fa60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15fa60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15fa64:
    // 0x15fa64: 0xc058240  jal         func_160900
label_15fa68:
    if (ctx->pc == 0x15FA68u) {
        ctx->pc = 0x15FA68u;
            // 0x15fa68: 0x27a801bc  addiu       $t0, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->pc = 0x15FA6Cu;
        goto label_15fa6c;
    }
    ctx->pc = 0x15FA64u;
    SET_GPR_U32(ctx, 31, 0x15FA6Cu);
    ctx->pc = 0x15FA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA64u;
            // 0x15fa68: 0x27a801bc  addiu       $t0, $sp, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160900u;
    if (runtime->hasFunction(0x160900u)) {
        auto targetFn = runtime->lookupFunction(0x160900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA6Cu; }
        if (ctx->pc != 0x15FA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf_0x160900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA6Cu; }
        if (ctx->pc != 0x15FA6Cu) { return; }
    }
    ctx->pc = 0x15FA6Cu;
label_15fa6c:
    // 0x15fa6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15fa6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fa70:
    // 0x15fa70: 0xc04db18  jal         func_136C60
label_15fa74:
    if (ctx->pc == 0x15FA74u) {
        ctx->pc = 0x15FA74u;
            // 0x15fa74: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x15FA78u;
        goto label_15fa78;
    }
    ctx->pc = 0x15FA70u;
    SET_GPR_U32(ctx, 31, 0x15FA78u);
    ctx->pc = 0x15FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FA70u;
            // 0x15fa74: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA78u; }
        if (ctx->pc != 0x15FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FA78u; }
        if (ctx->pc != 0x15FA78u) { return; }
    }
    ctx->pc = 0x15FA78u;
label_15fa78:
    // 0x15fa78: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_15fa7c:
    if (ctx->pc == 0x15FA7Cu) {
        ctx->pc = 0x15FA80u;
        goto label_15fa80;
    }
    ctx->pc = 0x15FA78u;
    {
        const bool branch_taken_0x15fa78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa78) {
            ctx->pc = 0x15FA94u;
            goto label_15fa94;
        }
    }
    ctx->pc = 0x15FA80u;
label_15fa80:
    // 0x15fa80: 0xae330050  sw          $s3, 0x50($s1)
    ctx->pc = 0x15fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 19));
label_15fa84:
    // 0x15fa84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15fa88:
    // 0x15fa88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15fa8c:
    if (ctx->pc == 0x15FA8Cu) {
        ctx->pc = 0x15FA90u;
        goto label_15fa90;
    }
    ctx->pc = 0x15FA88u;
    {
        const bool branch_taken_0x15fa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa88) {
            ctx->pc = 0x15FA94u;
            goto label_15fa94;
        }
    }
    ctx->pc = 0x15FA90u;
label_15fa90:
    // 0x15fa90: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x15fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_15fa94:
    // 0x15fa94: 0x0  nop
    ctx->pc = 0x15fa94u;
    // NOP
label_15fa98:
    // 0x15fa98: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
label_15fa9c:
    if (ctx->pc == 0x15FA9Cu) {
        ctx->pc = 0x15FAA0u;
        goto label_15faa0;
    }
    ctx->pc = 0x15FA98u;
    {
        const bool branch_taken_0x15fa98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa98) {
            ctx->pc = 0x15FB18u;
            goto label_15fb18;
        }
    }
    ctx->pc = 0x15FAA0u;
label_15faa0:
    // 0x15faa0: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x15faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_15faa4:
    // 0x15faa4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_15faa8:
    if (ctx->pc == 0x15FAA8u) {
        ctx->pc = 0x15FAA8u;
            // 0x15faa8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x15FAACu;
        goto label_15faac;
    }
    ctx->pc = 0x15FAA4u;
    {
        const bool branch_taken_0x15faa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FAA4u;
            // 0x15faa8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15faa4) {
            ctx->pc = 0x15FAC0u;
            goto label_15fac0;
        }
    }
    ctx->pc = 0x15FAACu;
label_15faac:
    // 0x15faac: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x15faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fab0:
    // 0x15fab0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15fab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fab4:
    // 0x15fab4: 0x0  nop
    ctx->pc = 0x15fab4u;
    // NOP
label_15fab8:
    // 0x15fab8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_15fabc:
    if (ctx->pc == 0x15FABCu) {
        ctx->pc = 0x15FAC0u;
        goto label_15fac0;
    }
    ctx->pc = 0x15FAB8u;
    {
        const bool branch_taken_0x15fab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fab8) {
            ctx->pc = 0x15FB18u;
            goto label_15fb18;
        }
    }
    ctx->pc = 0x15FAC0u;
label_15fac0:
    // 0x15fac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15fac4:
    // 0x15fac4: 0xc7b401bc  lwc1        $f20, 0x1BC($sp)
    ctx->pc = 0x15fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fac8:
    // 0x15fac8: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15facc:
    // 0x15facc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15fad0:
    // 0x15fad0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x15fad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_15fad4:
    // 0x15fad4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fad8:
    // 0x15fad8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x15fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_15fadc:
    // 0x15fadc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15fae0:
    // 0x15fae0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x15fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_15fae4:
    // 0x15fae4: 0x0  nop
    ctx->pc = 0x15fae4u;
    // NOP
label_15fae8:
    // 0x15fae8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15faec:
    // 0x15faec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15faecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15faf0:
    // 0x15faf0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_15faf4:
    // 0x15faf4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15faf8:
    // 0x15faf8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_15fafc:
    // 0x15fafc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15fafcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_15fb00:
    // 0x15fb00: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_15fb04:
    if (ctx->pc == 0x15FB04u) {
        ctx->pc = 0x15FB04u;
            // 0x15fb04: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x15FB08u;
        goto label_15fb08;
    }
    ctx->pc = 0x15FB00u;
    {
        const bool branch_taken_0x15fb00 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x15FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB00u;
            // 0x15fb04: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb00) {
            ctx->pc = 0x15FAE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fae8;
        }
    }
    ctx->pc = 0x15FB08u;
label_15fb08:
    // 0x15fb08: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x15fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_15fb0c:
    // 0x15fb0c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x15fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_15fb10:
    // 0x15fb10: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x15fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_15fb14:
    // 0x15fb14: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x15fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_15fb18:
    // 0x15fb18: 0xc0a762c  jal         func_29D8B0
label_15fb1c:
    if (ctx->pc == 0x15FB1Cu) {
        ctx->pc = 0x15FB1Cu;
            // 0x15fb1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FB20u;
        goto label_15fb20;
    }
    ctx->pc = 0x15FB18u;
    SET_GPR_U32(ctx, 31, 0x15FB20u);
    ctx->pc = 0x15FB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB18u;
            // 0x15fb1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB20u; }
        if (ctx->pc != 0x15FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB20u; }
        if (ctx->pc != 0x15FB20u) { return; }
    }
    ctx->pc = 0x15FB20u;
label_15fb20:
    // 0x15fb20: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_15fb24:
    if (ctx->pc == 0x15FB24u) {
        ctx->pc = 0x15FB24u;
            // 0x15fb24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FB28u;
        goto label_15fb28;
    }
    ctx->pc = 0x15FB20u;
    {
        const bool branch_taken_0x15fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB20u;
            // 0x15fb24: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb20) {
            ctx->pc = 0x15FA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15FB28u;
label_15fb28:
    // 0x15fb28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15fb2c:
    // 0x15fb2c: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_15fb30:
    // 0x15fb30: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_15fb34:
    // 0x15fb34: 0x8c420328  lw          $v0, 0x328($v0)
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
label_15fb38:
    // 0x15fb38: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x15fb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15fb3c:
    // 0x15fb3c: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
label_15fb40:
    if (ctx->pc == 0x15FB40u) {
        ctx->pc = 0x15FB44u;
        goto label_15fb44;
    }
    ctx->pc = 0x15FB3Cu;
    {
        const bool branch_taken_0x15fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fb3c) {
            ctx->pc = 0x15F9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f9f4;
        }
    }
    ctx->pc = 0x15FB44u;
label_15fb44:
    // 0x15fb44: 0x0  nop
    ctx->pc = 0x15fb44u;
    // NOP
label_15fb48:
    // 0x15fb48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fb4c:
    // 0x15fb4c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_15fb50:
    if (ctx->pc == 0x15FB50u) {
        ctx->pc = 0x15FB54u;
        goto label_15fb54;
    }
    ctx->pc = 0x15FB4Cu;
    {
        const bool branch_taken_0x15fb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb4c) {
            ctx->pc = 0x15FBBCu;
            goto label_15fbbc;
        }
    }
    ctx->pc = 0x15FB54u;
label_15fb54:
    // 0x15fb54: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15fb58:
    // 0x15fb58: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_15fb5c:
    // 0x15fb5c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15fb60:
    // 0x15fb60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_15fb64:
    // 0x15fb64: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_15fb68:
    // 0x15fb68: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fb6c:
    // 0x15fb6c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x15fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_15fb70:
    // 0x15fb70: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fb74:
    // 0x15fb74: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x15fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_15fb78:
    // 0x15fb78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15fb7c:
    // 0x15fb7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15fb80:
    // 0x15fb80: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_15fb84:
    // 0x15fb84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15fb88:
    // 0x15fb88: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_15fb8c:
    // 0x15fb8c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_15fb90:
    // 0x15fb90: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_15fb94:
    if (ctx->pc == 0x15FB94u) {
        ctx->pc = 0x15FB94u;
            // 0x15fb94: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x15FB98u;
        goto label_15fb98;
    }
    ctx->pc = 0x15FB90u;
    {
        const bool branch_taken_0x15fb90 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x15FB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB90u;
            // 0x15fb94: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb90) {
            ctx->pc = 0x15FB78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fb78;
        }
    }
    ctx->pc = 0x15FB98u;
label_15fb98:
    // 0x15fb98: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_15fb9c:
    // 0x15fb9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fba0:
    // 0x15fba0: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x15fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_15fba4:
    // 0x15fba4: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x15fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_15fba8:
    // 0x15fba8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fbac:
    // 0x15fbac: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x15fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_15fbb0:
    // 0x15fbb0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_15fbb4:
    // 0x15fbb4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_15fbb8:
    // 0x15fbb8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x15fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_15fbbc:
    // 0x15fbbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15fbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15fbc0:
    // 0x15fbc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15fbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_15fbc4:
    // 0x15fbc4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x15fbc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15fbc8:
    // 0x15fbc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fbcc:
    // 0x15fbcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15fbccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15fbd0:
    // 0x15fbd0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15fbd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15fbd4:
    // 0x15fbd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15fbd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15fbd8:
    // 0x15fbd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15fbd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15fbdc:
    // 0x15fbdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15fbdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15fbe0:
    // 0x15fbe0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15fbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fbe4:
    // 0x15fbe4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15fbe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fbe8:
    // 0x15fbe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15fbe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fbec:
    // 0x15fbec: 0x3e00008  jr          $ra
label_15fbf0:
    if (ctx->pc == 0x15FBF0u) {
        ctx->pc = 0x15FBF0u;
            // 0x15fbf0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x15FBF4u;
        goto label_fallthrough_0x15fbec;
    }
    ctx->pc = 0x15FBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBECu;
            // 0x15fbf0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15fbec:
    ctx->pc = 0x15FBF4u;
}
