#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: init__Fv
// Address: 0x15c160 - 0x15c398
void init__Fv_0x15c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("init__Fv_0x15c160");
#endif

    switch (ctx->pc) {
        case 0x15c170u: goto label_15c170;
        case 0x15c178u: goto label_15c178;
        case 0x15c18cu: goto label_15c18c;
        case 0x15c198u: goto label_15c198;
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1b0u: goto label_15c1b0;
        case 0x15c1b8u: goto label_15c1b8;
        case 0x15c1c0u: goto label_15c1c0;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1d4u: goto label_15c1d4;
        case 0x15c1e8u: goto label_15c1e8;
        case 0x15c1f0u: goto label_15c1f0;
        case 0x15c210u: goto label_15c210;
        case 0x15c218u: goto label_15c218;
        case 0x15c220u: goto label_15c220;
        case 0x15c228u: goto label_15c228;
        case 0x15c238u: goto label_15c238;
        case 0x15c24cu: goto label_15c24c;
        case 0x15c258u: goto label_15c258;
        case 0x15c26cu: goto label_15c26c;
        case 0x15c274u: goto label_15c274;
        case 0x15c28cu: goto label_15c28c;
        case 0x15c294u: goto label_15c294;
        case 0x15c2acu: goto label_15c2ac;
        case 0x15c2b4u: goto label_15c2b4;
        case 0x15c2ccu: goto label_15c2cc;
        case 0x15c2d4u: goto label_15c2d4;
        case 0x15c2ecu: goto label_15c2ec;
        case 0x15c2f4u: goto label_15c2f4;
        case 0x15c30cu: goto label_15c30c;
        case 0x15c314u: goto label_15c314;
        case 0x15c32cu: goto label_15c32c;
        case 0x15c334u: goto label_15c334;
        case 0x15c34cu: goto label_15c34c;
        case 0x15c354u: goto label_15c354;
        case 0x15c36cu: goto label_15c36c;
        case 0x15c37cu: goto label_15c37c;
        case 0x15c384u: goto label_15c384;
        case 0x15c38cu: goto label_15c38c;
        default: break;
    }

    ctx->pc = 0x15c160u;

    // 0x15c160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c168: 0xc0410ba  jal         func_1042E8
    ctx->pc = 0x15C168u;
    SET_GPR_U32(ctx, 31, 0x15C170u);
    ctx->pc = 0x15C16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C168u;
            // 0x15c16c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042E8u;
    if (runtime->hasFunction(0x1042E8u)) {
        auto targetFn = runtime->lookupFunction(0x1042E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C170u; }
        if (ctx->pc != 0x15C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x1042e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C170u; }
        if (ctx->pc != 0x15C170u) { return; }
    }
    ctx->pc = 0x15C170u;
label_15c170:
    // 0x15c170: 0xc0409f4  jal         func_1027D0
    ctx->pc = 0x15C170u;
    SET_GPR_U32(ctx, 31, 0x15C178u);
    ctx->pc = 0x1027D0u;
    if (runtime->hasFunction(0x1027D0u)) {
        auto targetFn = runtime->lookupFunction(0x1027D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C178u; }
        if (ctx->pc != 0x15C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x1027d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C178u; }
        if (ctx->pc != 0x15C178u) { return; }
    }
    ctx->pc = 0x15C178u;
label_15c178:
    // 0x15c178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c180: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c184: 0xc04098c  jal         func_102630
    ctx->pc = 0x15C184u;
    SET_GPR_U32(ctx, 31, 0x15C18Cu);
    ctx->pc = 0x15C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C184u;
            // 0x15c188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (runtime->hasFunction(0x102630u)) {
        auto targetFn = runtime->lookupFunction(0x102630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C18Cu; }
        if (ctx->pc != 0x15C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x102630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C18Cu; }
        if (ctx->pc != 0x15C18Cu) { return; }
    }
    ctx->pc = 0x15C18Cu;
label_15c18c:
    // 0x15c18c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15c190: 0xc04107a  jal         func_1041E8
    ctx->pc = 0x15C190u;
    SET_GPR_U32(ctx, 31, 0x15C198u);
    ctx->pc = 0x15C194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C190u;
            // 0x15c194: 0x2484c060  addiu       $a0, $a0, -0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E8u;
    if (runtime->hasFunction(0x1041E8u)) {
        auto targetFn = runtime->lookupFunction(0x1041E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C198u; }
        if (ctx->pc != 0x15C198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncVCallback_0x1041e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C198u; }
        if (ctx->pc != 0x15C198u) { return; }
    }
    ctx->pc = 0x15C198u;
label_15c198:
    // 0x15c198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c1a0: 0xc057024  jal         func_15C090
    ctx->pc = 0x15C1A0u;
    SET_GPR_U32(ctx, 31, 0x15C1A8u);
    ctx->pc = 0x15C1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1A0u;
            // 0x15c1a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C090u;
    if (runtime->hasFunction(0x15C090u)) {
        auto targetFn = runtime->lookupFunction(0x15C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1A8u; }
        if (ctx->pc != 0x15C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearScreen__Fiii_0x15c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1A8u; }
        if (ctx->pc != 0x15C1A8u) { return; }
    }
    ctx->pc = 0x15C1A8u;
label_15c1a8:
    // 0x15c1a8: 0xc040064  jal         func_100190
    ctx->pc = 0x15C1A8u;
    SET_GPR_U32(ctx, 31, 0x15C1B0u);
    ctx->pc = 0x100190u;
    if (runtime->hasFunction(0x100190u)) {
        auto targetFn = runtime->lookupFunction(0x100190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1B0u; }
        if (ctx->pc != 0x15C1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mwInit_0x100190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1B0u; }
        if (ctx->pc != 0x15C1B0u) { return; }
    }
    ctx->pc = 0x15C1B0u;
label_15c1b0:
    // 0x15c1b0: 0xc044a90  jal         func_112A40
    ctx->pc = 0x15C1B0u;
    SET_GPR_U32(ctx, 31, 0x15C1B8u);
    ctx->pc = 0x15C1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1B0u;
            // 0x15c1b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1B8u; }
        if (ctx->pc != 0x15C1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1B8u; }
        if (ctx->pc != 0x15C1B8u) { return; }
    }
    ctx->pc = 0x15C1B8u;
label_15c1b8:
    // 0x15c1b8: 0xc048064  jal         func_120190
    ctx->pc = 0x15C1B8u;
    SET_GPR_U32(ctx, 31, 0x15C1C0u);
    ctx->pc = 0x15C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1B8u;
            // 0x15c1bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120190u;
    if (runtime->hasFunction(0x120190u)) {
        auto targetFn = runtime->lookupFunction(0x120190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1C0u; }
        if (ctx->pc != 0x15C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x120190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1C0u; }
        if (ctx->pc != 0x15C1C0u) { return; }
    }
    ctx->pc = 0x15C1C0u;
label_15c1c0:
    // 0x15c1c0: 0xc04819a  jal         func_120668
    ctx->pc = 0x15C1C0u;
    SET_GPR_U32(ctx, 31, 0x15C1C8u);
    ctx->pc = 0x15C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1C0u;
            // 0x15c1c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120668u;
    if (runtime->hasFunction(0x120668u)) {
        auto targetFn = runtime->lookupFunction(0x120668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1C8u; }
        if (ctx->pc != 0x15C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x120668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1C8u; }
        if (ctx->pc != 0x15C1C8u) { return; }
    }
    ctx->pc = 0x15C1C8u;
label_15c1c8:
    // 0x15c1c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c1cc: 0xc04608e  jal         func_118238
    ctx->pc = 0x15C1CCu;
    SET_GPR_U32(ctx, 31, 0x15C1D4u);
    ctx->pc = 0x15C1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C1CCu;
            // 0x15c1d0: 0x24842b70  addiu       $a0, $a0, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118238u;
    if (runtime->hasFunction(0x118238u)) {
        auto targetFn = runtime->lookupFunction(0x118238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1D4u; }
        if (ctx->pc != 0x15C1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x118238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1D4u; }
        if (ctx->pc != 0x15C1D4u) { return; }
    }
    ctx->pc = 0x15C1D4u;
label_15c1d4:
    // 0x15c1d4: 0x0  nop
    ctx->pc = 0x15c1d4u;
    // NOP
    // 0x15c1d8: 0x0  nop
    ctx->pc = 0x15c1d8u;
    // NOP
    // 0x15c1dc: 0x0  nop
    ctx->pc = 0x15c1dcu;
    // NOP
    // 0x15c1e0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C1E0u;
    {
        const bool branch_taken_0x15c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c1e0) {
            ctx->pc = 0x15C1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c1c8;
        }
    }
    ctx->pc = 0x15C1E8u;
label_15c1e8:
    // 0x15c1e8: 0xc046080  jal         func_118200
    ctx->pc = 0x15C1E8u;
    SET_GPR_U32(ctx, 31, 0x15C1F0u);
    ctx->pc = 0x118200u;
    if (runtime->hasFunction(0x118200u)) {
        auto targetFn = runtime->lookupFunction(0x118200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1F0u; }
        if (ctx->pc != 0x15C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x118200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C1F0u; }
        if (ctx->pc != 0x15C1F0u) { return; }
    }
    ctx->pc = 0x15C1F0u;
label_15c1f0:
    // 0x15c1f0: 0x0  nop
    ctx->pc = 0x15c1f0u;
    // NOP
    // 0x15c1f4: 0x0  nop
    ctx->pc = 0x15c1f4u;
    // NOP
    // 0x15c1f8: 0x0  nop
    ctx->pc = 0x15c1f8u;
    // NOP
    // 0x15c1fc: 0x0  nop
    ctx->pc = 0x15c1fcu;
    // NOP
    // 0x15c200: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C200u;
    {
        const bool branch_taken_0x15c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c200) {
            ctx->pc = 0x15C1E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c1e8;
        }
    }
    ctx->pc = 0x15C208u;
    // 0x15c208: 0xc044a90  jal         func_112A40
    ctx->pc = 0x15C208u;
    SET_GPR_U32(ctx, 31, 0x15C210u);
    ctx->pc = 0x15C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C208u;
            // 0x15c20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C210u; }
        if (ctx->pc != 0x15C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C210u; }
        if (ctx->pc != 0x15C210u) { return; }
    }
    ctx->pc = 0x15C210u;
label_15c210:
    // 0x15c210: 0xc048064  jal         func_120190
    ctx->pc = 0x15C210u;
    SET_GPR_U32(ctx, 31, 0x15C218u);
    ctx->pc = 0x15C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C210u;
            // 0x15c214: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120190u;
    if (runtime->hasFunction(0x120190u)) {
        auto targetFn = runtime->lookupFunction(0x120190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C218u; }
        if (ctx->pc != 0x15C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x120190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C218u; }
        if (ctx->pc != 0x15C218u) { return; }
    }
    ctx->pc = 0x15C218u;
label_15c218:
    // 0x15c218: 0xc04819a  jal         func_120668
    ctx->pc = 0x15C218u;
    SET_GPR_U32(ctx, 31, 0x15C220u);
    ctx->pc = 0x15C21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C218u;
            // 0x15c21c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120668u;
    if (runtime->hasFunction(0x120668u)) {
        auto targetFn = runtime->lookupFunction(0x120668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C220u; }
        if (ctx->pc != 0x15C220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x120668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C220u; }
        if (ctx->pc != 0x15C220u) { return; }
    }
    ctx->pc = 0x15C220u;
label_15c220:
    // 0x15c220: 0xc045098  jal         func_114260
    ctx->pc = 0x15C220u;
    SET_GPR_U32(ctx, 31, 0x15C228u);
    ctx->pc = 0x114260u;
    if (runtime->hasFunction(0x114260u)) {
        auto targetFn = runtime->lookupFunction(0x114260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C228u; }
        if (ctx->pc != 0x15C228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x114260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C228u; }
        if (ctx->pc != 0x15C228u) { return; }
    }
    ctx->pc = 0x15C228u;
label_15c228:
    // 0x15c228: 0x8f858908  lw          $a1, -0x76F8($gp)
    ctx->pc = 0x15c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x15c22c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c230: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x15C230u;
    SET_GPR_U32(ctx, 31, 0x15C238u);
    ctx->pc = 0x15C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C230u;
            // 0x15c234: 0x24842b90  addiu       $a0, $a0, 0x2B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C238u; }
        if (ctx->pc != 0x15C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C238u; }
        if (ctx->pc != 0x15C238u) { return; }
    }
    ctx->pc = 0x15C238u;
label_15c238:
    // 0x15c238: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c240: 0x24842bb0  addiu       $a0, $a0, 0x2BB0
    ctx->pc = 0x15c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11184));
    // 0x15c244: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C244u;
    SET_GPR_U32(ctx, 31, 0x15C24Cu);
    ctx->pc = 0x15C248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C244u;
            // 0x15c248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C24Cu; }
        if (ctx->pc != 0x15C24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C24Cu; }
        if (ctx->pc != 0x15C24Cu) { return; }
    }
    ctx->pc = 0x15C24Cu;
label_15c24c:
    // 0x15c24c: 0x0  nop
    ctx->pc = 0x15c24cu;
    // NOP
    // 0x15c250: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C250u;
    {
        const bool branch_taken_0x15c250 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c250) {
            ctx->pc = 0x15C238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c238;
        }
    }
    ctx->pc = 0x15C258u;
label_15c258:
    // 0x15c258: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c25c: 0x24842bd0  addiu       $a0, $a0, 0x2BD0
    ctx->pc = 0x15c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11216));
    // 0x15c260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c264: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C264u;
    SET_GPR_U32(ctx, 31, 0x15C26Cu);
    ctx->pc = 0x15C268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C264u;
            // 0x15c268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C26Cu; }
        if (ctx->pc != 0x15C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C26Cu; }
        if (ctx->pc != 0x15C26Cu) { return; }
    }
    ctx->pc = 0x15C26Cu;
label_15c26c:
    // 0x15c26c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15C26Cu;
    {
        const bool branch_taken_0x15c26c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c26c) {
            ctx->pc = 0x15C258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c258;
        }
    }
    ctx->pc = 0x15C274u;
label_15c274:
    // 0x15c274: 0x0  nop
    ctx->pc = 0x15c274u;
    // NOP
    // 0x15c278: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c27c: 0x24842bf0  addiu       $a0, $a0, 0x2BF0
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11248));
    // 0x15c280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c284: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C284u;
    SET_GPR_U32(ctx, 31, 0x15C28Cu);
    ctx->pc = 0x15C288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C284u;
            // 0x15c288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C28Cu; }
        if (ctx->pc != 0x15C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C28Cu; }
        if (ctx->pc != 0x15C28Cu) { return; }
    }
    ctx->pc = 0x15C28Cu;
label_15c28c:
    // 0x15c28c: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C28Cu;
    {
        const bool branch_taken_0x15c28c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c28c) {
            ctx->pc = 0x15C274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c274;
        }
    }
    ctx->pc = 0x15C294u;
label_15c294:
    // 0x15c294: 0x0  nop
    ctx->pc = 0x15c294u;
    // NOP
    // 0x15c298: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c29c: 0x24842c10  addiu       $a0, $a0, 0x2C10
    ctx->pc = 0x15c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
    // 0x15c2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2a4: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C2A4u;
    SET_GPR_U32(ctx, 31, 0x15C2ACu);
    ctx->pc = 0x15C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2A4u;
            // 0x15c2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2ACu; }
        if (ctx->pc != 0x15C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2ACu; }
        if (ctx->pc != 0x15C2ACu) { return; }
    }
    ctx->pc = 0x15C2ACu;
label_15c2ac:
    // 0x15c2ac: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C2ACu;
    {
        const bool branch_taken_0x15c2ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c2ac) {
            ctx->pc = 0x15C294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c294;
        }
    }
    ctx->pc = 0x15C2B4u;
label_15c2b4:
    // 0x15c2b4: 0x0  nop
    ctx->pc = 0x15c2b4u;
    // NOP
    // 0x15c2b8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c2bc: 0x24842c30  addiu       $a0, $a0, 0x2C30
    ctx->pc = 0x15c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11312));
    // 0x15c2c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2c4: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C2C4u;
    SET_GPR_U32(ctx, 31, 0x15C2CCu);
    ctx->pc = 0x15C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2C4u;
            // 0x15c2c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2CCu; }
        if (ctx->pc != 0x15C2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2CCu; }
        if (ctx->pc != 0x15C2CCu) { return; }
    }
    ctx->pc = 0x15C2CCu;
label_15c2cc:
    // 0x15c2cc: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C2CCu;
    {
        const bool branch_taken_0x15c2cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c2cc) {
            ctx->pc = 0x15C2B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c2b4;
        }
    }
    ctx->pc = 0x15C2D4u;
label_15c2d4:
    // 0x15c2d4: 0x0  nop
    ctx->pc = 0x15c2d4u;
    // NOP
    // 0x15c2d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c2dc: 0x24842c50  addiu       $a0, $a0, 0x2C50
    ctx->pc = 0x15c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11344));
    // 0x15c2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2e4: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C2E4u;
    SET_GPR_U32(ctx, 31, 0x15C2ECu);
    ctx->pc = 0x15C2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2E4u;
            // 0x15c2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2ECu; }
        if (ctx->pc != 0x15C2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2ECu; }
        if (ctx->pc != 0x15C2ECu) { return; }
    }
    ctx->pc = 0x15C2ECu;
label_15c2ec:
    // 0x15c2ec: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C2ECu;
    {
        const bool branch_taken_0x15c2ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c2ec) {
            ctx->pc = 0x15C2D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c2d4;
        }
    }
    ctx->pc = 0x15C2F4u;
label_15c2f4:
    // 0x15c2f4: 0x0  nop
    ctx->pc = 0x15c2f4u;
    // NOP
    // 0x15c2f8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c2fc: 0x24842c70  addiu       $a0, $a0, 0x2C70
    ctx->pc = 0x15c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11376));
    // 0x15c300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c304: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C304u;
    SET_GPR_U32(ctx, 31, 0x15C30Cu);
    ctx->pc = 0x15C308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C304u;
            // 0x15c308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C30Cu; }
        if (ctx->pc != 0x15C30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C30Cu; }
        if (ctx->pc != 0x15C30Cu) { return; }
    }
    ctx->pc = 0x15C30Cu;
label_15c30c:
    // 0x15c30c: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C30Cu;
    {
        const bool branch_taken_0x15c30c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c30c) {
            ctx->pc = 0x15C2F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c2f4;
        }
    }
    ctx->pc = 0x15C314u;
label_15c314:
    // 0x15c314: 0x0  nop
    ctx->pc = 0x15c314u;
    // NOP
    // 0x15c318: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c31c: 0x24842c90  addiu       $a0, $a0, 0x2C90
    ctx->pc = 0x15c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11408));
    // 0x15c320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c324: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C324u;
    SET_GPR_U32(ctx, 31, 0x15C32Cu);
    ctx->pc = 0x15C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C324u;
            // 0x15c328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C32Cu; }
        if (ctx->pc != 0x15C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C32Cu; }
        if (ctx->pc != 0x15C32Cu) { return; }
    }
    ctx->pc = 0x15C32Cu;
label_15c32c:
    // 0x15c32c: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C32Cu;
    {
        const bool branch_taken_0x15c32c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c32c) {
            ctx->pc = 0x15C314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c314;
        }
    }
    ctx->pc = 0x15C334u;
label_15c334:
    // 0x15c334: 0x0  nop
    ctx->pc = 0x15c334u;
    // NOP
    // 0x15c338: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c33c: 0x24842cb0  addiu       $a0, $a0, 0x2CB0
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11440));
    // 0x15c340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c344: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C344u;
    SET_GPR_U32(ctx, 31, 0x15C34Cu);
    ctx->pc = 0x15C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C344u;
            // 0x15c348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C34Cu; }
        if (ctx->pc != 0x15C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C34Cu; }
        if (ctx->pc != 0x15C34Cu) { return; }
    }
    ctx->pc = 0x15C34Cu;
label_15c34c:
    // 0x15c34c: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C34Cu;
    {
        const bool branch_taken_0x15c34c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c34c) {
            ctx->pc = 0x15C334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c334;
        }
    }
    ctx->pc = 0x15C354u;
label_15c354:
    // 0x15c354: 0x0  nop
    ctx->pc = 0x15c354u;
    // NOP
    // 0x15c358: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c35c: 0x24842cd0  addiu       $a0, $a0, 0x2CD0
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11472));
    // 0x15c360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c364: 0xc045f4e  jal         func_117D38
    ctx->pc = 0x15C364u;
    SET_GPR_U32(ctx, 31, 0x15C36Cu);
    ctx->pc = 0x15C368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C364u;
            // 0x15c368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117D38u;
    if (runtime->hasFunction(0x117D38u)) {
        auto targetFn = runtime->lookupFunction(0x117D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C36Cu; }
        if (ctx->pc != 0x15C36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x117d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C36Cu; }
        if (ctx->pc != 0x15C36Cu) { return; }
    }
    ctx->pc = 0x15C36Cu;
label_15c36c:
    // 0x15c36c: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15C36Cu;
    {
        const bool branch_taken_0x15c36c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15c36c) {
            ctx->pc = 0x15C354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c354;
        }
    }
    ctx->pc = 0x15C374u;
    // 0x15c374: 0xc0523dc  jal         func_148F70
    ctx->pc = 0x15C374u;
    SET_GPR_U32(ctx, 31, 0x15C37Cu);
    ctx->pc = 0x148F70u;
    if (runtime->hasFunction(0x148F70u)) {
        auto targetFn = runtime->lookupFunction(0x148F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C37Cu; }
        if (ctx->pc != 0x15C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitCDFile__Fv_0x148f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C37Cu; }
        if (ctx->pc != 0x15C37Cu) { return; }
    }
    ctx->pc = 0x15C37Cu;
label_15c37c:
    // 0x15c37c: 0xc0410ba  jal         func_1042E8
    ctx->pc = 0x15C37Cu;
    SET_GPR_U32(ctx, 31, 0x15C384u);
    ctx->pc = 0x15C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C37Cu;
            // 0x15c380: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042E8u;
    if (runtime->hasFunction(0x1042E8u)) {
        auto targetFn = runtime->lookupFunction(0x1042E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C384u; }
        if (ctx->pc != 0x15C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x1042e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C384u; }
        if (ctx->pc != 0x15C384u) { return; }
    }
    ctx->pc = 0x15C384u;
label_15c384:
    // 0x15c384: 0xc0409f4  jal         func_1027D0
    ctx->pc = 0x15C384u;
    SET_GPR_U32(ctx, 31, 0x15C38Cu);
    ctx->pc = 0x1027D0u;
    if (runtime->hasFunction(0x1027D0u)) {
        auto targetFn = runtime->lookupFunction(0x1027D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C38Cu; }
        if (ctx->pc != 0x15C38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x1027d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C38Cu; }
        if (ctx->pc != 0x15C38Cu) { return; }
    }
    ctx->pc = 0x15C38Cu;
label_15c38c:
    // 0x15c38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c390: 0x3e00008  jr          $ra
    ctx->pc = 0x15C390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C390u;
            // 0x15c394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C398u;
}
