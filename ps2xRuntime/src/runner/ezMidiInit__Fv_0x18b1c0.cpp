#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ezMidiInit__Fv
// Address: 0x18b1c0 - 0x18b244
void ezMidiInit__Fv_0x18b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ezMidiInit__Fv_0x18b1c0");
#endif

    switch (ctx->pc) {
        case 0x18b1d0u: goto label_18b1d0;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b1f8u: goto label_18b1f8;
        case 0x18b204u: goto label_18b204;
        default: break;
    }

    ctx->pc = 0x18b1c0u;

    // 0x18b1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b1c8: 0xc044a90  jal         func_112A40
    ctx->pc = 0x18B1C8u;
    SET_GPR_U32(ctx, 31, 0x18B1D0u);
    ctx->pc = 0x18B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1C8u;
            // 0x18b1cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A40u;
    if (runtime->hasFunction(0x112A40u)) {
        auto targetFn = runtime->lookupFunction(0x112A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1D0u; }
        if (ctx->pc != 0x18B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x112a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1D0u; }
        if (ctx->pc != 0x18B1D0u) { return; }
    }
    ctx->pc = 0x18B1D0u;
label_18b1d0:
    // 0x18b1d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18b1d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18b1d8: 0x24843640  addiu       $a0, $a0, 0x3640
    ctx->pc = 0x18b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
    // 0x18b1dc: 0x34452346  ori         $a1, $v0, 0x2346
    ctx->pc = 0x18b1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9030);
    // 0x18b1e0: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x18B1E0u;
    SET_GPR_U32(ctx, 31, 0x18B1E8u);
    ctx->pc = 0x18B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1E0u;
            // 0x18b1e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (runtime->hasFunction(0x1130B0u)) {
        auto targetFn = runtime->lookupFunction(0x1130B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1E8u; }
        if (ctx->pc != 0x18B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1130b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1E8u; }
        if (ctx->pc != 0x18B1E8u) { return; }
    }
    ctx->pc = 0x18B1E8u;
label_18b1e8:
    // 0x18b1e8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1E8u;
    {
        const bool branch_taken_0x18b1e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1E8u;
            // 0x18b1ec: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1e8) {
            ctx->pc = 0x18B200u;
            goto label_18b200;
        }
    }
    ctx->pc = 0x18B1F0u;
    // 0x18b1f0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18B1F0u;
    SET_GPR_U32(ctx, 31, 0x18B1F8u);
    ctx->pc = 0x18B1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1F0u;
            // 0x18b1f4: 0x24844a20  addiu       $a0, $a0, 0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1F8u; }
        if (ctx->pc != 0x18B1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1F8u; }
        if (ctx->pc != 0x18B1F8u) { return; }
    }
    ctx->pc = 0x18B1F8u;
label_18b1f8:
    // 0x18b1f8: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x18B1F8u;
    {
        const bool branch_taken_0x18b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1f8) {
            ctx->pc = 0x18B1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b1f8;
        }
    }
    ctx->pc = 0x18B200u;
label_18b200:
    // 0x18b200: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x18b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_18b204:
    // 0x18b204: 0x0  nop
    ctx->pc = 0x18b204u;
    // NOP
    // 0x18b208: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b20c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b210: 0x0  nop
    ctx->pc = 0x18b210u;
    // NOP
    // 0x18b214: 0x0  nop
    ctx->pc = 0x18b214u;
    // NOP
    // 0x18b218: 0x0  nop
    ctx->pc = 0x18b218u;
    // NOP
    // 0x18b21c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B21Cu;
    {
        const bool branch_taken_0x18b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b21c) {
            ctx->pc = 0x18B204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b204;
        }
    }
    ctx->pc = 0x18B224u;
    // 0x18b224: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18b228: 0x8c223664  lw          $v0, 0x3664($at)
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13924)));
    // 0x18b22c: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x18B22Cu;
    {
        const bool branch_taken_0x18b22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b22c) {
            ctx->pc = 0x18B1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b1d0;
        }
    }
    ctx->pc = 0x18B234u;
    // 0x18b234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b23c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B23Cu;
            // 0x18b240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B244u;
}
