#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: main
// Address: 0x15c3a0 - 0x15c41c
void ps2_main_0x15c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_main_0x15c3a0");
#endif

    switch (ctx->pc) {
        case 0x15c3b4u: goto label_15c3b4;
        case 0x15c3c0u: goto label_15c3c0;
        case 0x15c3c8u: goto label_15c3c8;
        case 0x15c3d8u: goto label_15c3d8;
        case 0x15c3e0u: goto label_15c3e0;
        case 0x15c3ecu: goto label_15c3ec;
        case 0x15c3f4u: goto label_15c3f4;
        case 0x15c3fcu: goto label_15c3fc;
        case 0x15c404u: goto label_15c404;
        case 0x15c40cu: goto label_15c40c;
        default: break;
    }

    ctx->pc = 0x15c3a0u;

    // 0x15c3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c3a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15c3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c3ac: 0xc043ff4  jal         func_10FFD0
    ctx->pc = 0x15C3ACu;
    SET_GPR_U32(ctx, 31, 0x15C3B4u);
    ctx->pc = 0x15C3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3ACu;
            // 0x15c3b0: 0xaf828058  sw          $v0, -0x7FA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FFD0u;
    if (runtime->hasFunction(0x10FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x10FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3B4u; }
        if (ctx->pc != 0x15C3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3B4u; }
        if (ctx->pc != 0x15C3B4u) { return; }
    }
    ctx->pc = 0x15C3B4u;
label_15c3b4:
    // 0x15c3b4: 0x8f858058  lw          $a1, -0x7FA8($gp)
    ctx->pc = 0x15c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934616)));
    // 0x15c3b8: 0xc043fdc  jal         func_10FF70
    ctx->pc = 0x15C3B8u;
    SET_GPR_U32(ctx, 31, 0x15C3C0u);
    ctx->pc = 0x15C3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3B8u;
            // 0x15c3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF70u;
    if (runtime->hasFunction(0x10FF70u)) {
        auto targetFn = runtime->lookupFunction(0x10FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3C0u; }
        if (ctx->pc != 0x15C3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x10ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3C0u; }
        if (ctx->pc != 0x15C3C0u) { return; }
    }
    ctx->pc = 0x15C3C0u;
label_15c3c0:
    // 0x15c3c0: 0xc057058  jal         func_15C160
    ctx->pc = 0x15C3C0u;
    SET_GPR_U32(ctx, 31, 0x15C3C8u);
    ctx->pc = 0x15C160u;
    if (runtime->hasFunction(0x15C160u)) {
        auto targetFn = runtime->lookupFunction(0x15C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3C8u; }
        if (ctx->pc != 0x15C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        init__Fv_0x15c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3C8u; }
        if (ctx->pc != 0x15C3C8u) { return; }
    }
    ctx->pc = 0x15C3C8u;
label_15c3c8:
    // 0x15c3c8: 0x8f858908  lw          $a1, -0x76F8($gp)
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x15c3cc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15c3d0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x15C3D0u;
    SET_GPR_U32(ctx, 31, 0x15C3D8u);
    ctx->pc = 0x15C3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3D0u;
            // 0x15c3d4: 0x24842b90  addiu       $a0, $a0, 0x2B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3D8u; }
        if (ctx->pc != 0x15C3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3D8u; }
        if (ctx->pc != 0x15C3D8u) { return; }
    }
    ctx->pc = 0x15C3D8u;
label_15c3d8:
    // 0x15c3d8: 0xc06432c  jal         func_190CB0
    ctx->pc = 0x15C3D8u;
    SET_GPR_U32(ctx, 31, 0x15C3E0u);
    ctx->pc = 0x190CB0u;
    if (runtime->hasFunction(0x190CB0u)) {
        auto targetFn = runtime->lookupFunction(0x190CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3E0u; }
        if (ctx->pc != 0x15C3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MainLoop__Fv_0x190cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3E0u; }
        if (ctx->pc != 0x15C3E0u) { return; }
    }
    ctx->pc = 0x15C3E0u;
label_15c3e0:
    // 0x15c3e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3e4: 0xc040ce6  jal         func_103398
    ctx->pc = 0x15C3E4u;
    SET_GPR_U32(ctx, 31, 0x15C3ECu);
    ctx->pc = 0x15C3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3E4u;
            // 0x15c3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3ECu; }
        if (ctx->pc != 0x15C3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3ECu; }
        if (ctx->pc != 0x15C3ECu) { return; }
    }
    ctx->pc = 0x15C3ECu;
label_15c3ec:
    // 0x15c3ec: 0xc04107a  jal         func_1041E8
    ctx->pc = 0x15C3ECu;
    SET_GPR_U32(ctx, 31, 0x15C3F4u);
    ctx->pc = 0x15C3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3ECu;
            // 0x15c3f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E8u;
    if (runtime->hasFunction(0x1041E8u)) {
        auto targetFn = runtime->lookupFunction(0x1041E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3F4u; }
        if (ctx->pc != 0x15C3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncVCallback_0x1041e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3F4u; }
        if (ctx->pc != 0x15C3F4u) { return; }
    }
    ctx->pc = 0x15C3F4u;
label_15c3f4:
    // 0x15c3f4: 0xc040cc0  jal         func_103300
    ctx->pc = 0x15C3F4u;
    SET_GPR_U32(ctx, 31, 0x15C3FCu);
    ctx->pc = 0x15C3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3F4u;
            // 0x15c3f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3FCu; }
        if (ctx->pc != 0x15C3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C3FCu; }
        if (ctx->pc != 0x15C3FCu) { return; }
    }
    ctx->pc = 0x15C3FCu;
label_15c3fc:
    // 0x15c3fc: 0xc048064  jal         func_120190
    ctx->pc = 0x15C3FCu;
    SET_GPR_U32(ctx, 31, 0x15C404u);
    ctx->pc = 0x15C400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C3FCu;
            // 0x15c400: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120190u;
    if (runtime->hasFunction(0x120190u)) {
        auto targetFn = runtime->lookupFunction(0x120190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C404u; }
        if (ctx->pc != 0x15C404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x120190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C404u; }
        if (ctx->pc != 0x15C404u) { return; }
    }
    ctx->pc = 0x15C404u;
label_15c404:
    // 0x15c404: 0xc04497c  jal         func_1125F0
    ctx->pc = 0x15C404u;
    SET_GPR_U32(ctx, 31, 0x15C40Cu);
    ctx->pc = 0x1125F0u;
    if (runtime->hasFunction(0x1125F0u)) {
        auto targetFn = runtime->lookupFunction(0x1125F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C40Cu; }
        if (ctx->pc != 0x15C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifExitCmd_0x1125f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C40Cu; }
        if (ctx->pc != 0x15C40Cu) { return; }
    }
    ctx->pc = 0x15C40Cu;
label_15c40c:
    // 0x15c40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c414: 0x3e00008  jr          $ra
    ctx->pc = 0x15C414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C414u;
            // 0x15c418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C41Cu;
}
