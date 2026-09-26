#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry
// Address: 0x100008 - 0x1000b4
void entry_0x100008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0x100008");
#endif

    switch (ctx->pc) {
        case 0x100018u: goto label_100018;
        case 0x10008cu: goto label_10008c;
        case 0x100094u: goto label_100094;
        case 0x1000acu: goto label_1000ac;
        default: break;
    }

    ctx->pc = 0x100008u;

    // 0x100008: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x100008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x10000c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x10000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x100010: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x100010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x100014: 0x24634e00  addiu       $v1, $v1, 0x4E00
    ctx->pc = 0x100014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19968));
label_100018:
    // 0x100018: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x100018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x10001c: 0x0  nop
    ctx->pc = 0x10001cu;
    // NOP
    // 0x100020: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x100020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x100024: 0x0  nop
    ctx->pc = 0x100024u;
    // NOP
    // 0x100028: 0x0  nop
    ctx->pc = 0x100028u;
    // NOP
    // 0x10002c: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10002Cu;
    {
        const bool branch_taken_0x10002c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x100030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10002Cu;
            // 0x100030: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10002c) {
            ctx->pc = 0x100018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100018;
        }
    }
    ctx->pc = 0x100034u;
    // 0x100034: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x100034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x100038: 0x3c0501f8  lui         $a1, 0x1F8
    ctx->pc = 0x100038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)504 << 16));
    // 0x10003c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x10003cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x100040: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x100040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x100044: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x100044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x100048: 0x2484e4f0  addiu       $a0, $a0, -0x1B10
    ctx->pc = 0x100048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960368));
    // 0x10004c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x10004cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x100050: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x100050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x100054: 0x24e78980  addiu       $a3, $a3, -0x7680
    ctx->pc = 0x100054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936960));
    // 0x100058: 0x250800c0  addiu       $t0, $t0, 0xC0
    ctx->pc = 0x100058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x10005c: 0x80e025  move        $gp, $a0
    ctx->pc = 0x10005cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 4) | GPR_U64(ctx, 0));
    // 0x100060: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x100060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x100064: 0xc  syscall     0
    ctx->pc = 0x100064u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x100068: 0x40e825  move        $sp, $v0
    ctx->pc = 0x100068u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) | GPR_U64(ctx, 0));
    // 0x10006c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x10006cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x100070: 0x3c050000  lui         $a1, 0x0
    ctx->pc = 0x100070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)0 << 16));
    // 0x100074: 0x24844e00  addiu       $a0, $a0, 0x4E00
    ctx->pc = 0x100074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19968));
    // 0x100078: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x100078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10007c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x10007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x100080: 0xc  syscall     0
    ctx->pc = 0x100080u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x100084: 0xc046350  jal         func_118D40
    ctx->pc = 0x100084u;
    SET_GPR_U32(ctx, 31, 0x10008Cu);
    ctx->pc = 0x118D40u;
    if (runtime->hasFunction(0x118D40u)) {
        auto targetFn = runtime->lookupFunction(0x118D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10008Cu; }
        if (ctx->pc != 0x10008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__InitSys_0x118d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10008Cu; }
        if (ctx->pc != 0x10008Cu) { return; }
    }
    ctx->pc = 0x10008Cu;
label_10008c:
    // 0x10008c: 0xc0440d8  jal         func_110360
    ctx->pc = 0x10008Cu;
    SET_GPR_U32(ctx, 31, 0x100094u);
    ctx->pc = 0x100090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10008Cu;
            // 0x100090: 0x2025  move        $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100094u; }
        if (ctx->pc != 0x100094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100094u; }
        if (ctx->pc != 0x100094u) { return; }
    }
    ctx->pc = 0x100094u;
label_100094:
    // 0x100094: 0x42000038  ei
    ctx->pc = 0x100094u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x100098: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x100098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10009c: 0x24428980  addiu       $v0, $v0, -0x7680
    ctx->pc = 0x10009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936960));
    // 0x1000a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1000a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1000a4: 0xc0570e8  jal         func_15C3A0
    ctx->pc = 0x1000A4u;
    SET_GPR_U32(ctx, 31, 0x1000ACu);
    ctx->pc = 0x1000A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1000A4u;
            // 0x1000a8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C3A0u;
    if (runtime->hasFunction(0x15C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1000ACu; }
        if (ctx->pc != 0x1000ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2_main_0x15c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1000ACu; }
        if (ctx->pc != 0x1000ACu) { return; }
    }
    ctx->pc = 0x1000ACu;
label_1000ac:
    // 0x1000ac: 0x80463ec  j           func_118FB0
    ctx->pc = 0x1000ACu;
    ctx->pc = 0x1000B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1000ACu;
            // 0x1000b0: 0x402025  move        $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118FB0u;
    if (runtime->hasFunction(0x118FB0u)) {
        auto targetFn = runtime->lookupFunction(0x118FB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Exit_0x118fb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1000B4u;
}
