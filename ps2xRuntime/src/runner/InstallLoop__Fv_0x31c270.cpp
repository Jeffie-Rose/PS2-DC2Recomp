#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InstallLoop__Fv
// Address: 0x31c270 - 0x31c934
void InstallLoop__Fv_0x31c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InstallLoop__Fv_0x31c270");
#endif

    switch (ctx->pc) {
        case 0x31c29cu: goto label_31c29c;
        case 0x31c2acu: goto label_31c2ac;
        case 0x31c2bcu: goto label_31c2bc;
        case 0x31c2ccu: goto label_31c2cc;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c2e8u: goto label_31c2e8;
        case 0x31c2f4u: goto label_31c2f4;
        case 0x31c304u: goto label_31c304;
        case 0x31c314u: goto label_31c314;
        case 0x31c320u: goto label_31c320;
        case 0x31c338u: goto label_31c338;
        case 0x31c348u: goto label_31c348;
        case 0x31c368u: goto label_31c368;
        case 0x31c388u: goto label_31c388;
        case 0x31c3a0u: goto label_31c3a0;
        case 0x31c3b8u: goto label_31c3b8;
        case 0x31c3ccu: goto label_31c3cc;
        case 0x31c3dcu: goto label_31c3dc;
        case 0x31c3e4u: goto label_31c3e4;
        case 0x31c400u: goto label_31c400;
        case 0x31c410u: goto label_31c410;
        case 0x31c430u: goto label_31c430;
        case 0x31c440u: goto label_31c440;
        case 0x31c450u: goto label_31c450;
        case 0x31c470u: goto label_31c470;
        case 0x31c478u: goto label_31c478;
        case 0x31c494u: goto label_31c494;
        case 0x31c4a8u: goto label_31c4a8;
        case 0x31c4b8u: goto label_31c4b8;
        case 0x31c4d0u: goto label_31c4d0;
        case 0x31c4e8u: goto label_31c4e8;
        case 0x31c4f8u: goto label_31c4f8;
        case 0x31c508u: goto label_31c508;
        case 0x31c514u: goto label_31c514;
        case 0x31c52cu: goto label_31c52c;
        case 0x31c544u: goto label_31c544;
        case 0x31c560u: goto label_31c560;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c57cu: goto label_31c57c;
        case 0x31c58cu: goto label_31c58c;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5c4u: goto label_31c5c4;
        case 0x31c5dcu: goto label_31c5dc;
        case 0x31c5f8u: goto label_31c5f8;
        case 0x31c608u: goto label_31c608;
        case 0x31c618u: goto label_31c618;
        case 0x31c644u: goto label_31c644;
        case 0x31c65cu: goto label_31c65c;
        case 0x31c668u: goto label_31c668;
        case 0x31c670u: goto label_31c670;
        case 0x31c684u: goto label_31c684;
        case 0x31c6a4u: goto label_31c6a4;
        case 0x31c6b4u: goto label_31c6b4;
        case 0x31c6c0u: goto label_31c6c0;
        case 0x31c6d0u: goto label_31c6d0;
        case 0x31c6e4u: goto label_31c6e4;
        case 0x31c6fcu: goto label_31c6fc;
        case 0x31c71cu: goto label_31c71c;
        case 0x31c72cu: goto label_31c72c;
        case 0x31c734u: goto label_31c734;
        case 0x31c748u: goto label_31c748;
        case 0x31c754u: goto label_31c754;
        case 0x31c76cu: goto label_31c76c;
        case 0x31c77cu: goto label_31c77c;
        case 0x31c798u: goto label_31c798;
        case 0x31c7b0u: goto label_31c7b0;
        case 0x31c7c4u: goto label_31c7c4;
        case 0x31c7d4u: goto label_31c7d4;
        case 0x31c7ecu: goto label_31c7ec;
        case 0x31c818u: goto label_31c818;
        case 0x31c820u: goto label_31c820;
        case 0x31c840u: goto label_31c840;
        case 0x31c864u: goto label_31c864;
        case 0x31c878u: goto label_31c878;
        case 0x31c888u: goto label_31c888;
        case 0x31c894u: goto label_31c894;
        case 0x31c8b4u: goto label_31c8b4;
        case 0x31c8d8u: goto label_31c8d8;
        default: break;
    }

    ctx->pc = 0x31c270u;

    // 0x31c270: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x31c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x31c274: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x31c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x31c278: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x31c278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x31c27c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31c280: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31c284: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31c288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31c28c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31c28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31c290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c294: 0xc0c6e0c  jal         func_31B830
    ctx->pc = 0x31C294u;
    SET_GPR_U32(ctx, 31, 0x31C29Cu);
    ctx->pc = 0x31C298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C294u;
            // 0x31c298: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B830u;
    if (runtime->hasFunction(0x31B830u)) {
        auto targetFn = runtime->lookupFunction(0x31B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C29Cu; }
        if (ctx->pc != 0x31C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPassword__FPc_0x31b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C29Cu; }
        if (ctx->pc != 0x31C29Cu) { return; }
    }
    ctx->pc = 0x31C29Cu;
label_31c29c:
    // 0x31c29c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c2a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2a4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C2A4u;
    SET_GPR_U32(ctx, 31, 0x31C2ACu);
    ctx->pc = 0x31C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2A4u;
            // 0x31c2a8: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2ACu; }
        if (ctx->pc != 0x31C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2ACu; }
        if (ctx->pc != 0x31C2ACu) { return; }
    }
    ctx->pc = 0x31C2ACu;
label_31c2ac:
    // 0x31c2ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c2b0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2b4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2B4u;
    SET_GPR_U32(ctx, 31, 0x31C2BCu);
    ctx->pc = 0x31C2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2B4u;
            // 0x31c2b8: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2BCu; }
        if (ctx->pc != 0x31C2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2BCu; }
        if (ctx->pc != 0x31C2BCu) { return; }
    }
    ctx->pc = 0x31C2BCu;
label_31c2bc:
    // 0x31c2bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c2c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2c4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2C4u;
    SET_GPR_U32(ctx, 31, 0x31C2CCu);
    ctx->pc = 0x31C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2C4u;
            // 0x31c2c8: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2CCu; }
        if (ctx->pc != 0x31C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2CCu; }
        if (ctx->pc != 0x31C2CCu) { return; }
    }
    ctx->pc = 0x31C2CCu;
label_31c2cc:
    // 0x31c2cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2d0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2D0u;
    SET_GPR_U32(ctx, 31, 0x31C2D8u);
    ctx->pc = 0x31C2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2D0u;
            // 0x31c2d4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2D8u; }
        if (ctx->pc != 0x31C2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2D8u; }
        if (ctx->pc != 0x31C2D8u) { return; }
    }
    ctx->pc = 0x31C2D8u;
label_31c2d8:
    // 0x31c2d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c2dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2e0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2E0u;
    SET_GPR_U32(ctx, 31, 0x31C2E8u);
    ctx->pc = 0x31C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2E0u;
            // 0x31c2e4: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2E8u; }
        if (ctx->pc != 0x31C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2E8u; }
        if (ctx->pc != 0x31C2E8u) { return; }
    }
    ctx->pc = 0x31C2E8u;
label_31c2e8:
    // 0x31c2e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2ec: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2ECu;
    SET_GPR_U32(ctx, 31, 0x31C2F4u);
    ctx->pc = 0x31C2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2ECu;
            // 0x31c2f0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2F4u; }
        if (ctx->pc != 0x31C2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C2F4u; }
        if (ctx->pc != 0x31C2F4u) { return; }
    }
    ctx->pc = 0x31C2F4u;
label_31c2f4:
    // 0x31c2f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c2f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2fc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C2FCu;
    SET_GPR_U32(ctx, 31, 0x31C304u);
    ctx->pc = 0x31C300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C2FCu;
            // 0x31c300: 0x24a52e68  addiu       $a1, $a1, 0x2E68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C304u; }
        if (ctx->pc != 0x31C304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C304u; }
        if (ctx->pc != 0x31C304u) { return; }
    }
    ctx->pc = 0x31C304u;
label_31c304:
    // 0x31c304: 0x8f91a3cc  lw          $s1, -0x5C34($gp)
    ctx->pc = 0x31c304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943692)));
    // 0x31c308: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c30c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C30Cu;
    SET_GPR_U32(ctx, 31, 0x31C314u);
    ctx->pc = 0x31C310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C30Cu;
            // 0x31c310: 0x24842e80  addiu       $a0, $a0, 0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C314u; }
        if (ctx->pc != 0x31C314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C314u; }
        if (ctx->pc != 0x31C314u) { return; }
    }
    ctx->pc = 0x31C314u;
label_31c314:
    // 0x31c314: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c318: 0xc0450a6  jal         func_114298
    ctx->pc = 0x31C318u;
    SET_GPR_U32(ctx, 31, 0x31C320u);
    ctx->pc = 0x31C31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C318u;
            // 0x31c31c: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C320u; }
        if (ctx->pc != 0x31C320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C320u; }
        if (ctx->pc != 0x31C320u) { return; }
    }
    ctx->pc = 0x31C320u;
label_31c320:
    // 0x31c320: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C320u;
    {
        const bool branch_taken_0x31c320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C320u;
            // 0x31c324: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c320) {
            ctx->pc = 0x31C340u;
            goto label_31c340;
        }
    }
    ctx->pc = 0x31C328u;
    // 0x31c328: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31c32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c330: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C330u;
    SET_GPR_U32(ctx, 31, 0x31C338u);
    ctx->pc = 0x31C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C330u;
            // 0x31c334: 0x24842ea0  addiu       $a0, $a0, 0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C338u; }
        if (ctx->pc != 0x31C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C338u; }
        if (ctx->pc != 0x31C338u) { return; }
    }
    ctx->pc = 0x31C338u;
label_31c338:
    // 0x31c338: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x31C338u;
    {
        const bool branch_taken_0x31c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C338u;
            // 0x31c33c: 0xaf90a3d8  sw          $s0, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c338) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C340u;
label_31c340:
    // 0x31c340: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x31C340u;
    SET_GPR_U32(ctx, 31, 0x31C348u);
    ctx->pc = 0x31C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C340u;
            // 0x31c344: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C348u; }
        if (ctx->pc != 0x31C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C348u; }
        if (ctx->pc != 0x31C348u) { return; }
    }
    ctx->pc = 0x31C348u;
label_31c348:
    // 0x31c348: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c350: 0x24842ed0  addiu       $a0, $a0, 0x2ED0
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11984));
    // 0x31c354: 0x27a6049c  addiu       $a2, $sp, 0x49C
    ctx->pc = 0x31c354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1180));
    // 0x31c358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c35c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31c35cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c360: 0xc0524dc  jal         func_149370
    ctx->pc = 0x31C360u;
    SET_GPR_U32(ctx, 31, 0x31C368u);
    ctx->pc = 0x31C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C360u;
            // 0x31c364: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C368u; }
        if (ctx->pc != 0x31C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C368u; }
        if (ctx->pc != 0x31C368u) { return; }
    }
    ctx->pc = 0x31C368u;
label_31c368:
    // 0x31c368: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x31C368u;
    {
        const bool branch_taken_0x31c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c368) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C370u;
    // 0x31c370: 0x8fa2049c  lw          $v0, 0x49C($sp)
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x31c374: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c378: 0x24842ef0  addiu       $a0, $a0, 0x2EF0
    ctx->pc = 0x31c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12016));
    // 0x31c37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31c37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c380: 0xc0450a6  jal         func_114298
    ctx->pc = 0x31C380u;
    SET_GPR_U32(ctx, 31, 0x31C388u);
    ctx->pc = 0x31C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C380u;
            // 0x31c384: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C388u; }
        if (ctx->pc != 0x31C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C388u; }
        if (ctx->pc != 0x31C388u) { return; }
    }
    ctx->pc = 0x31C388u;
label_31c388:
    // 0x31c388: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31c388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c38c: 0x6800018  bltz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x31C38Cu;
    {
        const bool branch_taken_0x31c38c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x31C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C38Cu;
            // 0x31c390: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c38c) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C394u;
    // 0x31c394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31c394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c398: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x31C398u;
    SET_GPR_U32(ctx, 31, 0x31C3A0u);
    ctx->pc = 0x31C39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C398u;
            // 0x31c39c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3A0u; }
        if (ctx->pc != 0x31C3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3A0u; }
        if (ctx->pc != 0x31C3A0u) { return; }
    }
    ctx->pc = 0x31C3A0u;
label_31c3a0:
    // 0x31c3a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31c3a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3a4: 0x6600012  bltz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x31C3A4u;
    {
        const bool branch_taken_0x31c3a4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x31C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3A4u;
            // 0x31c3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3a4) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3ACu;
    // 0x31c3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31c3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3b0: 0xc0451a8  jal         func_1146A0
    ctx->pc = 0x31C3B0u;
    SET_GPR_U32(ctx, 31, 0x31C3B8u);
    ctx->pc = 0x31C3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3B0u;
            // 0x31c3b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1146A0u;
    if (runtime->hasFunction(0x1146A0u)) {
        auto targetFn = runtime->lookupFunction(0x1146A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3B8u; }
        if (ctx->pc != 0x31C3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1146a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3B8u; }
        if (ctx->pc != 0x31C3B8u) { return; }
    }
    ctx->pc = 0x31C3B8u;
label_31c3b8:
    // 0x31c3b8: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31C3B8u;
    {
        const bool branch_taken_0x31c3b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31C3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3B8u;
            // 0x31c3bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3b8) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3C0u;
    // 0x31c3c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3c4: 0xc045236  jal         func_1148D8
    ctx->pc = 0x31C3C4u;
    SET_GPR_U32(ctx, 31, 0x31C3CCu);
    ctx->pc = 0x31C3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3C4u;
            // 0x31c3c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1148D8u;
    if (runtime->hasFunction(0x1148D8u)) {
        auto targetFn = runtime->lookupFunction(0x1148D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3CCu; }
        if (ctx->pc != 0x31C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1148d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3CCu; }
        if (ctx->pc != 0x31C3CCu) { return; }
    }
    ctx->pc = 0x31C3CCu;
label_31c3cc:
    // 0x31c3cc: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31C3CCu;
    {
        const bool branch_taken_0x31c3cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3CCu;
            // 0x31c3d0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3cc) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3D4u;
    // 0x31c3d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C3D4u;
    SET_GPR_U32(ctx, 31, 0x31C3DCu);
    ctx->pc = 0x31C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3D4u;
            // 0x31c3d8: 0x24842f10  addiu       $a0, $a0, 0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3DCu; }
        if (ctx->pc != 0x31C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3DCu; }
        if (ctx->pc != 0x31C3DCu) { return; }
    }
    ctx->pc = 0x31C3DCu;
label_31c3dc:
    // 0x31c3dc: 0xc045148  jal         func_114520
    ctx->pc = 0x31C3DCu;
    SET_GPR_U32(ctx, 31, 0x31C3E4u);
    ctx->pc = 0x31C3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3DCu;
            // 0x31c3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3E4u; }
        if (ctx->pc != 0x31C3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C3E4u; }
        if (ctx->pc != 0x31C3E4u) { return; }
    }
    ctx->pc = 0x31C3E4u;
label_31c3e4:
    // 0x31c3e4: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C3E4u;
    {
        const bool branch_taken_0x31c3e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31c3e4) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3ECu;
    // 0x31c3ec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x31c3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c3f0:
    // 0x31c3f0: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C3F0u;
    {
        const bool branch_taken_0x31c3f0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x31C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C3F0u;
            // 0x31c3f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3f0) {
            ctx->pc = 0x31C400u;
            goto label_31c400;
        }
    }
    ctx->pc = 0x31C3F8u;
    // 0x31c3f8: 0xc045148  jal         func_114520
    ctx->pc = 0x31C3F8u;
    SET_GPR_U32(ctx, 31, 0x31C400u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C400u; }
        if (ctx->pc != 0x31C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C400u; }
        if (ctx->pc != 0x31C400u) { return; }
    }
    ctx->pc = 0x31C400u;
label_31c400:
    // 0x31c400: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C400u;
    {
        const bool branch_taken_0x31c400 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C400u;
            // 0x31c404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c400) {
            ctx->pc = 0x31C418u;
            goto label_31c418;
        }
    }
    ctx->pc = 0x31C408u;
    // 0x31c408: 0xc045148  jal         func_114520
    ctx->pc = 0x31C408u;
    SET_GPR_U32(ctx, 31, 0x31C410u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C410u; }
        if (ctx->pc != 0x31C410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C410u; }
        if (ctx->pc != 0x31C410u) { return; }
    }
    ctx->pc = 0x31C410u;
label_31c410:
    // 0x31c410: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x31C410u;
    {
        const bool branch_taken_0x31c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C410u;
            // 0x31c414: 0xaf80a3d8  sw          $zero, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c410) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C418u;
label_31c418:
    // 0x31c418: 0xae330014  sw          $s3, 0x14($s1)
    ctx->pc = 0x31c418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 19));
    // 0x31c41c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c420: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31c424: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31c424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c428: 0xc049c18  jal         func_127060
    ctx->pc = 0x31C428u;
    SET_GPR_U32(ctx, 31, 0x31C430u);
    ctx->pc = 0x31C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C428u;
            // 0x31c42c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C430u; }
        if (ctx->pc != 0x31C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C430u; }
        if (ctx->pc != 0x31C430u) { return; }
    }
    ctx->pc = 0x31C430u;
label_31c430:
    // 0x31c430: 0x8fa6049c  lw          $a2, 0x49C($sp)
    ctx->pc = 0x31c430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x31c434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c438: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x31C438u;
    SET_GPR_U32(ctx, 31, 0x31C440u);
    ctx->pc = 0x31C43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C438u;
            // 0x31c43c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C440u; }
        if (ctx->pc != 0x31C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C440u; }
        if (ctx->pc != 0x31C440u) { return; }
    }
    ctx->pc = 0x31C440u;
label_31c440:
    // 0x31c440: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C440u;
    {
        const bool branch_taken_0x31c440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C440u;
            // 0x31c444: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c440) {
            ctx->pc = 0x31C458u;
            goto label_31c458;
        }
    }
    ctx->pc = 0x31C448u;
    // 0x31c448: 0xc045148  jal         func_114520
    ctx->pc = 0x31C448u;
    SET_GPR_U32(ctx, 31, 0x31C450u);
    ctx->pc = 0x31C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C448u;
            // 0x31c44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C450u; }
        if (ctx->pc != 0x31C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C450u; }
        if (ctx->pc != 0x31C450u) { return; }
    }
    ctx->pc = 0x31C450u;
label_31c450:
    // 0x31c450: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x31C450u;
    {
        const bool branch_taken_0x31c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C450u;
            // 0x31c454: 0xaf92a3d8  sw          $s2, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c450) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C458u;
label_31c458:
    // 0x31c458: 0xc7808680  lwc1        $f0, -0x7980($gp)
    ctx->pc = 0x31c458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c45c: 0x93828684  lbu         $v0, -0x797C($gp)
    ctx->pc = 0x31c45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x31c460: 0x27a30490  addiu       $v1, $sp, 0x490
    ctx->pc = 0x31c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x31c464: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31c464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c468: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x31c468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x31c46c: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x31c46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
label_31c470:
    // 0x31c470: 0xc04a422  jal         func_129088
    ctx->pc = 0x31C470u;
    SET_GPR_U32(ctx, 31, 0x31C478u);
    ctx->pc = 0x31C474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C470u;
            // 0x31c474: 0x27a40490  addiu       $a0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C478u; }
        if (ctx->pc != 0x31C478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C478u; }
        if (ctx->pc != 0x31C478u) { return; }
    }
    ctx->pc = 0x31C478u;
label_31c478:
    // 0x31c478: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x31c478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c47c: 0x27a60490  addiu       $a2, $sp, 0x490
    ctx->pc = 0x31c47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x31c480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c484: 0x24056801  addiu       $a1, $zero, 0x6801
    ctx->pc = 0x31c484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26625));
    // 0x31c488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31c488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c48c: 0xc045456  jal         func_115158
    ctx->pc = 0x31C48Cu;
    SET_GPR_U32(ctx, 31, 0x31C494u);
    ctx->pc = 0x31C490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C48Cu;
            // 0x31c490: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115158u;
    if (runtime->hasFunction(0x115158u)) {
        auto targetFn = runtime->lookupFunction(0x115158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C494u; }
        if (ctx->pc != 0x31C494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl2_0x115158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C494u; }
        if (ctx->pc != 0x31C494u) { return; }
    }
    ctx->pc = 0x31C494u;
label_31c494:
    // 0x31c494: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31c494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c498: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C498u;
    {
        const bool branch_taken_0x31c498 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x31C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C498u;
            // 0x31c49c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c498) {
            ctx->pc = 0x31C4B0u;
            goto label_31c4b0;
        }
    }
    ctx->pc = 0x31C4A0u;
    // 0x31c4a0: 0xc045148  jal         func_114520
    ctx->pc = 0x31C4A0u;
    SET_GPR_U32(ctx, 31, 0x31C4A8u);
    ctx->pc = 0x31C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4A0u;
            // 0x31c4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4A8u; }
        if (ctx->pc != 0x31C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4A8u; }
        if (ctx->pc != 0x31C4A8u) { return; }
    }
    ctx->pc = 0x31C4A8u;
label_31c4a8:
    // 0x31c4a8: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x31C4A8u;
    {
        const bool branch_taken_0x31c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4A8u;
            // 0x31c4ac: 0xaf93a3d8  sw          $s3, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4a8) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C4B0u;
label_31c4b0:
    // 0x31c4b0: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x31C4B0u;
    SET_GPR_U32(ctx, 31, 0x31C4B8u);
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4B8u; }
        if (ctx->pc != 0x31C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4B8u; }
        if (ctx->pc != 0x31C4B8u) { return; }
    }
    ctx->pc = 0x31C4B8u;
label_31c4b8:
    // 0x31c4b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31c4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31c4bc: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x31c4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x31c4c0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x31C4C0u;
    {
        const bool branch_taken_0x31c4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4C0u;
            // 0x31c4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4c0) {
            ctx->pc = 0x31C470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c470;
        }
    }
    ctx->pc = 0x31C4C8u;
    // 0x31c4c8: 0xc045148  jal         func_114520
    ctx->pc = 0x31C4C8u;
    SET_GPR_U32(ctx, 31, 0x31C4D0u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4D0u; }
        if (ctx->pc != 0x31C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4D0u; }
        if (ctx->pc != 0x31C4D0u) { return; }
    }
    ctx->pc = 0x31C4D0u;
label_31c4d0:
    // 0x31c4d0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x31c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x31c4d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c4d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c4dc: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x31c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
    // 0x31c4e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C4E0u;
    SET_GPR_U32(ctx, 31, 0x31C4E8u);
    ctx->pc = 0x31C4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4E0u;
            // 0x31c4e4: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4E8u; }
        if (ctx->pc != 0x31C4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4E8u; }
        if (ctx->pc != 0x31C4E8u) { return; }
    }
    ctx->pc = 0x31C4E8u;
label_31c4e8:
    // 0x31c4e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c4ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c4f0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C4F0u;
    SET_GPR_U32(ctx, 31, 0x31C4F8u);
    ctx->pc = 0x31C4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C4F0u;
            // 0x31c4f4: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4F8u; }
        if (ctx->pc != 0x31C4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C4F8u; }
        if (ctx->pc != 0x31C4F8u) { return; }
    }
    ctx->pc = 0x31C4F8u;
label_31c4f8:
    // 0x31c4f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c4fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c500: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C500u;
    SET_GPR_U32(ctx, 31, 0x31C508u);
    ctx->pc = 0x31C504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C500u;
            // 0x31c504: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C508u; }
        if (ctx->pc != 0x31C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C508u; }
        if (ctx->pc != 0x31C508u) { return; }
    }
    ctx->pc = 0x31C508u;
label_31c508:
    // 0x31c508: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c50c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C50Cu;
    SET_GPR_U32(ctx, 31, 0x31C514u);
    ctx->pc = 0x31C510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C50Cu;
            // 0x31c510: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C514u; }
        if (ctx->pc != 0x31C514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C514u; }
        if (ctx->pc != 0x31C514u) { return; }
    }
    ctx->pc = 0x31C514u;
label_31c514:
    // 0x31c514: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c518: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x31c518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x31c51c: 0x24842f28  addiu       $a0, $a0, 0x2F28
    ctx->pc = 0x31c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12072));
    // 0x31c520: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c524: 0xc0455b4  jal         func_1156D0
    ctx->pc = 0x31C524u;
    SET_GPR_U32(ctx, 31, 0x31C52Cu);
    ctx->pc = 0x31C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C524u;
            // 0x31c528: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1156D0u;
    if (runtime->hasFunction(0x1156D0u)) {
        auto targetFn = runtime->lookupFunction(0x1156D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C52Cu; }
        if (ctx->pc != 0x31C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceFormat_0x1156d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C52Cu; }
        if (ctx->pc != 0x31C52Cu) { return; }
    }
    ctx->pc = 0x31C52Cu;
label_31c52c:
    // 0x31c52c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C52Cu;
    {
        const bool branch_taken_0x31c52c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C52Cu;
            // 0x31c530: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c52c) {
            ctx->pc = 0x31C554u;
            goto label_31c554;
        }
    }
    ctx->pc = 0x31C534u;
    // 0x31c534: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c538: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c53c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C53Cu;
    SET_GPR_U32(ctx, 31, 0x31C544u);
    ctx->pc = 0x31C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C53Cu;
            // 0x31c540: 0x24842f30  addiu       $a0, $a0, 0x2F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C544u; }
        if (ctx->pc != 0x31C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C544u; }
        if (ctx->pc != 0x31C544u) { return; }
    }
    ctx->pc = 0x31C544u;
label_31c544:
    // 0x31c544: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C544u;
    {
        const bool branch_taken_0x31c544 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x31C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C544u;
            // 0x31c548: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c544) {
            ctx->pc = 0x31C558u;
            goto label_31c558;
        }
    }
    ctx->pc = 0x31C54Cu;
    // 0x31c54c: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x31C54Cu;
    {
        const bool branch_taken_0x31c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C54Cu;
            // 0x31c550: 0xaf92a3d8  sw          $s2, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c54c) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C554u;
label_31c554:
    // 0x31c554: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x31c554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31c558:
    // 0x31c558: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x31C558u;
    SET_GPR_U32(ctx, 31, 0x31C560u);
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C560u; }
        if (ctx->pc != 0x31C560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C560u; }
        if (ctx->pc != 0x31C560u) { return; }
    }
    ctx->pc = 0x31C560u;
label_31c560:
    // 0x31c560: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c564: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C564u;
    SET_GPR_U32(ctx, 31, 0x31C56Cu);
    ctx->pc = 0x31C568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C564u;
            // 0x31c568: 0x24842f50  addiu       $a0, $a0, 0x2F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C56Cu; }
        if (ctx->pc != 0x31C56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C56Cu; }
        if (ctx->pc != 0x31C56Cu) { return; }
    }
    ctx->pc = 0x31C56Cu;
label_31c56c:
    // 0x31c56c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c574: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C574u;
    SET_GPR_U32(ctx, 31, 0x31C57Cu);
    ctx->pc = 0x31C578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C574u;
            // 0x31c578: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C57Cu; }
        if (ctx->pc != 0x31C57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C57Cu; }
        if (ctx->pc != 0x31C57Cu) { return; }
    }
    ctx->pc = 0x31C57Cu;
label_31c57c:
    // 0x31c57c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c580: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c584: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C584u;
    SET_GPR_U32(ctx, 31, 0x31C58Cu);
    ctx->pc = 0x31C588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C584u;
            // 0x31c588: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C58Cu; }
        if (ctx->pc != 0x31C58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C58Cu; }
        if (ctx->pc != 0x31C58Cu) { return; }
    }
    ctx->pc = 0x31C58Cu;
label_31c58c:
    // 0x31c58c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31c590: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c594: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C594u;
    SET_GPR_U32(ctx, 31, 0x31C59Cu);
    ctx->pc = 0x31C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C594u;
            // 0x31c598: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C59Cu; }
        if (ctx->pc != 0x31C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C59Cu; }
        if (ctx->pc != 0x31C59Cu) { return; }
    }
    ctx->pc = 0x31C59Cu;
label_31c59c:
    // 0x31c59c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c5a0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C5A0u;
    SET_GPR_U32(ctx, 31, 0x31C5A8u);
    ctx->pc = 0x31C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5A0u;
            // 0x31c5a4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5A8u; }
        if (ctx->pc != 0x31C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5A8u; }
        if (ctx->pc != 0x31C5A8u) { return; }
    }
    ctx->pc = 0x31C5A8u;
label_31c5a8:
    // 0x31c5a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c5ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c5b0: 0x24842d58  addiu       $a0, $a0, 0x2D58
    ctx->pc = 0x31c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11608));
    // 0x31c5b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c5b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5bc: 0xc045964  jal         func_116590
    ctx->pc = 0x31C5BCu;
    SET_GPR_U32(ctx, 31, 0x31C5C4u);
    ctx->pc = 0x31C5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5BCu;
            // 0x31c5c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116590u;
    if (runtime->hasFunction(0x116590u)) {
        auto targetFn = runtime->lookupFunction(0x116590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5C4u; }
        if (ctx->pc != 0x31C5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMount_0x116590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5C4u; }
        if (ctx->pc != 0x31C5C4u) { return; }
    }
    ctx->pc = 0x31C5C4u;
label_31c5c4:
    // 0x31c5c4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C5C4u;
    {
        const bool branch_taken_0x31c5c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5C4u;
            // 0x31c5c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5c4) {
            ctx->pc = 0x31C5ECu;
            goto label_31c5ec;
        }
    }
    ctx->pc = 0x31C5CCu;
    // 0x31c5cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C5D4u;
    SET_GPR_U32(ctx, 31, 0x31C5DCu);
    ctx->pc = 0x31C5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5D4u;
            // 0x31c5d8: 0x24842f60  addiu       $a0, $a0, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5DCu; }
        if (ctx->pc != 0x31C5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5DCu; }
        if (ctx->pc != 0x31C5DCu) { return; }
    }
    ctx->pc = 0x31C5DCu;
label_31c5dc:
    // 0x31c5dc: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C5DCu;
    {
        const bool branch_taken_0x31c5dc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x31C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5DCu;
            // 0x31c5e0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5dc) {
            ctx->pc = 0x31C5F0u;
            goto label_31c5f0;
        }
    }
    ctx->pc = 0x31C5E4u;
    // 0x31c5e4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x31C5E4u;
    {
        const bool branch_taken_0x31c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C5E4u;
            // 0x31c5e8: 0xaf92a3d8  sw          $s2, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5e4) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C5ECu;
label_31c5ec:
    // 0x31c5ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x31c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31c5f0:
    // 0x31c5f0: 0xc043fe4  jal         func_10FF90
    ctx->pc = 0x31C5F0u;
    SET_GPR_U32(ctx, 31, 0x31C5F8u);
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5F8u; }
        if (ctx->pc != 0x31C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C5F8u; }
        if (ctx->pc != 0x31C5F8u) { return; }
    }
    ctx->pc = 0x31C5F8u;
label_31c5f8:
    // 0x31c5f8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c5fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31c5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c600: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C600u;
    SET_GPR_U32(ctx, 31, 0x31C608u);
    ctx->pc = 0x31C604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C600u;
            // 0x31c604: 0x24842f80  addiu       $a0, $a0, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C608u; }
        if (ctx->pc != 0x31C608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C608u; }
        if (ctx->pc != 0x31C608u) { return; }
    }
    ctx->pc = 0x31C608u;
label_31c608:
    // 0x31c608: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x31c608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x31c60c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x31c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x31c610: 0x24c648c0  addiu       $a2, $a2, 0x48C0
    ctx->pc = 0x31c610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18624));
    // 0x31c614: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x31c614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31c618:
    // 0x31c618: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x31c618u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31c61c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31c620: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x31c620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x31c624: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x31c624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x31c628: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31c628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31c62c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x31c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x31c630: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31C630u;
    {
        const bool branch_taken_0x31c630 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x31C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C630u;
            // 0x31c634: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c630) {
            ctx->pc = 0x31C618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c618;
        }
    }
    ctx->pc = 0x31C638u;
    // 0x31c638: 0x27a404a4  addiu       $a0, $sp, 0x4A4
    ctx->pc = 0x31c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    // 0x31c63c: 0xc05220c  jal         func_148830
    ctx->pc = 0x31C63Cu;
    SET_GPR_U32(ctx, 31, 0x31C644u);
    ctx->pc = 0x31C640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C63Cu;
            // 0x31c640: 0x27a504a8  addiu       $a1, $sp, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148830u;
    if (runtime->hasFunction(0x148830u)) {
        auto targetFn = runtime->lookupFunction(0x148830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C644u; }
        if (ctx->pc != 0x31C644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFileHeader__FPiPi_0x148830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C644u; }
        if (ctx->pc != 0x31C644u) { return; }
    }
    ctx->pc = 0x31C644u;
label_31c644:
    // 0x31c644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31c644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c648: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31c648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c64c: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x31c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x31c650: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31c650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c654: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x31C654u;
    {
        const bool branch_taken_0x31c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C654u;
            // 0x31c658: 0xaf82a3e0  sw          $v0, -0x5C20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c654) {
            ctx->pc = 0x31C800u;
            goto label_31c800;
        }
    }
    ctx->pc = 0x31C65Cu;
label_31c65c:
    // 0x31c65c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x31c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31c660: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C660u;
    SET_GPR_U32(ctx, 31, 0x31C668u);
    ctx->pc = 0x31C664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C660u;
            // 0x31c664: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C668u; }
        if (ctx->pc != 0x31C668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C668u; }
        if (ctx->pc != 0x31C668u) { return; }
    }
    ctx->pc = 0x31C668u;
label_31c668:
    // 0x31c668: 0xc0c6e38  jal         func_31B8E0
    ctx->pc = 0x31C668u;
    SET_GPR_U32(ctx, 31, 0x31C670u);
    ctx->pc = 0x31C66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C668u;
            // 0x31c66c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B8E0u;
    if (runtime->hasFunction(0x31B8E0u)) {
        auto targetFn = runtime->lookupFunction(0x31B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C670u; }
        if (ctx->pc != 0x31C670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStr__FPc_0x31b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C670u; }
        if (ctx->pc != 0x31C670u) { return; }
    }
    ctx->pc = 0x31C670u;
label_31c670:
    // 0x31c670: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C670u;
    {
        const bool branch_taken_0x31c670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C670u;
            // 0x31c674: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c670) {
            ctx->pc = 0x31C68Cu;
            goto label_31c68c;
        }
    }
    ctx->pc = 0x31C678u;
    // 0x31c678: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31c678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c67c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C67Cu;
    SET_GPR_U32(ctx, 31, 0x31C684u);
    ctx->pc = 0x31C680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C67Cu;
            // 0x31c680: 0x24842f90  addiu       $a0, $a0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C684u; }
        if (ctx->pc != 0x31C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C684u; }
        if (ctx->pc != 0x31C684u) { return; }
    }
    ctx->pc = 0x31C684u;
label_31c684:
    // 0x31c684: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x31C684u;
    {
        const bool branch_taken_0x31c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c684) {
            ctx->pc = 0x31C7F8u;
            goto label_31c7f8;
        }
    }
    ctx->pc = 0x31C68Cu;
label_31c68c:
    // 0x31c68c: 0x0  nop
    ctx->pc = 0x31c68cu;
    // NOP
    // 0x31c690: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x31c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x31c694: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x31C694u;
    {
        const bool branch_taken_0x31c694 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31C698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C694u;
            // 0x31c698: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c694) {
            ctx->pc = 0x31C7F8u;
            goto label_31c7f8;
        }
    }
    ctx->pc = 0x31C69Cu;
    // 0x31c69c: 0xc0c6e24  jal         func_31B890
    ctx->pc = 0x31C69Cu;
    SET_GPR_U32(ctx, 31, 0x31C6A4u);
    ctx->pc = 0x31B890u;
    if (runtime->hasFunction(0x31B890u)) {
        auto targetFn = runtime->lookupFunction(0x31B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6A4u; }
        if (ctx->pc != 0x31C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvStr__FPc_0x31b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6A4u; }
        if (ctx->pc != 0x31C6A4u) { return; }
    }
    ctx->pc = 0x31C6A4u;
label_31c6a4:
    // 0x31c6a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c6a8: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x31c6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x31c6ac: 0xc0527f4  jal         func_149FD0
    ctx->pc = 0x31C6ACu;
    SET_GPR_U32(ctx, 31, 0x31C6B4u);
    ctx->pc = 0x31C6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6ACu;
            // 0x31c6b0: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FD0u;
    if (runtime->hasFunction(0x149FD0u)) {
        auto targetFn = runtime->lookupFunction(0x149FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6B4u; }
        if (ctx->pc != 0x31C6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DivPathName__FPcPcPc_0x149fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6B4u; }
        if (ctx->pc != 0x31C6B4u) { return; }
    }
    ctx->pc = 0x31C6B4u;
label_31c6b4:
    // 0x31c6b4: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x31c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x31c6b8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31C6B8u;
    SET_GPR_U32(ctx, 31, 0x31C6C0u);
    ctx->pc = 0x31C6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6B8u;
            // 0x31c6bc: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6C0u; }
        if (ctx->pc != 0x31C6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6C0u; }
        if (ctx->pc != 0x31C6C0u) { return; }
    }
    ctx->pc = 0x31C6C0u;
label_31c6c0:
    // 0x31c6c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C6C0u;
    {
        const bool branch_taken_0x31c6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6C0u;
            // 0x31c6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6c0) {
            ctx->pc = 0x31C6F0u;
            goto label_31c6f0;
        }
    }
    ctx->pc = 0x31C6C8u;
    // 0x31c6c8: 0xc0c6e50  jal         func_31B940
    ctx->pc = 0x31C6C8u;
    SET_GPR_U32(ctx, 31, 0x31C6D0u);
    ctx->pc = 0x31C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6C8u;
            // 0x31c6cc: 0x27a40390  addiu       $a0, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B940u;
    if (runtime->hasFunction(0x31B940u)) {
        auto targetFn = runtime->lookupFunction(0x31B940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6D0u; }
        if (ctx->pc != 0x31C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateDir__FPc_0x31b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6D0u; }
        if (ctx->pc != 0x31C6D0u) { return; }
    }
    ctx->pc = 0x31C6D0u;
label_31c6d0:
    // 0x31c6d0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C6D0u;
    {
        const bool branch_taken_0x31c6d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31c6d0) {
            ctx->pc = 0x31C6ECu;
            goto label_31c6ec;
        }
    }
    ctx->pc = 0x31C6D8u;
    // 0x31c6d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31c6d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6dc: 0xc045148  jal         func_114520
    ctx->pc = 0x31C6DCu;
    SET_GPR_U32(ctx, 31, 0x31C6E4u);
    ctx->pc = 0x31C6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6DCu;
            // 0x31c6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6E4u; }
        if (ctx->pc != 0x31C6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C6E4u; }
        if (ctx->pc != 0x31C6E4u) { return; }
    }
    ctx->pc = 0x31C6E4u;
label_31c6e4:
    // 0x31c6e4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x31C6E4u;
    {
        const bool branch_taken_0x31c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C6E4u;
            // 0x31c6e8: 0x8fa204a4  lw          $v0, 0x4A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6e4) {
            ctx->pc = 0x31C8A0u;
            goto label_31c8a0;
        }
    }
    ctx->pc = 0x31C6ECu;
label_31c6ec:
    // 0x31c6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c6f0:
    // 0x31c6f0: 0xa3a004ac  sb          $zero, 0x4AC($sp)
    ctx->pc = 0x31c6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1196), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c6f4: 0xa3a204ad  sb          $v0, 0x4AD($sp)
    ctx->pc = 0x31c6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1197), (uint8_t)GPR_U32(ctx, 2));
    // 0x31c6f8: 0xa3a004ae  sb          $zero, 0x4AE($sp)
    ctx->pc = 0x31c6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1198), (uint8_t)GPR_U32(ctx, 0));
label_31c6fc:
    // 0x31c6fc: 0x0  nop
    ctx->pc = 0x31c6fcu;
    // NOP
    // 0x31c700: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x31c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31c704: 0x8fa204a8  lw          $v0, 0x4A8($sp)
    ctx->pc = 0x31c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x31c708: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31c708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c70c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x31c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x31c710: 0x27a704ac  addiu       $a3, $sp, 0x4AC
    ctx->pc = 0x31c710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1196));
    // 0x31c714: 0xc0481cc  jal         func_120730
    ctx->pc = 0x31C714u;
    SET_GPR_U32(ctx, 31, 0x31C71Cu);
    ctx->pc = 0x31C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C714u;
            // 0x31c718: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120730u;
    if (runtime->hasFunction(0x120730u)) {
        auto targetFn = runtime->lookupFunction(0x120730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C71Cu; }
        if (ctx->pc != 0x31C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x120730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C71Cu; }
        if (ctx->pc != 0x31C71Cu) { return; }
    }
    ctx->pc = 0x31C71Cu;
label_31c71c:
    // 0x31c71c: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31C71Cu;
    {
        const bool branch_taken_0x31c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C71Cu;
            // 0x31c720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c71c) {
            ctx->pc = 0x31C6FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c6fc;
        }
    }
    ctx->pc = 0x31C724u;
    // 0x31c724: 0xc047fc4  jal         func_11FF10
    ctx->pc = 0x31C724u;
    SET_GPR_U32(ctx, 31, 0x31C72Cu);
    ctx->pc = 0x11FF10u;
    if (runtime->hasFunction(0x11FF10u)) {
        auto targetFn = runtime->lookupFunction(0x11FF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C72Cu; }
        if (ctx->pc != 0x31C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x11ff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C72Cu; }
        if (ctx->pc != 0x31C72Cu) { return; }
    }
    ctx->pc = 0x31C72Cu;
label_31c72c:
    // 0x31c72c: 0xc048278  jal         func_1209E0
    ctx->pc = 0x31C72Cu;
    SET_GPR_U32(ctx, 31, 0x31C734u);
    ctx->pc = 0x1209E0u;
    if (runtime->hasFunction(0x1209E0u)) {
        auto targetFn = runtime->lookupFunction(0x1209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C734u; }
        if (ctx->pc != 0x31C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x1209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C734u; }
        if (ctx->pc != 0x31C734u) { return; }
    }
    ctx->pc = 0x31C734u;
label_31c734:
    // 0x31c734: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31C734u;
    {
        const bool branch_taken_0x31c734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C734u;
            // 0x31c738: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c734) {
            ctx->pc = 0x31C6FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c6fc;
        }
    }
    ctx->pc = 0x31C73Cu;
    // 0x31c73c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x31c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x31c740: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C740u;
    SET_GPR_U32(ctx, 31, 0x31C748u);
    ctx->pc = 0x31C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C740u;
            // 0x31c744: 0x24a52d58  addiu       $a1, $a1, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C748u; }
        if (ctx->pc != 0x31C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C748u; }
        if (ctx->pc != 0x31C748u) { return; }
    }
    ctx->pc = 0x31C748u;
label_31c748:
    // 0x31c748: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x31c748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x31c74c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31C74Cu;
    SET_GPR_U32(ctx, 31, 0x31C754u);
    ctx->pc = 0x31C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C74Cu;
            // 0x31c750: 0x27a50410  addiu       $a1, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C754u; }
        if (ctx->pc != 0x31C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C754u; }
        if (ctx->pc != 0x31C754u) { return; }
    }
    ctx->pc = 0x31C754u;
label_31c754:
    // 0x31c754: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x31c754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x31c758: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c75c: 0x24842fa8  addiu       $a0, $a0, 0x2FA8
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12200));
    // 0x31c760: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x31c760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x31c764: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C764u;
    SET_GPR_U32(ctx, 31, 0x31C76Cu);
    ctx->pc = 0x31C768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C764u;
            // 0x31c768: 0x27a60410  addiu       $a2, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C76Cu; }
        if (ctx->pc != 0x31C76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C76Cu; }
        if (ctx->pc != 0x31C76Cu) { return; }
    }
    ctx->pc = 0x31C76Cu;
label_31c76c:
    // 0x31c76c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x31c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x31c770: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x31c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x31c774: 0xc0450a6  jal         func_114298
    ctx->pc = 0x31C774u;
    SET_GPR_U32(ctx, 31, 0x31C77Cu);
    ctx->pc = 0x31C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C774u;
            // 0x31c778: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C77Cu; }
        if (ctx->pc != 0x31C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C77Cu; }
        if (ctx->pc != 0x31C77Cu) { return; }
    }
    ctx->pc = 0x31C77Cu;
label_31c77c:
    // 0x31c77c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31c77cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c780: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C780u;
    {
        const bool branch_taken_0x31c780 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x31C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C780u;
            // 0x31c784: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c780) {
            ctx->pc = 0x31C7A0u;
            goto label_31c7a0;
        }
    }
    ctx->pc = 0x31C788u;
    // 0x31c788: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x31c788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    // 0x31c78c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x31c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x31c790: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C790u;
    SET_GPR_U32(ctx, 31, 0x31C798u);
    ctx->pc = 0x31C794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C790u;
            // 0x31c794: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C798u; }
        if (ctx->pc != 0x31C798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C798u; }
        if (ctx->pc != 0x31C798u) { return; }
    }
    ctx->pc = 0x31C798u;
label_31c798:
    // 0x31c798: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x31C798u;
    {
        const bool branch_taken_0x31c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c798) {
            ctx->pc = 0x31C89Cu;
            goto label_31c89c;
        }
    }
    ctx->pc = 0x31C7A0u;
label_31c7a0:
    // 0x31c7a0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x31c7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31c7a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7a8: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x31C7A8u;
    SET_GPR_U32(ctx, 31, 0x31C7B0u);
    ctx->pc = 0x31C7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7A8u;
            // 0x31c7ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7B0u; }
        if (ctx->pc != 0x31C7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7B0u; }
        if (ctx->pc != 0x31C7B0u) { return; }
    }
    ctx->pc = 0x31C7B0u;
label_31c7b0:
    // 0x31c7b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31c7b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7b4: 0x6a10005  bgez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C7B4u;
    {
        const bool branch_taken_0x31c7b4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x31C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7B4u;
            // 0x31c7b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7b4) {
            ctx->pc = 0x31C7CCu;
            goto label_31c7cc;
        }
    }
    ctx->pc = 0x31C7BCu;
    // 0x31c7bc: 0xc045148  jal         func_114520
    ctx->pc = 0x31C7BCu;
    SET_GPR_U32(ctx, 31, 0x31C7C4u);
    ctx->pc = 0x31C7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7BCu;
            // 0x31c7c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7C4u; }
        if (ctx->pc != 0x31C7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7C4u; }
        if (ctx->pc != 0x31C7C4u) { return; }
    }
    ctx->pc = 0x31C7C4u;
label_31c7c4:
    // 0x31c7c4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x31C7C4u;
    {
        const bool branch_taken_0x31c7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7C4u;
            // 0x31c7c8: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7c4) {
            ctx->pc = 0x31C89Cu;
            goto label_31c89c;
        }
    }
    ctx->pc = 0x31C7CCu;
label_31c7cc:
    // 0x31c7cc: 0xc045148  jal         func_114520
    ctx->pc = 0x31C7CCu;
    SET_GPR_U32(ctx, 31, 0x31C7D4u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7D4u; }
        if (ctx->pc != 0x31C7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7D4u; }
        if (ctx->pc != 0x31C7D4u) { return; }
    }
    ctx->pc = 0x31C7D4u;
label_31c7d4:
    // 0x31c7d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C7D4u;
    {
        const bool branch_taken_0x31c7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7D4u;
            // 0x31c7d8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7d4) {
            ctx->pc = 0x31C7E4u;
            goto label_31c7e4;
        }
    }
    ctx->pc = 0x31C7DCu;
    // 0x31c7dc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31C7DCu;
    {
        const bool branch_taken_0x31c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7DCu;
            // 0x31c7e0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7dc) {
            ctx->pc = 0x31C89Cu;
            goto label_31c89c;
        }
    }
    ctx->pc = 0x31C7E4u;
label_31c7e4:
    // 0x31c7e4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31C7E4u;
    SET_GPR_U32(ctx, 31, 0x31C7ECu);
    ctx->pc = 0x31C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7E4u;
            // 0x31c7e8: 0x27a50390  addiu       $a1, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7ECu; }
        if (ctx->pc != 0x31C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C7ECu; }
        if (ctx->pc != 0x31C7ECu) { return; }
    }
    ctx->pc = 0x31C7ECu;
label_31c7ec:
    // 0x31c7ec: 0x8f82a3e4  lw          $v0, -0x5C1C($gp)
    ctx->pc = 0x31c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943716)));
    // 0x31c7f0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x31C7F0u;
    {
        const bool branch_taken_0x31c7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C7F0u;
            // 0x31c7f4: 0xaf93a3dc  sw          $s3, -0x5C24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943708), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7f0) {
            ctx->pc = 0x31C89Cu;
            goto label_31c89c;
        }
    }
    ctx->pc = 0x31C7F8u;
label_31c7f8:
    // 0x31c7f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31c7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31c7fc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x31c7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_31c800:
    // 0x31c800: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x31c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x31c804: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31c804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31c808: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x31C808u;
    {
        const bool branch_taken_0x31c808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c808) {
            ctx->pc = 0x31C65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c65c;
        }
    }
    ctx->pc = 0x31C810u;
    // 0x31c810: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31C810u;
    {
        const bool branch_taken_0x31c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c810) {
            ctx->pc = 0x31C89Cu;
            goto label_31c89c;
        }
    }
    ctx->pc = 0x31C818u;
label_31c818:
    // 0x31c818: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31C818u;
    SET_GPR_U32(ctx, 31, 0x31C820u);
    ctx->pc = 0x31C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C818u;
            // 0x31c81c: 0x24842d50  addiu       $a0, $a0, 0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C820u; }
        if (ctx->pc != 0x31C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C820u; }
        if (ctx->pc != 0x31C820u) { return; }
    }
    ctx->pc = 0x31C820u;
label_31c820:
    // 0x31c820: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C820u;
    {
        const bool branch_taken_0x31c820 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C820u;
            // 0x31c824: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c820) {
            ctx->pc = 0x31C830u;
            goto label_31c830;
        }
    }
    ctx->pc = 0x31C828u;
    // 0x31c828: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31C828u;
    {
        const bool branch_taken_0x31c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C828u;
            // 0x31c82c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c828) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C830u;
label_31c830:
    // 0x31c830: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x31c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x31c834: 0x24842e10  addiu       $a0, $a0, 0x2E10
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11792));
    // 0x31c838: 0xc0450a6  jal         func_114298
    ctx->pc = 0x31C838u;
    SET_GPR_U32(ctx, 31, 0x31C840u);
    ctx->pc = 0x31C83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C838u;
            // 0x31c83c: 0x240601ff  addiu       $a2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C840u; }
        if (ctx->pc != 0x31C840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C840u; }
        if (ctx->pc != 0x31C840u) { return; }
    }
    ctx->pc = 0x31C840u;
label_31c840:
    // 0x31c840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c844: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C844u;
    {
        const bool branch_taken_0x31c844 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x31C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C844u;
            // 0x31c848: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c844) {
            ctx->pc = 0x31C854u;
            goto label_31c854;
        }
    }
    ctx->pc = 0x31C84Cu;
    // 0x31c84c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31C84Cu;
    {
        const bool branch_taken_0x31c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C84Cu;
            // 0x31c850: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c84c) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C854u;
label_31c854:
    // 0x31c854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c858: 0x24a52e20  addiu       $a1, $a1, 0x2E20
    ctx->pc = 0x31c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11808));
    // 0x31c85c: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x31C85Cu;
    SET_GPR_U32(ctx, 31, 0x31C864u);
    ctx->pc = 0x31C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C85Cu;
            // 0x31c860: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C864u; }
        if (ctx->pc != 0x31C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C864u; }
        if (ctx->pc != 0x31C864u) { return; }
    }
    ctx->pc = 0x31C864u;
label_31c864:
    // 0x31c864: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C864u;
    {
        const bool branch_taken_0x31c864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31C868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C864u;
            // 0x31c868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c864) {
            ctx->pc = 0x31C880u;
            goto label_31c880;
        }
    }
    ctx->pc = 0x31C86Cu;
    // 0x31c86c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31c86cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c870: 0xc045148  jal         func_114520
    ctx->pc = 0x31C870u;
    SET_GPR_U32(ctx, 31, 0x31C878u);
    ctx->pc = 0x31C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C870u;
            // 0x31c874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C878u; }
        if (ctx->pc != 0x31C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C878u; }
        if (ctx->pc != 0x31C878u) { return; }
    }
    ctx->pc = 0x31C878u;
label_31c878:
    // 0x31c878: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C878u;
    {
        const bool branch_taken_0x31c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c878) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C880u;
label_31c880:
    // 0x31c880: 0xc045148  jal         func_114520
    ctx->pc = 0x31C880u;
    SET_GPR_U32(ctx, 31, 0x31C888u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C888u; }
        if (ctx->pc != 0x31C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C888u; }
        if (ctx->pc != 0x31C888u) { return; }
    }
    ctx->pc = 0x31C888u;
label_31c888:
    // 0x31c888: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c88c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31C88Cu;
    SET_GPR_U32(ctx, 31, 0x31C894u);
    ctx->pc = 0x31C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C88Cu;
            // 0x31c890: 0x24842fe0  addiu       $a0, $a0, 0x2FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C894u; }
        if (ctx->pc != 0x31C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C894u; }
        if (ctx->pc != 0x31C894u) { return; }
    }
    ctx->pc = 0x31C894u;
label_31c894:
    // 0x31c894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C894u;
    {
        const bool branch_taken_0x31c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c894) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C89Cu;
label_31c89c:
    // 0x31c89c: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x31c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_31c8a0:
    // 0x31c8a0: 0x1262ffdd  beq         $s3, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31C8A0u;
    {
        const bool branch_taken_0x31c8a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x31C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8A0u;
            // 0x31c8a4: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8a0) {
            ctx->pc = 0x31C818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c818;
        }
    }
    ctx->pc = 0x31C8A8u;
label_31c8a8:
    // 0x31c8a8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31c8ac: 0xc045a00  jal         func_116800
    ctx->pc = 0x31C8ACu;
    SET_GPR_U32(ctx, 31, 0x31C8B4u);
    ctx->pc = 0x31C8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8ACu;
            // 0x31c8b0: 0x24842d58  addiu       $a0, $a0, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116800u;
    if (runtime->hasFunction(0x116800u)) {
        auto targetFn = runtime->lookupFunction(0x116800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C8B4u; }
        if (ctx->pc != 0x31C8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceUmount_0x116800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C8B4u; }
        if (ctx->pc != 0x31C8B4u) { return; }
    }
    ctx->pc = 0x31C8B4u;
label_31c8b4:
    // 0x31c8b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8B4u;
    {
        const bool branch_taken_0x31c8b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31c8b4) {
            ctx->pc = 0x31C8C4u;
            goto label_31c8c4;
        }
    }
    ctx->pc = 0x31C8BCu;
    // 0x31c8bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31C8BCu;
    {
        const bool branch_taken_0x31c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8BCu;
            // 0x31c8c0: 0xaf82a3d8  sw          $v0, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8bc) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C8C4u;
label_31c8c4:
    // 0x31c8c4: 0x8f83a3e4  lw          $v1, -0x5C1C($gp)
    ctx->pc = 0x31c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943716)));
    // 0x31c8c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C8C8u;
    {
        const bool branch_taken_0x31c8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c8c8) {
            ctx->pc = 0x31C8F0u;
            goto label_31c8f0;
        }
    }
    ctx->pc = 0x31C8D0u;
    // 0x31c8d0: 0xc0c6fd8  jal         func_31BF60
    ctx->pc = 0x31C8D0u;
    SET_GPR_U32(ctx, 31, 0x31C8D8u);
    ctx->pc = 0x31BF60u;
    if (runtime->hasFunction(0x31BF60u)) {
        auto targetFn = runtime->lookupFunction(0x31BF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C8D8u; }
        if (ctx->pc != 0x31C8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UninstallApp__Fv_0x31bf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C8D8u; }
        if (ctx->pc != 0x31C8D8u) { return; }
    }
    ctx->pc = 0x31C8D8u;
label_31c8d8:
    // 0x31c8d8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8D8u;
    {
        const bool branch_taken_0x31c8d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31c8d8) {
            ctx->pc = 0x31C8E8u;
            goto label_31c8e8;
        }
    }
    ctx->pc = 0x31C8E0u;
    // 0x31c8e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C8E0u;
    {
        const bool branch_taken_0x31c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8E0u;
            // 0x31c8e4: 0xaf80a3d8  sw          $zero, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8e0) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C8E8u;
label_31c8e8:
    // 0x31c8e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C8E8u;
    {
        const bool branch_taken_0x31c8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8E8u;
            // 0x31c8ec: 0xaf82a3d8  sw          $v0, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8e8) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C8F0u;
label_31c8f0:
    // 0x31c8f0: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C8F0u;
    {
        const bool branch_taken_0x31c8f0 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x31c8f0) {
            ctx->pc = 0x31C900u;
            goto label_31c900;
        }
    }
    ctx->pc = 0x31C8F8u;
    // 0x31c8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C8F8u;
    {
        const bool branch_taken_0x31c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C8F8u;
            // 0x31c8fc: 0xaf96a3d8  sw          $s6, -0x5C28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8f8) {
            ctx->pc = 0x31C90Cu;
            goto label_31c90c;
        }
    }
    ctx->pc = 0x31C900u;
label_31c900:
    // 0x31c900: 0x8f83a3e0  lw          $v1, -0x5C20($gp)
    ctx->pc = 0x31c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943712)));
    // 0x31c904: 0xaf80a3d8  sw          $zero, -0x5C28($gp)
    ctx->pc = 0x31c904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943704), GPR_U32(ctx, 0));
    // 0x31c908: 0xaf83a3dc  sw          $v1, -0x5C24($gp)
    ctx->pc = 0x31c908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943708), GPR_U32(ctx, 3));
label_31c90c:
    // 0x31c90c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x31c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31c910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31c914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31c918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c91c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31c91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31c920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31c924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C92Cu;
            // 0x31c930: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C934u;
}
